task task_0
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool)
	{
		bool var_7_bool; bool var_8_bool;
		actor->IsLost(var_7_bool); //@t
		if(var_7_bool != 0) {
			actor->Restore(var_8_bool); //@t
			if(!var_8_bool) { //@nz
			}
		}
		bool var_9_bool;
		actor->IsPlaying(var_9_bool); //@t
		if(var_9_bool != 0) {
			actor->StretchBlit(0, 0, var_1_int, var_2_int); //@t
		} else {
			actor->StretchBlit(0, 0, var_1_int, var_2_int); //@t
			@StopEventProcessing();
		}
	
	}

	// @pe
	void event_101(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int)
	{
		if(!var_3_bool) { //@nz
		}
		@StopEventProcessing();
		var_0_object->Stop(); //@t
	}

}


maintask task_1
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool)
	{
		@UISync();
		disable OnSee;
		enable OnSee;
		disable OnUse;
		enable OnUse;
		TaskCall(0);
		func_0(var_6_object, var_7_int, var_8_int, var_9_bool, "fin_utop.wmv", false);
		TaskReturn();
		@DestroyWindow();
		@NewGame("world_final.xml", "player_final.xml");
	}

}


// @pe
void func_0(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, string var_4_string, bool var_5_bool)
{
	var_3_bool = var_5_bool;
	@SetOwnerDraw(true);
	@ShowCursor(false);
	@CaptureKeyboard();
	@GetWindowSize(var_1_int, var_2_int);
	@LoadVideo(var_4_string);
	@FindVideo(var_0_object, var_4_string);
	var_0_object->Play(false); //@t
	@ProcessEvents();
	@SetOwnerDraw(false);
	@ShowCursor(true);
	@ReleaseVideo(var_4_string);
}


