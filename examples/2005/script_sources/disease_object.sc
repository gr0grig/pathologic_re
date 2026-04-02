include std.sci

maintask TDiseaseObject
{
	var bool m_bToRemove;

	void init(void) {
		m_bToRemove = false;
		for (;;) {
			@Hold();
		}
	}
	
	void OnTrigger(string strName) {
		if (strName == "cleanup") {
			m_bToRemove = true;
		}
		else if (strName == "restore") {
			m_bToRemove = false;
		}
	}
	
	void OnLoad() {
		if (!m_bToRemove) {
			@SetVisibility(true);
			Block(true);
		}
	}
	
	void OnUnload() {
		if (m_bToRemove) {
			Block(false);
			@RemoveActor(self());
		}
	}
	
	
	void Block(bool bBlock) {
		int id;
		@GetPFPolyID(id);
		if (id != -1) {
			object scene;
			@GetMainOutdoorScene(scene);
			if (bBlock) {
				@Trace("Blocking polygons: " + (id & (127 * 8)));
				scene->BlockPolygons(id, 127 * 8);
			}
			else {
				scene->UnblockPolygons(id, 127 * 8);
			}
		}
		else {
			@Trace("ERROR: Can't find PF polygon to block");
		}
	}
}
