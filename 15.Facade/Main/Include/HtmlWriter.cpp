/**
 * @file HtmlWriter.cpp
 * 
 * HtmlWriterクラスのソースファイル
 * @author bigface / created on 2022/02/04
 */

#include "Main/Include/HtmlWriter.hpp"

HtmlWriter::HtmlWriter(std::string filename)
{
  _writer.open(filename, std::ios::out);
}

void HtmlWriter::title(std::string title)
{
  _writer << "<html>" << std::endl;
  _writer << "<head>" << std::endl;
  _writer << "<title>" << title << "</title>" << std::endl;
  _writer << "</head>" << std::endl;
  _writer << "<body>\n" << std::endl;
  _writer << "<h1>" << title << "</h1>\n" << std::endl;
}

void HtmlWriter::paragraph(std::string msg)
{
  _writer << "<p>" << msg << "</p>\n" << std::endl;
}

void HtmlWriter::link(std::string href, std::string caption)
{
  paragraph("<a href=\"" + href + "\">" + caption + "</a>");
}

void HtmlWriter::mailto(std::string mailaddr, std::string username)
{
  link("mailto:" + mailaddr, username);
}

void HtmlWriter::close()
{
  _writer << "</body>" << std::endl;
  _writer << "</html>\n" << std::endl;
  _writer.close();
}