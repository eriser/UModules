#include "UModules.hpp"


// The plugin-wide instance of the Plugin class
Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	plugin->slug = "UModules";
	plugin->name = "UModules";
	//plugin->homepageUrl = "https://github.com/VCVRack/SimpleModule";

	createModel<CompareWidget>(plugin, "Compare", "Compare");
	createModel<UWaveShapeWidget>(plugin, "UWaveShape", "Waveshape");
	createModel<CircularWidget>(plugin, "Circular", "Circular");

	// Any other plugin initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables within this file or the individual module files to reduce startup times of Rack.
}
