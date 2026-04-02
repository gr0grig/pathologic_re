maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		object var_4_object;
		@GetSceneByName(var_4_object, "warehouse_rubin");
		@Trigger(var_4_object, "norubin");
		func_202("sobor@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		int var_5_int; object var_6_object; int var_7_int;
		@Trace(var_3_string);
		if(var_3_string == "place_birdmasks") {
			@GetMainOutdoorScene(var_6_object);
			object var_10_object; object var_11_object;
			var_6_object = var_11_object;
			func_184(var_10_object, var_11_object, "pt_d7q01_ubirdmask", "pers_birdmask", "d7q01_birdmask1.xml");
			var_0_object = var_10_object;
			object var_28_object; object var_29_object;
			var_6_object = var_29_object;
			func_184(var_28_object, var_29_object, "pt_d7q01_dbirdmask", "pers_birdmask", "d7q01_birdmask2.xml");
			var_1_object = var_28_object;
			object var_33_object; object var_34_object;
			var_6_object = var_34_object;
			func_184(var_33_object, var_34_object, "pt_d7q01_mbirdmask", "pers_birdmask", "d7q01_birdmask3.xml");
			var_2_object = var_33_object;
		} else if(var_3_string == "remove_birdmasks") {
				func_133(var_5_int, Obj(), var_7_int);
		}
	Label_116:
		for(;;) {

		}
	
		if(var_3_string == "kill_player") {
			bool var_45_bool;
			func_219(var_45_bool, "player", "die");
		} else if(var_3_string == "sobor_teleport") {
			object var_53_object;
			object var_56_object;
			func_160(var_56_object);
			var_56_object = var_53_object;
			func_231(var_53_object, "sobor", "pt_d7q01_birth");
			@sync();
			object var_77_object;
			func_173(var_77_object, "quest_d7_01_cutscene");
		}
		if(var_3_string == "cleanup") {
			@GetVariable("d7q01", var_7_int);
			if(var_7_int != 1000)
				func_117();
			else
				func_146();
			if(var_3_string == "fail") {
				func_117();
			} else if(var_3_string == "completed") {
				func_125();
			}
		}
		goto Label_116;
	
	}

	// @pe
	void OnKeyDown(object var_0_object, object var_1_object, object var_2_object, int var_3_int)
	{
		@CameraSwitchToNormal();
	}

}


void func_160(object var_56_object)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_133(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
}


void func_231(object var_53_object, string var_54_string, string var_55_string)
{
	if(!var_53_object) { //@nz
	}
	object var_64_object;
	@GetSceneByName(var_64_object, var_54_string);
	bool var_65_bool;
	cvector var_66_cvector;
	cvector var_67_cvector;
	var_64_object->GetLocator(var_55_string, var_65_bool, var_66_cvector, var_67_cvector);
	if(!var_65_bool) //@nz
		@Trace(((("Teleport location '" + var_55_string) + "' not found in scene '") + var_54_string) + "'");
	else
		@Teleport(var_53_object, var_64_object, var_66_cvector, var_67_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_167(object var_92_object)
{
	object var_94_object;
	@self(var_94_object);
	var_94_object = var_92_object;
}
EMIT "Stack[-1] = 0";


void func_202(string var_7_string, bool var_8_bool)
{
	object var_10_object;
	@FindActor(var_10_object, var_7_string);
	if(!var_10_object) //@nz
		@Trace(("Door " + var_7_string) + " not found");
	else
		var_10_object->SetProperty("locked", var_8_bool);
	
}
EMIT "Stack[-1] = 0";


void func_173(object var_77_object, string var_78_string)
{
	object var_81_object;
	@GetMainOutdoorScene(var_81_object);
	object var_82_object;
	@AddBlankActor(var_82_object, var_81_object, var_78_string, (var_78_string + ".bin"));
	var_82_object = var_77_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_146(void)
{
	func_133(var_5_int, var_6_object, var_7_int);
	object var_92_object;
	func_167(var_92_object);
	@RemoveActor(var_92_object);
}


void func_117(void)
{
	@SetVariable("d7q01", -1);
	func_146();
}


void func_184(object var_10_object, object var_11_object, string var_12_string, string var_13_string, string var_14_string)
{
	bool var_19_bool; cvector var_20_cvector; cvector var_21_cvector;
	var_11_object->GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	if(!var_19_bool) //@nz
		@Trace(("Locator " + var_12_string) + " doesn't exist");
	else
		var_11_object->AddStationaryActor(Obj(), var_20_cvector, var_21_cvector, var_13_string, var_14_string);
	object var_22_object = var_10_object;
	
}
EMIT "Stack[-1] = 0";


void func_219(bool var_45_bool, string var_46_string, string var_47_string)
{
	object var_49_object;
	@FindActor(var_49_object, var_46_string);
	if(var_49_object == null)
		var_45_bool = false;
	@Trigger(var_49_object, var_47_string);
	var_45_bool = true;
}
EMIT "Stack[-1] = 0";


void func_125(void)
{
	@SetVariable("d7q01", 1000);
	func_146();
}


