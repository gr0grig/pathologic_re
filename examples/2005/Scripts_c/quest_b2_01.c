maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_6_object; object var_7_object; int var_8_int;
		@Trace(var_2_string);
		if(var_2_string == "place_box") {
			@GetSceneByName(var_6_object, "dt_house_1_04");
			@AddActor(var_0_object, "b2q01_box", var_6_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "b2q01_box.xml");
			var_6_object = null;
		}
		if(var_2_string == "place_mladvlad") {
			@GetSceneByName(var_7_object, "burah_home");
			object var_19_object; object var_20_object;
			var_7_object = var_20_object;
			func_148(var_19_object, var_20_object, "pt_b2q01_mladvlad", "NPC_MladVlad", "b2q01_MladVlad.xml");
			var_1_object = var_19_object;
			func_166("house_vlad@door1", true);
			var_7_object = null;
		}
		if(var_2_string == "remove_mladvlad") {
			if(var_1_object != 0)
				@Trigger(var_1_object, "cleanup");
			func_166("house_vlad@door1", false);
		} else if(var_2_string == "cutscene") {
				object var_55_object;
				func_137(var_55_object, "cs_burah_danko_microscope");
		}
	Label_100:
		for(;;) {

		}
	
		if(var_2_string == "cutscene_end") {
			@SetVariable("b2q01MicroscopeCS", 1);
			goto Label_100;
		}
		if(var_2_string == "cleanup") {
			@GetVariable("b2q01", var_8_int);
			if(var_8_int != 1000)
				func_101();
			else
				func_114(var_8_int);
			if(var_2_string == "fail") {
				func_101();
			} else if(var_2_string == "completed") {
				func_109();
			}
		}
		goto Label_100;
	
	}

}


void func_131(object var_78_object)
{
	object var_80_object;
	@self(var_80_object);
	var_80_object = var_78_object;
}
EMIT "Stack[-1] = 0";


void func_101(void)
{
	@SetVariable("b2q01", -1);
	func_114(var_8_int);
}


void func_166(string var_37_string, bool var_38_bool)
{
	object var_40_object;
	@FindActor(var_40_object, var_37_string);
	if(!var_40_object) //@nz
		@Trace(("Door " + var_37_string) + " not found");
	else
		var_40_object->SetProperty("locked", var_38_bool);
	
}
EMIT "Stack[-1] = 0";


void func_137(object var_55_object, string var_56_string)
{
	object var_59_object;
	@GetMainOutdoorScene(var_59_object);
	object var_60_object;
	@AddBlankActor(var_60_object, var_59_object, var_56_string, (var_56_string + ".bin"));
	var_60_object = var_55_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_109(void)
{
	@SetVariable("b2q01", 1000);
}


void func_114(object var_1_object)
{
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	func_166("house_vlad@door1", false);
	object var_78_object;
	func_131(var_78_object);
	@RemoveActor(var_78_object);
}


void func_148(object var_19_object, object var_20_object, string var_21_string, string var_22_string, string var_23_string)
{
	bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	var_20_object->GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	if(!var_28_bool) //@nz
		@Trace(("Locator " + var_21_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string);
	object var_31_object = var_19_object;
	
}
EMIT "Stack[-1] = 0";


