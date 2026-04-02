include std.sci

object GetMainMap() {
	object scene, map;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("Can't find main outdoor scene");
		map = null;
		return map;
	}
	scene->GetMap(map);
	return map;
}

// adds standard mark to locator
void AddMapMark(string strName, string strLocator) {
	Vector vLocPos, vLocDir; object scene, map; bool bFound;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	scene->GetLocator(strLocator, bFound, vLocPos, vLocDir);
	if (!bFound) {
		@Trace("Can't find locator : " + strLocator);
	}
	scene->GetMap(map);
	if (map == null) {
		@Trace("Can't find map");
		return;
	}
	map->AddMark(strName, vLocPos.x, vLocPos.z, "ui/ui_map_mark.tga", GetGameTime());
}

// removes mark
void RemoveMapMark(string strName) {
	object scene, map;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	scene->GetMap(map);
	if (map == null) {
		@Trace("Can't find map");
		return;
	}
	object mark;
	map->FindMark(strName, mark);
	if (mark == null) {
		@Trace("Mark to remove was not found : " + strName);
		return;
	}
	mark->Remove();
}

// clears marks from map
void ClearMapMarks() {
	object scene, map;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	scene->GetMap(map);
	if (map == null) {
		@Trace("Can't find map");
		return;
	}
	map->ClearMarks();
}

// shows map with mark in window center
void ShowMapCeneteredToMark(string strName, float fZoom) {
	object scene, map;
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	scene->GetMap(map);
	if (map == null) {
		@Trace("Can't find map");
		return;
	}
	
	object mark;
	map->FindMark(strName, mark);
	if (mark == null) {
		@Trace("Mark to center was not found : " + strName);
		return;	
	}
	float x,y;
	mark->GetPosition(x,y);
	map->SetMapParams(x, y, fZoom);
	@ShowMap(map);
}

void MoveMapCenterToLocator(object map, string strLocator, float fZoom) {
	Vector vLocPos, vLocDir; object scene;
	bool bFound;
	
	@GetMainOutdoorScene(scene);
	if (scene == null) {
		@Trace("Can't find main outdoor scene");
		return;
	}
	
	scene->GetLocator(strLocator, bFound, vLocPos, vLocDir);
	if (!bFound) {
		@Trace("Warning: outdoor scene locator " + strLocator + " doesnt exist");
	}
	
	scene->GetMap(map);
	if (map == null) {
		@Trace("Can't find map");
		return;
	}
	
	map->SetMapParams(vLocPos.x, vLocPos.z, fZoom);
}
