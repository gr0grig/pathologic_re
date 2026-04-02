// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		@CreateObjectVector(var_1_object);
		object var_4_object;
		@GetMainOutdoorScene(var_4_object);
		int var_5_int = 0;
	
		while(var_5_int < 5) {
			object var_8_object; object var_9_object;
			var_4_object = var_9_object;
			func_210(var_8_object, var_9_object, ("pt_k6q03_bomber" + (var_5_int + 1)), "pers_bomber", "k6q03_bomber.xml");
			var_1_object->add(var_8_object); //@t
		}
	
		@SetVariable("k6q03", 1);
		int var_32_int;
		func_268(var_32_int);
		if(var_32_int < 21)
			@SetTimeEvent(1, 141);
		else
			func_82(var_5_int + 1);
		func_175(6);
	
	}
	EMIT "Stack[-2] = 0";

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		@Trace(var_2_string);
		if(var_2_string == "abinos_unload") {
			func_82(var_2_string);
		} else if(var_2_string == "completed") {
			func_152();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		if(var_2_int == 1) {
			@Trace("spawning albinos");
			func_82(var_3_float);
		} else {
			int var_123_int; float var_124_float;
			var_2_int = var_123_int;
			var_3_float = var_124_float;
			func_194();
		}
	
	}

}


// @pe
void func_194(void)
{
	func_133();
}


void func_133(void)
{
	int var_126_int;
	@GetVariable("k6q03", var_126_int);
	if(var_126_int != 1000)
		func_144();
}


void func_199(cvector var_133_cvector, object var_134_object)
{
	cvector var_136_cvector;
	var_134_object->GetPosition(var_136_cvector);
	var_136_cvector = var_133_cvector;
}


void func_268(int var_32_int)
{
	float var_34_float;
	@GetGameTime(var_34_float);
	int var_35_int;
	var_34_float = var_35_int;
	var_32_int = var_35_int % 24;
}


