// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		object var_3_object;
		@SetVariable("k5q03", 1);
		int var_6_int;
		func_303(var_6_int);
		if(var_6_int < 21)
			@SetTimeEvent(1, 117);
		else
			func_99(var_3_object);
		@CreateObjectVector(var_1_object);
		@GetMainOutdoorScene(var_3_object);
		object var_15_object; object var_16_object;
		var_3_object = var_16_object;
		func_229(var_15_object, var_16_object, "pt_k5q03_enemy1", "pers_hunter", "k5q03_e_hunter.xml");
		var_1_object->add(var_15_object); //@t
		object var_33_object; object var_34_object;
		var_3_object = var_34_object;
		func_229(var_33_object, var_34_object, "pt_k5q03_enemy2", "pers_hunter", "k5q03_e_hunter.xml");
		var_1_object->add(var_33_object); //@t
		object var_38_object; object var_39_object;
		var_3_object = var_39_object;
		func_229(var_38_object, var_39_object, "pt_k5q03_enemy3", "pers_hunter", "k5q03_e_hunter.xml");
		var_1_object->add(var_38_object); //@t
		object var_43_object; object var_44_object;
		var_3_object = var_44_object;
		func_229(var_43_object, var_44_object, "pt_k5q03_enemy4", "pers_hunter", "k5q03_e_hunter.xml");
		var_1_object->add(var_43_object); //@t
		func_194(5);
	
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		@Trace(var_2_string);
		if(var_2_string == "abinos_unload") {
			func_99(var_2_string);
		} else if(var_2_string == "completed") {
			func_169();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		if(var_2_int == 1) {
			@Trace("spawning albinos");
			func_99(var_3_float);
		} else {
			int var_123_int; float var_124_float;
			var_2_int = var_123_int;
			var_3_float = var_124_float;
			func_213();
		}
	
	}

}


void func_386(int var_88_int, string var_89_string)
{
	object var_95_object; bool var_97_bool; cvector var_98_cvector; cvector var_99_cvector;
	@GetMainOutdoorScene(var_95_object);
	int var_96_int = 0;
	
	for(;;) {
		var_95_object->GetLocator((var_89_string + (var_96_int + 1)), var_97_bool, var_98_cvector, var_99_cvector);
		if(!var_97_bool) //@nz
			break;
		var_96_int += 1;
	}
	var_96_int = var_88_int;
}
EMIT "Stack[-5] = 0";


void func_194(int var_48_int)
{
	float var_49_float; float var_50_float;
	@GetGameTime(var_50_float);
	if(var_50_float >= (var_48_int * 24)) {
		func_177(var_49_float, var_50_float);
	} else {
		@SetTimeEvent(0, (var_48_int * 24));
		@Hold();
	}
	
}


void func_327(float var_146_float, cvector var_147_cvector)
{
	object var_150_object;
	@FindActor(var_150_object, "player");
	if(!var_150_object) //@nz
		var_146_float = 0;
	cvector var_154_cvector; object var_155_object;
	var_150_object = var_155_object;
	func_218(var_154_cvector, var_155_object);
	var_146_float = (var_154_cvector - var_147_cvector) | (var_154_cvector - var_147_cvector);
}
EMIT "Stack[-2] = 0";


