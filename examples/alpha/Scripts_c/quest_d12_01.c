maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(string name)
	{
		object var_5_object; object var_6_object; object var_7_object; object var_8_object;
		@Trace(name);
		if(name == "place_birdmask") {
			@GetMainOutdoorScene(var_5_object);
			object var_11_object; object var_12_object;
			var_5_object = var_12_object;
			func_173(var_11_object, var_12_object, "pt_d12q01_birdmask", "pers_birdmask", "d12q01_birdmask.xml");
			var_5_object = null;
		} else if(name == "init_sobor") {
				@GetSceneByName(var_6_object, "sobor");
				bool var_32_bool;
				func_207(var_32_bool, "NPC_Aglaja");
				@Trigger(var_6_object, "noaglaja");
				object var_38_object; object var_39_object;
				var_6_object = var_39_object;
				func_155(var_38_object, var_39_object, "pt_d12q01_Klara", "NPC_Klara", "d12q01_Klara.xml");
				object var_56_object; object var_57_object;
				var_6_object = var_57_object;
				func_155(var_56_object, var_57_object, "pt_d12q01_Block", "NPC_Block", "d12q01_Block.xml");
				object var_61_object; object var_62_object;
				var_6_object = var_62_object;
				func_155(var_61_object, var_62_object, "pt_d12q01_Burah", "NPC_Burah", "d12q01_Burah.xml");
				object var_66_object; object var_67_object;
				var_6_object = var_67_object;
				func_155(var_66_object, var_67_object, "pt_d12q01_Aglaja", "NPC_Aglaja", "d12q01_Aglaja.xml");
				func_191("isobor@door1", true);
				var_6_object = null;
		}

	
		if(name == "init_theater") {
			@GetSceneByName(var_7_object, "theater");
			object var_84_object; object var_85_object;
			var_7_object = var_85_object;
			func_155(var_84_object, var_85_object, "pt_d12q01_birdmask", "pers_birdmask", "d12q01_tbirdmask.xml");
			object var_89_object; object var_90_object;
			var_7_object = var_90_object;
			func_155(var_89_object, var_90_object, "pt_d12q01_whitemask", "pers_whitemask", "d12q01_twhitemask.xml");
			func_191("itheater@door1", true);
			var_7_object = null;
		} else if(name == "init_mnogogrannik") {
			func_191("hidden_room@door1", false);
			@GetSceneByName(var_8_object, "hidden_room");
			object var_101_object; object var_102_object;
			var_8_object = var_102_object;
			func_155(var_101_object, var_102_object, "pt_girl", "pers_littlegirl2", "d12q01_littlegirl.xml");
			object var_106_object; object var_107_object;
			var_8_object = var_107_object;
			func_155(var_106_object, var_107_object, "pt_boy", "pers_littleboy2", "d12q01_littleboy.xml");
			var_8_object = null;
		} else if(name == "fail") {
			func_137();
		} else if(name == "completed") {
			func_145();
		}
	}

}


void func_137(void)
{
	@SetVariable("d12q01", -1);
	func_153();
}


void func_173(object var_11_object, object var_12_object, string var_13_string, string var_14_string, string var_15_string)
{
	bool var_20_bool; cvector var_21_cvector; cvector var_22_cvector;
	var_12_object->GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector);
	if(!var_20_bool) //@nz
		@Trace(("Locator " + var_13_string) + " doesn't exist");
	else
		var_12_object->AddStationaryActor(Obj(), var_21_cvector, var_22_cvector, var_14_string, var_15_string);
	object var_23_object = var_11_object;
	
}
EMIT "Stack[-1] = 0";


void func_207(bool var_32_bool, string var_33_string)
{
	object var_35_object;
	@FindActor(var_35_object, var_33_string);
	if(!var_35_object) //@nz
		var_32_bool = false;
	@RemoveActor(var_35_object);
	var_32_bool = true;
}
EMIT "Stack[-1] = 0";


void func_145(void)
{
	@SetVariable("d12q01", 1000);
	func_153();
}


void func_153(void)
{
}


void func_155(object var_38_object, object var_39_object, string var_40_string, string var_41_string, string var_42_string)
{
	bool var_47_bool; cvector var_48_cvector; cvector var_49_cvector;
	var_39_object->GetLocator(var_40_string, var_47_bool, var_48_cvector, var_49_cvector);
	if(!var_47_bool) //@nz
		@Trace(("Locator " + var_40_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_41_string, var_39_object, var_48_cvector, var_49_cvector, var_42_string);
	object var_50_object = var_38_object;
	
}
EMIT "Stack[-1] = 0";


void func_191(string var_71_string, bool var_72_bool)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(!var_74_object) //@nz
		@Trace(("Door " + var_71_string) + " not found");
	var_74_object->SetProperty("locked", var_72_bool);
}
EMIT "Stack[-1] = 0";


