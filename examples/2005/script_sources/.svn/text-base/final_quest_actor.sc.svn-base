include std.sci

const float c_fFadeTime = 2;

maintask TQuest
{
	void init(void) {
		for (;;) {
			@Hold();
		}
	}

	void OnTrigger(string name) {
		@Trace(name);
		if (name == "voices") {
			@PlaySound("voice");
		}
		else
		if (name == "whiten") {
			
			SetSepia();
			@CameraPlay("final_theater_cam.mot");
			@CameraWaitForPlayFinish();
		
			float fAmount = 0;
			do {
				@Trace(1);
				float fDeltaTime;
				@sync(fDeltaTime);
				fAmount += fDeltaTime * 1.0 / c_fFadeTime;
				@ModDarkenLevel(fAmount);
			} while(fAmount < 1);
			
			DisableSepia();
			@CameraSwitchToNormal();

			@TriggerWorld("exit");			
		}
	}		
}