void func_265(object var_167_object, object var_168_object, string var_169_string, string var_170_string, string var_171_string)
{
	bool var_179_bool; cvector var_180_cvector; cvector var_181_cvector;
	var_168_object->GetLocator(var_169_string, var_179_bool, var_180_cvector, var_181_cvector);
	if(!var_179_bool) //@nz
		@Trace(("Locator " + var_169_string) + " doesn't exist");
	else
		var_168_object->AddStationaryActor(Obj(), var_180_cvector, var_181_cvector, var_170_string, var_171_string, true);
	object var_182_object = var_167_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_213(void)
{
	func_150();
}


void func_150(void)
{
	int var_126_int;
	@GetVariable("k5q03", var_126_int);
	if(var_126_int != 1000)
		func_161();
}


void func_343(int var_120_int, string var_121_string)
{
	cvector var_129_cvector; int var_130_int; bool var_133_bool; cvector var_134_cvector; cvector var_135_cvector;
	var_130_int = -1;
	object var_131_object;
	@GetMainOutdoorScene(var_131_object);
	int var_132_int = -1;
	
	for(;;) {
		var_132_int += 1;
		var_131_object->GetLocator((var_121_string + (var_132_int + 1)), var_133_bool, var_134_cvector, var_135_cvector);
		if(!var_133_bool) { //@nz
		} else {
			bool var_144_bool; cvector var_145_cvector;
			var_134_cvector = var_145_cvector;
			func_311(var_144_bool, var_145_cvector);
			if(!var_144_bool) { //@nz
			} else {
			bool var_160_bool; cvector var_161_cvector;
			var_134_cvector = var_161_cvector;
			func_319(var_160_bool, var_161_cvector);
			if(var_160_bool != 0) {
			} else if(var_132_int < var_130_int) {
			}
			var_134_cvector = var_129_cvector;
			}
		}
		if(var_130_int == -1) {
			var_120_int = var_130_int - 1;
			break;
		}
		var_130_int = var_120_int;

	}
	
}
EMIT "Stack[-5] = 0";


void func_218(cvector var_154_cvector, object var_155_object)
{
	cvector var_157_cvector;
	var_155_object->GetPosition(var_157_cvector);
	var_157_cvector = var_154_cvector;
}


void func_247(object var_82_object, object var_83_object, string var_84_string, string var_85_string, string var_86_string)
{
	bool var_111_bool; cvector var_112_cvector; cvector var_113_cvector;
	var_83_object->GetLocator(var_84_string, var_111_bool, var_112_cvector, var_113_cvector);
	if(!var_111_bool) //@nz
		@Trace(("Locator " + var_84_string) + " doesn't exist");
	else
		var_83_object->AddStationaryActor(Obj(), var_112_cvector, var_113_cvector, var_85_string, var_86_string);
	object var_114_object = var_82_object;
	
}
EMIT "Stack[-1] = 0";


void func_284(object var_54_object, string var_55_string)
{
	int var_59_int; int var_60_int; object var_61_object;
	if(var_54_object != 0) {
		var_54_object->size(var_59_int);
		var_60_int = 0;

		for(;;) {
			if(!(var_60_int < var_59_int)) goto Label_302;
			var_54_object->get(var_61_object, var_60_int);
			if(var_61_object != 0)
				@Trigger(var_61_object, var_55_string);
			var_61_object = null;
			var_60_int += 1;
		}
	}
Label_302:
}


void func_223(object var_67_object)
{
	object var_69_object;
	@self(var_69_object);
	var_69_object = var_67_object;
}
EMIT "Stack[-1] = 0";


void func_161(void)
{
	@SetVariable("k5q03", -1);
	func_177(var_125_int, var_126_int);
}


void func_99(object var_0_object)
{
	object var_76_object; int var_78_int;
	@GetMainOutdoorScene(var_76_object);
	object var_77_object;
	@GetScene(var_77_object);
	if(var_76_object != var_77_object) {
		@SetVariable("pt_k5q03_albinos_path", -1);
		object var_82_object; object var_83_object;
		var_76_object = var_83_object;
		int var_88_int;
		func_386(var_88_int, "pt_k5q03_albinos_path");
		func_247(var_82_object, var_83_object, ("pt_k5q03_albinos_path" + (var_88_int + 1)), "pers_albinos", "k5q03_albinos.xml");
		var_0_object = var_82_object;
	} else {
		int var_120_int;
		func_343(var_120_int, "pt_k5q03_albinos_path");
		var_120_int = var_78_int;
		@Trace(var_78_int);
		@SetVariable("pt_k5q03_albinos_path", var_78_int);
		object var_167_object; object var_168_object;
		var_76_object = var_168_object;
		func_265(var_167_object, var_168_object, ("pt_k5q03_albinos_path" + (var_78_int + 1)), "pers_albinos", "k5q03_albinos.xml");
		var_0_object = var_167_object;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_229(object var_15_object, object var_16_object, string var_17_string, string var_18_string, string var_19_string)
{
	bool var_24_bool; cvector var_25_cvector; cvector var_26_cvector;
	var_16_object->GetLocator(var_17_string, var_24_bool, var_25_cvector, var_26_cvector);
	if(!var_24_bool) //@nz
		@Trace(("Locator " + var_17_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_18_string, var_16_object, var_25_cvector, var_26_cvector, var_19_string);
	object var_27_object = var_15_object;
	
}
EMIT "Stack[-1] = 0";


void func_169(void)
{
	@SetVariable("k5q03", 1000);
	func_177(var_1_object, var_2_string);
}


void func_303(int var_6_int)
{
	float var_8_float;
	@GetGameTime(var_8_float);
	int var_9_int;
	var_8_float = var_9_int;
	var_6_int = var_9_int % 24;
}


void func_177(object var_0_object, object var_1_object)
{
	func_284(var_1_object, "cleanup");
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	object var_67_object;
	func_223(var_67_object);
	@RemoveActor(var_67_object);
}


// @pe
void func_311(bool var_144_bool, cvector var_145_cvector)
{
	cvector var_147_cvector;
	var_145_cvector = var_147_cvector;
	float var_146_float;
	func_327(var_146_float, var_147_cvector);
	var_144_bool = var_146_float < 12250000.0;
}


// @pe
void func_319(bool var_160_bool, cvector var_161_cvector)
{
	cvector var_163_cvector;
	var_161_cvector = var_163_cvector;
	float var_162_float;
	func_327(var_162_float, var_163_cvector);
	var_160_bool = var_162_float < 4000000.0;
}


