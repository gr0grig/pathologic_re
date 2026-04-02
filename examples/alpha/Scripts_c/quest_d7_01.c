maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_4_object; object var_5_object;
		@Trace(var_3_string);
		if(var_3_string == "place_birdmasks") {
			@GetMainOutdoorScene(var_5_object);
			object var_8_object; object var_9_object;
			var_5_object = var_9_object;
			func_124(var_8_object, var_9_object, "pt_d7q01_ubirdmask", "pers_birdmask", "d7q01_birdmask1.xml");
			var_0_object = var_8_object;
			object var_26_object; object var_27_object;
			var_5_object = var_27_object;
			func_124(var_26_object, var_27_object, "pt_d7q01_dbirdmask", "pers_birdmask", "d7q01_birdmask2.xml");
			var_1_object = var_26_object;
			object var_31_object; object var_32_object;
			var_5_object = var_32_object;
			func_124(var_31_object, var_32_object, "pt_d7q01_mbirdmask", "pers_birdmask", "d7q01_birdmask3.xml");
			var_2_object = var_31_object;
		} else if(var_3_string == "remove_birdmasks") {
				func_99(var_3_string, var_4_object, Obj());
		}

	
		if(var_3_string == "kill_player") {
			bool var_43_bool;
			func_142(var_43_bool, "player", "die");
		} else if(var_3_string == "sobor_teleport") {
			object var_51_object;
			object var_54_object;
			func_117(var_54_object);
			var_54_object = var_51_object;
			func_154(var_51_object, "sobor", "pt_d7q01_birth");
			@sync();
		} else if(var_3_string == "fail") {
			func_83();
		} else if(var_3_string == "completed") {
			func_91();
		}
	}

}


void func_99(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
}


void func_142(bool var_43_bool, string var_44_string, string var_45_string)
{
	object var_47_object;
	@FindActor(var_47_object, var_44_string);
	if(var_47_object == null)
		var_43_bool = false;
	@Trigger(var_47_object, var_45_string);
	var_43_bool = true;
}
EMIT "Stack[-1] = 0";


void func_112(void)
{
	func_99(var_3_string, var_4_object, var_5_object);
}


void func_83(void)
{
	@SetVariable("d7q01", -1);
	func_112();
}


void func_117(object var_54_object)
{
	object var_56_object;
	@FindActor(var_56_object, "player");
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


void func_154(object var_51_object, string var_52_string, string var_53_string)
{
	if(!var_51_object) { //@nz
	}
	object var_62_object;
	@GetSceneByName(var_62_object, var_52_string);
	bool var_63_bool;
	cvector var_64_cvector;
	cvector var_65_cvector;
	var_62_object->GetLocator(var_53_string, var_63_bool, var_64_cvector, var_65_cvector);
	if(!var_63_bool) //@nz
		@Trace(((("Teleport location '" + var_53_string) + "' not found in scene '") + var_52_string) + "'");
	else
		@Teleport(var_51_object, var_62_object, var_64_cvector, var_65_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_91(void)
{
	@SetVariable("d7q01", 1000);
	func_112();
}


void func_124(object var_8_object, object var_9_object, string var_10_string, string var_11_string, string var_12_string)
{
	bool var_17_bool; cvector var_18_cvector; cvector var_19_cvector;
	var_9_object->GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	if(!var_17_bool) //@nz
		@Trace(("Locator " + var_10_string) + " doesn't exist");
	else
		var_9_object->AddStationaryActor(Obj(), var_18_cvector, var_19_cvector, var_11_string, var_12_string);
	object var_20_object = var_8_object;
	
}
EMIT "Stack[-1] = 0";


