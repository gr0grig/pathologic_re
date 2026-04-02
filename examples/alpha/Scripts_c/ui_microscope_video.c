maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int)
	{
		@ClientToScreen(0, 0);
		@GetWindowSize(var_3_int, var_4_int);
		func_37(var_4_int, 0);
		@SetOwnerDraw(true);
		@ProcessEvents();
	}

	void OnUse(object actor, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int)
	{
		actor->StretchBlit(var_1_int, var_2_int, var_3_int, var_4_int); //@t
		@Blit("ocular", 0, 0);
	}

	// @pe
	void event_200(object var_0_object, int var_1_int, int var_2_int, int var_3_int, int var_4_int, int var_5_int, int var_6_int, string var_7_string, object var_8_object)
	{
		if(var_6_int == var_5_int)
			return 0;
		if(var_0_object != 0)
			var_0_object->Stop(); //@t
		var_5_int = var_6_int;
		func_37(var_7_string, var_8_object);
	}

}


void func_37(object var_0_object, int var_5_int)
{
	if(var_5_int == 0) {
		@LoadImage("ui_no_blood.wmv", true);
		@FindVideo(var_0_object, "ui_no_blood.wmv");
		var_0_object->Play(true); //@t
	} else if(var_5_int == 1) {
			@LoadImage("ui_good_blood.wmv", true);
			@FindVideo(var_0_object, "ui_good_blood.wmv");
			var_0_object->Play(true); //@t
	}
Label_78:
	for(;;) {
		return 0;

	}
	
	if(!(var_5_int == 2)) goto Label_78;
	@LoadImage("ui_bad_blood.wmv", true);
	@FindVideo(var_0_object, "ui_bad_blood.wmv");
	var_0_object->Play(true); //@t
}


