include std.sci

task TStationaryStatic
{
	var int m_iPolyID;
	
	void init(void) {
		@GetPFPolyID(m_iPolyID);
		if (m_iPolyID != -1) {
			m_iPolyID = m_iPolyID / 4 % 256;
		}

		for (;;) {
			if (!IsLoaded()) {
				TWaitForLoad{};
			}
			if (IsReadyToLoad()) {
				object scene;
				@GetScene(scene);
				scene->BlockPolygons(m_iPolyID, 255);
				@SetVisibility(true);
				Loaded();
				TWaitForUnload{};
				@SetVisibility(false);
				scene->UnblockPolygons(m_iPolyID, 255);
			}
			else {
				TWaitForUnload{};
			}
		}
	}
	
	bool IsReadyToLoad(void) {return true;}
	
	void Loaded(void) {}

}
