maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, string var_6_string)
	{
		@ClientToScreen(0, 0);
		@GetWindowSize(var_3_int, var_4_int);
		func_47(var_4_int, 0, var_6_string);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(object actor, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, string var_6_string)
	{
		bool var_9_bool; bool var_10_bool;
		actor->IsLost(var_9_bool); //@t
		if(var_9_bool != 0) {
			actor->Restore(var_10_bool); //@t
			if(!var_10_bool) { //@nz
			}
		}
		actor->StretchBlit(var_1_int, var_2_int, var_3_int, var_4_int); //@t
		@StretchBlit("ocular", 0, 0, var_3_int, var_4_int);
	}

	// @pe
	void event_200(object var_0_object, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, string var_6_string, int var_7_int, string var_8_string, object var_9_object)
	{
		if(var_7_int == var_5_int)
			return 0;
		if(var_0_object != 0)
			var_0_object->Stop(); //@t
		var_5_int = var_7_int;
		func_47(var_7_int, var_8_string, var_9_object);
	}

}


void func_47(object var_0_object, int var_5_int, string var_6_string)
{
	@ReleaseVideo(var_6_string);
	if(var_5_int == 0) {
		var_6_string = "ui_no_blood.wmv";
	} else if(var_5_int == 1) {
			var_6_string = "ui_blood.wmv";
	}

	for(;;) {
		@LoadVideo(var_6_string);
		@FindVideo(var_0_object, var_6_string);
		var_0_object->Play(true); //@t
		return 0;

	}
	
	if(var_5_int == 2) {
		var_6_string = "ui_diseased_blood.wmv";
	} else if(var_5_int == 3) {
		var_6_string = "ui_diseased_alive_blood.wmv";
	} else if(var_5_int == 4) {
		var_6_string = "ui_bull_blood.wmv";
	} else if(var_5_int == 5) {
		var_6_string = "ui_avroks_blood.wmv";
	} else if(var_5_int == 6) {
		var_6_string = "ui_simon_blood.wmv";
	}
	@Trace("WRONG BLOOD NUMBER");
}


