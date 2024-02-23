#pragma once
#include "pch.h"
#include <functional>

class Element
{
public:
	bool m_bSameLine = false;
	std::vector<Element*> Elements;

	Element() {}

	virtual void Render() = 0;

	void AddElement(Element* Element, bool bSameLine = false)
	{
		Element->m_bSameLine = bSameLine;
		Elements.push_back(Element);
	}
};

class Spacing : public Element
{
public:
	Spacing() {};

	void Render() { ImGui::Spacing(); }
};

class Menu : public Element
{
private:
	ImVec2 m_Size;
	std::string m_sName;
	bool* m_pOpen;
	ImGuiWindowFlags m_Flags;

public:
	Menu(ImVec2 Size, std::string sName, bool* pOpen = (bool*)0, ImGuiWindowFlags Flags = 0) : 
		m_Size(Size), m_sName(sName), m_pOpen(pOpen), m_Flags(Flags)
	{};

	void Render()
	{
		ImGui::SetNextWindowSize(m_Size);
		ImGui::Begin(m_sName.c_str(), m_pOpen, m_Flags);
		{
			for (Element* Element : Elements)
				Element->Render();
		}
		ImGui::End();

		Elements.clear();
	}

	void StartRender()
	{
		ImGui::SetNextWindowSize(m_Size);
		ImGui::Begin(m_sName.c_str(), m_pOpen, m_Flags);
		{
			for (Element* Element : Elements)
				Element->Render();
		}
	}

	void EndRender()
	{
		ImGui::End();

		Elements.clear();
	}
};

class Child : public Element
{
private:
	std::string m_sID;
	ImVec2 m_Size;
	ImGuiChildFlags m_ChildFlags;
	ImGuiWindowFlags m_WindowFlags;
	std::function<ImVec2()> m_funcCallback = nullptr;

public:
	Child(std::string sID, ImVec2 Size = ImVec2(0, 0), ImGuiChildFlags ChildFlags = 0, ImGuiWindowFlags WindowFlags = 0) :
		m_sID(sID), m_Size(Size), m_ChildFlags(ChildFlags), m_WindowFlags(WindowFlags)
	{};

	Child(std::string sID, std::function<ImVec2()> funcCallback = nullptr, ImGuiChildFlags ChildFlags = 0, ImGuiWindowFlags WindowFlags = 0) :
		m_sID(sID), m_funcCallback(funcCallback), m_ChildFlags(ChildFlags), m_WindowFlags(WindowFlags)
	{};

	void Render()
	{
		if (m_bSameLine)
			ImGui::SameLine();

		if (m_funcCallback)
			m_Size = m_funcCallback();

		ImGui::BeginChild(m_sID.c_str(), m_Size, m_ChildFlags, m_WindowFlags);
		{
			for (Element* Element : Elements)
				Element->Render();
		}
		ImGui::EndChild();
	};
};

class Text : public Element
{
private:
		std::string m_sText;

public:
	Text(std::string sText) : 
		m_sText(sText)
	{};

	void Render()
	{
		if (m_bSameLine)
			ImGui::SameLine();

		ImGui::Text(m_sText.c_str());
	}

	constexpr std::string GetText(std::string& sText) { return m_sText; }

	void SetText(std::string sText) { m_sText = sText; }
};

class Button : public Element
{
private:
	std::string m_sLabel;
	std::function<void()> m_funcCallback;

public:
	Button(std::string sLabel, std::function<void()> funcCallback = nullptr) : 
		m_sLabel(sLabel), m_funcCallback(funcCallback)
	{};

	void Render()
	{
		if (m_bSameLine)
			ImGui::SameLine();

		if (ImGui::Button(m_sLabel.c_str()))
			if (m_funcCallback)
				m_funcCallback();
	}

	constexpr std::string GetLabel() { return m_sLabel; }
	void SetLabel(std::string sLabel) { m_sLabel = sLabel; }
};

class Combo : public Element
{
private:
	std::string m_sLabel;
	std::string m_sPreviewlabel;
	ImGuiComboFlags m_ComboFlags;
	std::function<void()> m_funcCallback;

public:
	Combo(std::string sLabel, std::string sPreviewlabel, ImGuiComboFlags ComboFlags = 0, std::function<void()> funcCallback = nullptr) : 
		m_sLabel(sLabel), m_sPreviewlabel(sPreviewlabel), m_ComboFlags(ComboFlags), m_funcCallback(funcCallback)
	{};

	void Render()
	{
		if (m_bSameLine)
			ImGui::SameLine();

		if (ImGui::BeginCombo(m_sLabel.c_str(), m_sPreviewlabel.c_str(), m_ComboFlags))
		{
			if (m_funcCallback)
				m_funcCallback();

			ImGui::EndCombo();
		}
	}
};

class Checkbox : public Element
{
private:
	std::string m_sLabel;
	bool* m_pValue;

public:
	Checkbox(std::string sLabel, bool* pValue) : 
		m_sLabel(sLabel), m_pValue(pValue)
	{};

	void Render() { ImGui::Checkbox(m_sLabel.c_str(), m_pValue); }
};