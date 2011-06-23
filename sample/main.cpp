#include <s3e.h>
#include <iwgx.h>
#include <pugixml.hpp>

//-----------------------------------------------------------------------------
// Main global function
//-----------------------------------------------------------------------------
int main(int argc, char* argv[])
{
	IwGxInit();

	pugi::xml_document* sampleXml = new pugi::xml_document();
	pugi::xml_parse_result r = sampleXml->load_file("sample1.xml");
	if (r.status != pugi::status_ok)
		IwAssertMsg(TOE, false, (r.description()));

	sampleXml->save_file("sample1_copy.xml");
	delete sampleXml;

	IwGxTerminate ();
}
