// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object)
	{
		@SetTimeEvent(1, 151);
		@SetTimeEvent(2, 151.5);
		@SetTimeEvent(3, 180);
		var_0_bool = true;
		object var_10_object; object var_11_object;
		object var_15_object;
		func_150(var_15_object);
		var_15_object = var_11_object;
		func_167(var_10_object, var_11_object, "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
		var_2_object = var_10_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object)
	{
		if(var_0_bool != 0) {
			object var_5_object; object var_6_object;
			object var_10_object;
			func_150(var_10_object);
			var_10_object = var_6_object;
			func_167(var_5_object, var_6_object, "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
			var_2_object = var_5_object;
		}
		if(var_1_bool != 0) {
			object var_27_object; object var_28_object;
			object var_32_object;
			func_150(var_32_object);
			var_32_object = var_28_object;
			func_167(var_27_object, var_28_object, "pt_eva", "pers_nudegirl", "nudegirl_danko.xml");
			var_3_object = var_27_object;
		}
	}

	void OnGameTime(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		float var_9_float; float var_10_float; float var_11_float;
		@Trace((("OnGameTime" + var_4_int) + " ") + var_5_float);
		if(var_4_int == 1) {
			var_0_bool = false;
			var_1_bool = true;
		} else {
				if(var_4_int == 2) {
					if(!var_2_object) { //@nz
						int var_22_int; float var_23_float;
						var_5_float = var_23_float;
						func_185(var_22_int, var_23_float);
						@GetGameTime(var_9_float);
						@SetTimeEvent(4, (var_9_float + 1));
					} else {
					@GetGameTime(var_10_float);
					var_10_float += 0.3;
					if(!(var_10_float < 190)) goto Label_95;
					@SetTimeEvent(var_4_int, var_10_float);
				}
				if(var_4_int == 3) {
					bool var_38_bool = false;
					if(!var_3_object) { //@nz
						if(!var_2_object) //@nz
							var_38_bool = true;
					}
					if(var_38_bool != 0) {
						object var_41_object;
						func_156(var_41_object, "quest_d8_02");
					} else {
						@GetGameTime(var_11_float);
						var_11_float += 0.3;
						if(!(var_11_float < 189)) goto Label_121;
						@SetTimeEvent(var_4_int, var_11_float);
				}
					if(!(var_4_int == 4)) goto Label_129;
					int var_54_int; float var_55_float;
					var_5_float = var_55_float;
					func_194(var_54_int, var_55_float);
				}
			Label_121:
				goto Label_129;
				}
			Label_95:
		}
	Label_129:
		for(;;) {

		}
	
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object)
	{
		if(var_2_object != 0)
			@RemoveActor(var_2_object);
		if(var_3_object != 0)
			@RemoveActor(var_3_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string)
	{
		if(var_4_string == "noeva") {
			var_0_bool = false;
		} else if(var_4_string == "eva") {
			var_0_bool = true;
		}
	
	}

}


// @pe
void func_194(int var_54_int, float var_55_float)
{
	float var_59_float;
	var_55_float = var_59_float;
	int var_56_int;
	func_203(var_56_int, 533228, 533227, var_59_float);
	var_56_int = var_54_int;
}


void func_167(object var_10_object, object var_11_object, string var_12_string, string var_13_string, string var_14_string)
{
	bool var_22_bool; cvector var_23_cvector; cvector var_24_cvector;
	var_11_object->GetLocator(var_12_string, var_22_bool, var_23_cvector, var_24_cvector);
	if(!var_22_bool) //@nz
		@Trace(("Locator " + var_12_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_13_string, var_11_object, var_23_cvector, var_24_cvector, var_14_string);
	object var_25_object = var_10_object;
	
}
EMIT "Stack[-1] = 0";


void func_203(int var_24_int, int var_25_int, int var_26_int, float var_27_float)
{
	int var_29_int;
	@AddMessage(var_25_int, var_26_int, var_27_float, var_29_int);
	@SendWorldWndMessage(6);
	var_29_int = var_24_int;
}


void func_150(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_185(int var_22_int, float var_23_float)
{
	float var_27_float;
	var_23_float = var_27_float;
	int var_24_int;
	func_203(var_24_int, 533094, 533093, var_27_float);
	var_24_int = var_22_int;
}


void func_156(object var_41_object, string var_42_string)
{
	object var_45_object;
	@GetMainOutdoorScene(var_45_object);
	object var_46_object;
	@AddBlankActor(var_46_object, var_45_object, var_42_string, (var_42_string + ".bin"));
	var_46_object = var_41_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


