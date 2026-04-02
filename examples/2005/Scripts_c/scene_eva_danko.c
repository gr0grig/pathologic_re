// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object)
	{
		@SetTimeEvent(1, 144);
		@SetTimeEvent(2, 151.5);
		@SetTimeEvent(3, 180);
		var_0_bool = true;
		object var_10_object; object var_11_object;
		object var_15_object;
		func_135(var_15_object);
		var_15_object = var_11_object;
		func_152(var_10_object, var_11_object, "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
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
			func_135(var_10_object);
			var_10_object = var_6_object;
			func_152(var_5_object, var_6_object, "pt_eva", "NPC_Eva", "NPC_Danko_Eva.xml");
			var_2_object = var_5_object;
		}
		if(var_1_bool != 0) {
			object var_27_object; object var_28_object;
			object var_32_object;
			func_135(var_32_object);
			var_32_object = var_28_object;
			func_152(var_27_object, var_28_object, "pt_eva", "pers_nudegirl", "nudegirl_danko.xml");
			var_3_object = var_27_object;
		}
	}

	void OnGameTime(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		float var_8_float; float var_9_float;
		@Trace((("OnGameTime" + var_4_int) + " ") + var_5_float);
		if(var_4_int == 1) {
			var_0_bool = false;
			var_1_bool = true;
		} else {
				if(var_4_int == 2) {
					if(!var_2_object) { //@nz
						int var_20_int; float var_21_float;
						var_5_float = var_21_float;
						func_170(var_20_int, var_21_float);
					} else {
					@GetGameTime(var_8_float);
					var_8_float += 0.3;
					if(!(var_8_float < 166)) goto Label_88;
					@SetTimeEvent(var_4_int, var_8_float);
				}
				if(!(var_4_int == 3)) goto Label_114;
				bool var_34_bool = false;
				if(!var_3_object) { //@nz
					if(!var_2_object) //@nz
						var_34_bool = true;
				}
				if(var_34_bool != 0) {
					object var_37_object;
					func_141(var_37_object, "quest_d8_02");
					goto Label_114;
				}
				@GetGameTime(var_9_float);
				var_9_float += 0.3;
				if(!(var_9_float < 189)) goto Label_114;
				@SetTimeEvent(var_4_int, var_9_float);
				}
			Label_88:
		}
	Label_114:
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


void func_135(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_170(int var_20_int, float var_21_float)
{
	float var_25_float;
	var_21_float = var_25_float;
	int var_22_int;
	func_179(var_22_int, 533094, 533093, var_25_float);
	var_22_int = var_20_int;
}


void func_141(object var_37_object, string var_38_string)
{
	object var_41_object;
	@GetMainOutdoorScene(var_41_object);
	object var_42_object;
	@AddBlankActor(var_42_object, var_41_object, var_38_string, (var_38_string + ".bin"));
	var_42_object = var_37_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_179(int var_22_int, int var_23_int, int var_24_int, float var_25_float)
{
	int var_27_int;
	@AddMessage(var_23_int, var_24_int, var_25_float, var_27_int);
	@SendWorldWndMessage(6);
	var_27_int = var_22_int;
}


void func_152(object var_10_object, object var_11_object, string var_12_string, string var_13_string, string var_14_string)
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