void func_204(object var_59_object)
{
	object var_61_object;
	@self(var_61_object);
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


void func_144(void)
{
	@SetVariable("k6q03", -1);
	func_160(var_125_int, var_126_int);
}


void func_210(object var_8_object, object var_9_object, string var_10_string, string var_11_string, string var_12_string)
{
	bool var_20_bool; cvector var_21_cvector; cvector var_22_cvector;
	var_9_object->GetLocator(var_10_string, var_20_bool, var_21_cvector, var_22_cvector);
	if(!var_20_bool) //@nz
		@Trace(("Locator " + var_10_string) + " doesn't exist");
	else
		var_9_object->AddStationaryActor(Obj(), var_21_cvector, var_22_cvector, var_11_string, var_12_string);
	object var_23_object = var_8_object;
	
}
EMIT "Stack[-1] = 0";


void func_82(object var_0_object)
{
	object var_68_object; int var_70_int;
	@GetMainOutdoorScene(var_68_object);
	object var_69_object;
	@GetScene(var_69_object);
	if(var_68_object != var_69_object) {
		@SetVariable("pt_k6q03_albinos_path", -1);
		object var_74_object; object var_75_object;
		var_68_object = var_75_object;
		int var_80_int;
		func_351(var_80_int, "pt_k6q03_albinos_path");
		func_210(var_74_object, var_75_object, ("pt_k6q03_albinos_path" + (var_80_int + 1)), "pers_albinos", "k6q03_albinos.xml");
		var_0_object = var_74_object;
	} else {
		int var_99_int;
		func_308(var_99_int, "pt_k6q03_albinos_path");
		var_99_int = var_70_int;
		@Trace(var_70_int);
		@SetVariable("pt_k6q03_albinos_path", var_70_int);
		object var_146_object; object var_147_object;
		var_68_object = var_147_object;
		func_228(var_146_object, var_147_object, ("pt_k6q03_albinos_path" + (var_70_int + 1)), "pers_albinos", "k6q03_albinos.xml");
		var_0_object = var_146_object;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_276(bool var_123_bool, cvector var_124_cvector)
{
	cvector var_126_cvector;
	var_124_cvector = var_126_cvector;
	float var_125_float;
	func_292(var_125_float, var_126_cvector);
	var_123_bool = var_125_float < 12250000.0;
}


void func_152(void)
{
	@SetVariable("k6q03", 1000);
	func_160(var_1_object, var_2_string);
}


// @pe
void func_284(bool var_139_bool, cvector var_140_cvector)
{
	cvector var_142_cvector;
	var_140_cvector = var_142_cvector;
	float var_141_float;
	func_292(var_141_float, var_142_cvector);
	var_139_bool = var_141_float < 4000000.0;
}


void func_351(int var_80_int, string var_81_string)
{
	object var_87_object; bool var_89_bool; cvector var_90_cvector; cvector var_91_cvector;
	@GetMainOutdoorScene(var_87_object);
	int var_88_int = 0;
	
	for(;;) {
		var_87_object->GetLocator((var_81_string + (var_88_int + 1)), var_89_bool, var_90_cvector, var_91_cvector);
		if(!var_89_bool) //@nz
			break;
		var_88_int += 1;
	}
	var_88_int = var_80_int;
}
EMIT "Stack[-5] = 0";


void func_160(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	func_247(var_1_object);
	object var_59_object;
	func_204(var_59_object);
	@RemoveActor(var_59_object);
}


void func_228(object var_146_object, object var_147_object, string var_148_string, string var_149_string, string var_150_string)
{
	bool var_158_bool; cvector var_159_cvector; cvector var_160_cvector;
	var_147_object->GetLocator(var_148_string, var_158_bool, var_159_cvector, var_160_cvector);
	if(!var_158_bool) //@nz
		@Trace(("Locator " + var_148_string) + " doesn't exist");
	else
		var_147_object->AddStationaryActor(Obj(), var_159_cvector, var_160_cvector, var_149_string, var_150_string, true);
	object var_161_object = var_146_object;
	
}
EMIT "Stack[-1] = 0";


void func_292(float var_125_float, cvector var_126_cvector)
{
	object var_129_object;
	@FindActor(var_129_object, "player");
	if(!var_129_object) //@nz
		var_125_float = 0;
	cvector var_133_cvector; object var_134_object;
	var_129_object = var_134_object;
	func_199(var_133_cvector, var_134_object);
	var_125_float = (var_133_cvector - var_126_cvector) | (var_133_cvector - var_126_cvector);
}
EMIT "Stack[-2] = 0";


void func_175(int var_41_int)
{
	float var_42_float; float var_43_float;
	@GetGameTime(var_43_float);
	if(var_43_float >= (var_41_int * 24)) {
		func_160(var_42_float, var_43_float);
	} else {
		@SetTimeEvent(0, (var_41_int * 24));
		@Hold();
	}
	
}


void func_308(int var_99_int, string var_100_string)
{
	cvector var_108_cvector; int var_109_int; bool var_112_bool; cvector var_113_cvector; cvector var_114_cvector;
	var_109_int = -1;
	object var_110_object;
	@GetMainOutdoorScene(var_110_object);
	int var_111_int = -1;
	
	for(;;) {
		var_111_int += 1;
		var_110_object->GetLocator((var_100_string + (var_111_int + 1)), var_112_bool, var_113_cvector, var_114_cvector);
		if(!var_112_bool) { //@nz
		} else {
			bool var_123_bool; cvector var_124_cvector;
			var_113_cvector = var_124_cvector;
			func_276(var_123_bool, var_124_cvector);
			if(!var_123_bool) { //@nz
			} else {
			bool var_139_bool; cvector var_140_cvector;
			var_113_cvector = var_140_cvector;
			func_284(var_139_bool, var_140_cvector);
			if(var_139_bool != 0) {
			} else if(var_111_int < var_109_int) {
			}
			var_113_cvector = var_108_cvector;
			}
		}
		if(var_109_int == -1) {
			var_99_int = var_109_int - 1;
			break;
		}
		var_109_int = var_99_int;

	}
	
}
EMIT "Stack[-5] = 0";


void func_247(object var_48_object)
{
	int var_52_int; int var_53_int; object var_54_object;
	if(var_48_object != 0) {
		var_48_object->size(var_52_int);
		var_53_int = 0;

		while(var_53_int < var_52_int) {
			var_48_object->get(var_54_object, var_53_int);
			if(var_54_object != 0)
				var_54_object->Remove();
			var_54_object = null;
			var_53_int += 1;
		}

		var_48_object->clear();
	}
}


