include std.sci

maintask TTheater
{
	void init(void) {
		object k = SpawnActor(self(), "cs_final_theater_klara", "cs_final_theater_klara.xml");
		object d = SpawnActor(self(), "cs_final_theater_danko", "cs_final_theater_danko.xml");
		object b = SpawnActor(self(), "cs_final_theater_burah", "cs_final_theater_burah.xml");
		d->ForceGeometryLoad();
		k->ForceGeometryLoad();
		b->ForceGeometryLoad();
		
		SetSepia();
		@RegisterKeyCallback("space");
		@CameraPlay("cs_final_theater.mot");
		//@PlayGlobalMusic("cs_d5_uprava.ogg");
		@sync();
		TriggerActor("final_quest_actor", "voices");
		
		@CameraWaitForPlayFinish();
		//@PlayGlobalMusic("");
		@UnregisterKeyCallback("space");
		DisableSepia();
		
		@CameraSwitchToNormal();
		
		for (;;) {
			@Hold();
		}
	}
	

	void OnKeyDown(int iVirtKey) {
		@CameraSwitchToNormal();
	}	
}
