// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, object var_1_object, bool var_2_bool)
	{
		var_2_bool = true;
		func_274("boiny@door1", false);
		object var_5_object;
		@GetActiveScene(var_5_object);
		object var_6_object;
		@GetSceneByName(var_6_object, "storojka");
		if(var_5_object == var_6_object) {
			var_0_bool = true;
		} else {
			object var_19_object; object var_20_object;
			var_6_object = var_20_object;
			func_256(var_19_object, var_20_object, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
			var_1_object = var_19_object;
		}
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(4)";
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";

	void OnTrigger(bool var_0_bool, object var_1_object, bool var_2_bool, string var_3_string)
	{
		object var_9_object; int var_10_int; int var_11_int; int var_12_int; int var_13_int;
		@Trace(var_3_string);
		if(var_3_string == "storojka_unload") {
			if(var_0_bool != 0) {
				var_0_bool = false;
				@GetSceneByName(var_9_object, "storojka");
				object var_18_object; object var_19_object;
				var_9_object = var_19_object;
				func_256(var_18_object, var_19_object, "pt_b11q01_klara", "NPC_Klara", "b11q01_klara_laska.xml");
				var_1_object = var_18_object;
				var_9_object = null;
			}
		} else if(var_3_string == "remove_klara") {
				@Trigger(var_1_object, "cleanup");
		}
	Label_205:
		for(;;) {

		}
	
		if(var_3_string == "open_shaft") {
			bool var_41_bool;
			func_291(var_41_bool, "boiny_shaft_trigger", "activate");
			bool var_47_bool;
			func_327(var_47_bool, "iboiny_stones");
		} else if(var_3_string == "shaft_drop") {
			@PlayNSSound("drop");
			@AddScene("boiny_well.isc");
			@sync();
			object var_56_object;
			object var_59_object;
			func_243(var_59_object);
			var_59_object = var_56_object;
			func_303(var_56_object, "boiny_well", "pt_player");
			@sync();
			@GetVariable("b11q01KlaraWillHelp", var_10_int);
			bool var_81_bool = true;
			var_82_bool = !var_10_int; //@nz
			if(var_82_bool != 1) {
				var_83_bool = !var_2_bool; //@nz
				if(var_83_bool != 1)
					var_81_bool = false;
			}
			if(var_81_bool != 0) {
				object var_84_object;
				func_243(var_84_object);
				var_84_object->ApplyEffect("quest_b11_01_death_effect.bin");
			}
			var_2_bool = false;
		} else if(var_3_string == "starshina_fight") {
			if(var_1_object != 0)
				@Trigger(var_1_object, "cleanup");
			@GetVariable("b11q01", var_11_int);
			if(var_11_int != 0)
				func_378();
			@AddScene("boiny_arena.isc");
			@sync();
			object var_116_object;
			object var_119_object;
			func_243(var_119_object);
			var_119_object = var_116_object;
			func_303(var_116_object, "boiny_arena", "pt_player");
		} else if(var_3_string == "open_well_exit") {
			bool var_122_bool;
			func_291(var_122_bool, "well_trigger", "activate");
		} else if(var_3_string == "fight_win") {
			@GetVariable("b11q01", var_12_int);
			if(var_12_int != 0) {
				func_352();
			} else {
				func_339();
				func_365();
		}
			if(var_3_string == "cleanup") {
				@GetVariable("b11q01", var_13_int);
				if(var_13_int != 1000)
					func_206();
				else
					func_222(var_13_int);
				if(var_3_string == "fail")
					func_206();
				if(!(var_3_string == "completed")) goto Label_205;
				func_214();
			}
		}
		func_214();
		goto Label_205;
	
	}

}


void func_256(object var_19_object, object var_20_object, string var_21_string, string var_22_string, string var_23_string)
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


void func_391(object var_106_object)
{
	object var_108_object;
	@GetDiaryRoot(var_108_object);
	if(!var_108_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_106_object = false;
	}
	var_108_object = var_106_object;
}
EMIT "Stack[-1] = 0";


void func_327(bool var_47_bool, string var_48_string)
{
	object var_50_object;
	@FindActor(var_50_object, var_48_string);
	if(!var_50_object) //@nz
		var_47_bool = false;
	@RemoveActor(var_50_object);
	var_47_bool = true;
}
EMIT "Stack[-1] = 0";


void func_206(void)
{
	@SetVariable("b11q01", -1);
	func_222(var_13_int);
}


void func_274(string var_7_string, bool var_8_bool)
{
	object var_10_object;
	@FindActor(var_10_object, var_7_string);
	if(!var_10_object) //@nz
		@Trace(("Door " + var_7_string) + " not found");
	else
		var_10_object->SetProperty("locked", var_8_bool);
	
}
EMIT "Stack[-1] = 0";


void func_339(void)
{
	object var_151_object;
	@CreateDiaryEntry(var_151_object, 313, 1, 522055);
	bool var_155_bool; object var_156_object;
	var_151_object = var_156_object;
	func_404(var_155_bool, var_156_object, -1);
}
EMIT "Stack[-1] = 0";


void func_404(bool var_97_bool, object var_98_object, int var_99_int)
{
	object var_106_object;
	func_391(var_106_object);
	object var_103_object;
	var_106_object = var_103_object;
	object var_104_object;
	var_103_object->Find(var_99_int, var_104_object);
	if(!var_104_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_99_int);
		var_97_bool = false;
	}
	var_104_object->AddChild(var_98_object);
	@SendWorldWndMessage(7);
	int var_105_int;
	var_98_object->GetCategory(var_105_int);
	@SetDiarySection(var_105_int);
	var_97_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_214(void)
{
	@SetVariable("b11q01", 1000);
	func_222(var_13_int);
}


void func_222(object var_1_object)
{
	bool var_139_bool;
	func_291(var_139_bool, "boiny_shaft_trigger", "deactivate");
	bool var_142_bool;
	func_291(var_142_bool, "well_trigger", "deactivate");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_147_object;
	func_250(var_147_object);
	@RemoveActor(var_147_object);
}


void func_352(void)
{
	object var_130_object;
	@CreateDiaryEntry(var_130_object, 317, 1, 522059);
	bool var_134_bool; object var_135_object;
	var_130_object = var_135_object;
	func_404(var_134_bool, var_135_object, 313);
}
EMIT "Stack[-1] = 0";


void func_291(bool var_41_bool, string var_42_string, string var_43_string)
{
	object var_45_object;
	@FindActor(var_45_object, var_42_string);
	if(var_45_object == null)
		var_41_bool = false;
	@Trigger(var_45_object, var_43_string);
	var_41_bool = true;
}
EMIT "Stack[-1] = 0";


void func_250(object var_147_object)
{
	object var_149_object;
	@self(var_149_object);
	var_149_object = var_147_object;
}
EMIT "Stack[-1] = 0";


void func_365(void)
{
	object var_159_object;
	@CreateDiaryEntry(var_159_object, 780, 1, 541765);
	bool var_163_bool; object var_164_object;
	var_159_object = var_164_object;
	func_404(var_163_bool, var_164_object, 313);
}
EMIT "Stack[-1] = 0";


void func_303(object var_56_object, string var_57_string, string var_58_string)
{
	if(!var_56_object) { //@nz
	}
	object var_67_object;
	@GetSceneByName(var_67_object, var_57_string);
	bool var_68_bool;
	cvector var_69_cvector;
	cvector var_70_cvector;
	var_67_object->GetLocator(var_58_string, var_68_bool, var_69_cvector, var_70_cvector);
	if(!var_68_bool) //@nz
		@Trace(((("Teleport location '" + var_58_string) + "' not found in scene '") + var_57_string) + "'");
	else
		@Teleport(var_56_object, var_67_object, var_69_cvector, var_70_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_243(object var_59_object)
{
	object var_61_object;
	@FindActor(var_61_object, "player");
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


void func_378(void)
{
	object var_93_object;
	@CreateDiaryEntry(var_93_object, 316, 1, 522058);
	bool var_97_bool; object var_98_object;
	var_93_object = var_98_object;
	func_404(var_97_bool, var_98_object, 313);
}
EMIT "Stack[-1] = 0";


