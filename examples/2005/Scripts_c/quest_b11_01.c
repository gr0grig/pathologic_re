// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, object var_1_object)
	{
		func_241("boiny@door1", false);
		object var_4_object;
		@GetActiveScene(var_4_object);
		object var_5_object;
		@GetSceneByName(var_5_object, "storojka");
		if(var_4_object == var_5_object) {
			var_0_bool = true;
		} else {
			object var_18_object; object var_19_object;
			var_5_object = var_19_object;
			func_223(var_18_object, var_19_object, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
			var_1_object = var_18_object;
		}
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(4)";
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";

	void OnTrigger(bool var_0_bool, object var_1_object, string var_2_string)
	{
		object var_6_object; int var_7_int; int var_8_int;
		@Trace(var_2_string);
		if(var_2_string == "storojka_unload") {
			if(var_0_bool != 0) {
				var_0_bool = false;
				@GetSceneByName(var_6_object, "storojka");
				object var_13_object; object var_14_object;
				var_6_object = var_14_object;
				func_223(var_13_object, var_14_object, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
				var_6_object = null;
			}
		} else if(var_2_string == "remove_klara") {
				@Trigger(var_13_object, "cleanup");
		}
	Label_172:
		for(;;) {

		}
	
		if(var_2_string == "open_shaft") {
			bool var_36_bool;
			func_258(var_36_bool, "boiny_shaft_trigger", "activate");
			bool var_42_bool;
			func_294(var_42_bool, "iboiny_stones");
		} else if(var_2_string == "shaft_drop") {
			@PlayNSSound("drop");
			@AddScene("boiny_well.isc");
			@sync();
			object var_51_object;
			object var_54_object;
			func_210(var_54_object);
			var_54_object = var_51_object;
			func_270(var_51_object, "boiny_well", "pt_player");
			@sync();
			@GetVariable("b11q01KlaraWillHelp", var_7_int);
			if(!var_7_int) { //@nz
				object var_77_object;
				func_210(var_77_object);
				var_77_object->ApplyEffect("quest_b11_01_death_effect.bin");
			}
		} else if(var_2_string == "starshina_fight") {
			@AddScene("boiny_arena.isc");
			@sync();
			object var_82_object;
			object var_85_object;
			func_210(var_85_object);
			var_85_object = var_82_object;
			func_270(var_82_object, "boiny_arena", "pt_player");
		} else if(var_2_string == "open_well_exit") {
			bool var_88_bool;
			func_258(var_88_bool, "well_trigger", "activate");
		} else if(var_2_string == "fight_win") {
			func_306();
			func_181();
		}
		if(var_2_string == "cleanup") {
			@GetVariable("b11q01", var_8_int);
			if(var_8_int != 1000)
				func_173();
			else
				func_189(var_8_int);
			if(var_2_string == "fail") {
				func_173();
			} else if(var_2_string == "completed") {
				func_181();
			}
		}
		goto Label_172;
	
	}

}


void func_258(bool var_36_bool, string var_37_string, string var_38_string)
{
	object var_40_object;
	@FindActor(var_40_object, var_37_string);
	if(var_40_object == null)
		var_36_bool = false;
	@Trigger(var_40_object, var_38_string);
	var_36_bool = true;
}
EMIT "Stack[-1] = 0";


void func_223(object var_18_object, object var_19_object, string var_20_string, string var_21_string, string var_22_string)
{
	bool var_27_bool; cvector var_28_cvector; cvector var_29_cvector;
	var_19_object->GetLocator(var_20_string, var_27_bool, var_28_cvector, var_29_cvector);
	if(!var_27_bool) //@nz
		@Trace(("Locator " + var_20_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_21_string, var_19_object, var_28_cvector, var_29_cvector, var_22_string);
	object var_30_object = var_18_object;
	
}
EMIT "Stack[-1] = 0";


void func_294(bool var_42_bool, string var_43_string)
{
	object var_45_object;
	@FindActor(var_45_object, var_43_string);
	if(!var_45_object) //@nz
		var_42_bool = false;
	@RemoveActor(var_45_object);
	var_42_bool = true;
}
EMIT "Stack[-1] = 0";


void func_332(bool var_98_bool, object var_99_object, int var_100_int)
{
	object var_107_object;
	func_319(var_107_object);
	object var_104_object;
	var_107_object = var_104_object;
	object var_105_object;
	var_104_object->Find(var_100_int, var_105_object);
	if(!var_105_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_100_int);
		var_98_bool = false;
	}
	var_105_object->AddChild(var_99_object);
	@SendWorldWndMessage(7);
	int var_106_int;
	var_99_object->GetCategory(var_106_int);
	@SetDiarySection(var_106_int);
	var_98_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_173(void)
{
	@SetVariable("b11q01", -1);
	func_189(var_8_int);
}


void func_270(object var_51_object, string var_52_string, string var_53_string)
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


void func_241(string var_6_string, bool var_7_bool)
{
	object var_9_object;
	@FindActor(var_9_object, var_6_string);
	if(!var_9_object) //@nz
		@Trace(("Door " + var_6_string) + " not found");
	else
		var_9_object->SetProperty("locked", var_7_bool);
	
}
EMIT "Stack[-1] = 0";


void func_210(object var_54_object)
{
	object var_56_object;
	@FindActor(var_56_object, "player");
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


void func_306(void)
{
	object var_94_object;
	@CreateDiaryEntry(var_94_object, 317, 1, 522059);
	bool var_98_bool; object var_99_object;
	var_94_object = var_99_object;
	func_332(var_98_bool, var_99_object, 313);
}
EMIT "Stack[-1] = 0";


void func_181(void)
{
	@SetVariable("b11q01", 1000);
	func_189(var_8_int);
}


void func_217(object var_126_object)
{
	object var_128_object;
	@self(var_128_object);
	var_128_object = var_126_object;
}
EMIT "Stack[-1] = 0";


void func_189(object var_1_object)
{
	bool var_118_bool;
	func_258(var_118_bool, "boiny_shaft_trigger", "deactivate");
	bool var_121_bool;
	func_258(var_121_bool, "well_trigger", "activate");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_126_object;
	func_217(var_126_object);
	@RemoveActor(var_126_object);
}


void func_319(object var_107_object)
{
	object var_109_object;
	@GetDiaryRoot(var_109_object);
	if(!var_109_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_107_object = false;
	}
	var_109_object = var_107_object;
}
EMIT "Stack[-1] = 0";


