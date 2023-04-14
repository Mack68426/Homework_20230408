#pragma once

#include <string>
#include <set>              // balance binary Tree(red-black tree)

class viewer_list
{
public:
	viewer_list(std::string stream);

	std::string stream_name() const;
	void show_viewers() const;
	void add_viewer(std::string);
private:
	std::string m_stream_name;
	std::set<std::string> m_viewers;
};