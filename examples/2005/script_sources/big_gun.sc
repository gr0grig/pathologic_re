include std.sci

maintask TBigGun
{
	void init(void) {
		int id;
		@GetPFPolyID(id);
		if (id != -1) {
			@Trace("Gun blocking polygon: " + (id & (127 * 8)));
			object scene;
			@GetMainOutdoorScene(scene);
			scene->BlockPolygons(id, 127 * 8);
		}
		@Hold();
	}
	
	void OnLoad(void) {
		@SetVisibility(true);
		@StopGroup0();
	}
}
