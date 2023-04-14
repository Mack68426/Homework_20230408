#include "viewer_list.h"

#include <iostream>

std::string viewer_list::stream_name() const
{
	return m_stream_name;
}
void viewer_list::show_viewers() const
{
	for (auto name : m_viewers)
	{
		std::cout << name << std::endl;
	}
}
void viewer_list::add_viewer(std::string viewer_name)
{
	m_viewers.insert(viewer_name);
}
