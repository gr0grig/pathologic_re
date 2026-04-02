// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		object var_4_object;
		@GetSceneByName(var_4_object, "cot_eva");
		func_271("icot_eva_door", false);
		@Trigger(var_4_object, "danko");
		func_254("boiny@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_9_object; object var_10_object; int var_11_int; object var_12_object; int var_13_int;
		@Trace(var_3_string);
		if(var_3_string == "usable_stone") {
			bool var_16_bool;
			func_292(var_16_bool, "b10q01_stone", "enable_use");
		} else if(var_3_string == "place_butchers") {
				@GetMainOutdoorScene(var_9_object);
				object var_24_object; object var_25_object;
				var_9_object = var_25_object;
				func_236(var_24_object, var_25_object, "pt_b10q01_butcher1", "pers_butcher", "b10q01_butcher.xml");
				var_0_object = var_24_object;
				object var_42_object; object var_43_object;
				var_9_object = var_43_object;
				func_236(var_42_object, var_43_object, "pt_b10q01_butcher2", "pers_butcher", "b10q01_butcher.xml");
				var_1_object = var_42_object;
				object var_47_object; object var_48_object;
				var_9_object = var_48_object;
				func_236(var_47_object, var_48_object, "pt_b10q01_butcher3", "pers_butcher", "b10q01_butcher.xml");
				var_2_object = var_47_object;
				object var_52_object;
				func_376(var_52_object);
				var_52_object = var_10_object;
				float var_63_float;
				func_304(var_63_float);
				var_10_object->AddMark("b9q01BurahGotoButcher1", "pt_b10q01_butcher1", 1, 101000, var_63_float);
				float var_70_float;
				func_304(var_70_float);
				var_10_object->AddMark("b9q01BurahGotoButcher2", "pt_b10q01_butcher2", 1, 101000, var_70_float);
				float var_75_float;
				func_304(var_75_float);
				var_10_object->AddMark("b9q01BurahGotoButcher3", "pt_b10q01_butcher3", 1, 101000, var_75_float);
				func_322();
				var_10_object = null;
				var_9_object = null;
		}
	Label_157:
		for(;;) {

		}
	
		if(var_3_string == "butcher_dead") {
			@GetVariable("b10q01Butchers", var_11_int);
			@SetVariable("b10q01Butchers", (var_11_int + 1));
			if((var_11_int + 1) == 3) {
				func_309();
				@FindActor(var_12_object, "player");
				@Trigger(var_12_object, "b10q01_stop");
			}
			goto Label_157;
		}
		if(var_3_string == "cleanup") {
			@GetVariable("b10q01", var_13_int);
			if(var_13_int != 1000)
				func_158();
			else
				func_174(var_11_int, Obj(), var_13_int);
			if(var_3_string == "fail") {
				func_158();
			} else if(var_3_string == "completed") {
				func_166();
			}
		}
		goto Label_157;
	
	}

}


void func_322(void)
{
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 312, 1, 521963);
	bool var_81_bool; object var_82_object;
	var_77_object = var_82_object;
	func_348(var_81_bool, var_82_object, 305);
}
EMIT "Stack[-1] = 0";


void func_292(bool var_16_bool, string var_17_string, string var_18_string)
{
	object var_20_object;
	@FindActor(var_20_object, var_17_string);
	if(var_20_object == null)
		var_16_bool = false;
	@Trigger(var_20_object, var_18_string);
	var_16_bool = true;
}
EMIT "Stack[-1] = 0";


void func_166(void)
{
	@SetVariable("b10q01", 1000);
	func_174(var_11_int, var_12_object, var_13_int);
}


void func_230(object var_153_object)
{
	object var_155_object;
	@self(var_155_object);
	var_155_object = var_153_object;
}
EMIT "Stack[-1] = 0";


void func_236(object var_24_object, object var_25_object, string var_26_string, string var_27_string, string var_28_string)
{
	bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector;
	var_25_object->GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector);
	if(!var_33_bool) //@nz
		@Trace(("Locator " + var_26_string) + " doesn't exist");
	else
		var_25_object->AddStationaryActor(Obj(), var_34_cvector, var_35_cvector, var_27_string, var_28_string);
	object var_36_object = var_24_object;
	
}
EMIT "Stack[-1] = 0";


void func_174(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	bool var_133_bool;
	func_292(var_133_bool, "b10q01_stone", "disable_use");
	object var_136_object;
	func_376(var_136_object);
	object var_128_object;
	var_136_object = var_128_object;
	object var_129_object;
	var_128_object->FindMark(var_129_object, "b9q01BurahGotoButcher1");
	if(var_129_object != 0)
		var_129_object->Remove();
	var_128_object->FindMark(var_129_object, "b9q01BurahGotoButcher2");
	if(var_129_object != 0)
		var_129_object->Remove();
	var_128_object->FindMark(var_129_object, "b9q01BurahGotoButcher3");
	if(var_129_object != 0)
		var_129_object->Remove();
	func_254("boiny@door1", true);
	object var_153_object;
	func_230(var_153_object);
	@RemoveActor(var_153_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_271(string var_6_string, bool var_7_bool)
{
	object var_9_object;
	@FindActor(var_9_object, var_6_string);
	if(!var_9_object) { //@nz
		@Trace(("Door " + var_6_string) + " not found");
	} else {
		if(var_7_bool != 0)
			var_9_object->Close();
		var_9_object->SetProperty("locked", var_7_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_304(float var_63_float)
{
	float var_65_float;
	@GetGameTime(var_65_float);
	var_65_float = var_63_float;
}


void func_335(object var_90_object)
{
	object var_92_object;
	@GetDiaryRoot(var_92_object);
	if(!var_92_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_90_object = false;
	}
	var_92_object = var_90_object;
}
EMIT "Stack[-1] = 0";


void func_309(void)
{
	object var_110_object;
	@CreateDiaryEntry(var_110_object, 308, 1, 521959);
	bool var_114_bool; object var_115_object;
	var_110_object = var_115_object;
	func_348(var_114_bool, var_115_object, 305);
}
EMIT "Stack[-1] = 0";


void func_254(string var_18_string, bool var_19_bool)
{
	object var_21_object;
	@FindActor(var_21_object, var_18_string);
	if(!var_21_object) //@nz
		@Trace(("Door " + var_18_string) + " not found");
	else
		var_21_object->SetProperty("locked", var_19_bool);
	
}
EMIT "Stack[-1] = 0";


void func_376(object var_52_object)
{
	object var_55_object; object var_56_object;
	@GetMainOutdoorScene(var_55_object);
	if(var_55_object == null) {
		@Trace("Can't find main outdoor scene");
		var_56_object = null;
		var_56_object = var_52_object;
	}
	var_55_object->GetMap(var_56_object);
	var_56_object = var_52_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_348(bool var_81_bool, object var_82_object, int var_83_int)
{
	object var_90_object;
	func_335(var_90_object);
	object var_87_object;
	var_90_object = var_87_object;
	object var_88_object;
	var_87_object->Find(var_83_int, var_88_object);
	if(!var_88_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_83_int);
		var_81_bool = false;
	}
	var_88_object->AddChild(var_82_object);
	@SendWorldWndMessage(7);
	int var_89_int;
	var_82_object->GetCategory(var_89_int);
	@SetDiarySection(var_89_int);
	var_81_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_158(void)
{
	@SetVariable("b10q01", -1);
	func_174(var_11_int, var_12_object, var_13_int);
}


