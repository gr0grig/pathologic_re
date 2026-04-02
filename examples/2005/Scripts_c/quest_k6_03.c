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
			func_200(var_8_object, var_9_object, ("pt_k6q03_bomber" + (var_5_int + 1)), "pers_bomber", "k6q03_bomber.xml");
			var_1_object->add(var_8_object); //@t
			var_5_int += 1;
		}
	
		@SetVariable("k6q03", 1);
		@SetTimeEvent(1, 141);
		func_165(6);
	}
	EMIT "Stack[-2] = 0";

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		@Trace(var_2_string);
		if(var_2_string == "abinos_unload") {
			func_72(var_2_string);
		} else if(var_2_string == "completed") {
			func_142();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		if(var_2_int == 1) {
			@Trace("spawning albinos");
			func_72(var_3_float);
		} else {
			int var_123_int; float var_124_float;
			var_2_int = var_123_int;
			var_3_float = var_124_float;
			func_184();
		}
	
	}

}


void func_194(object var_52_object)
{
	object var_54_object;
	@self(var_54_object);
	var_54_object = var_52_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_258(bool var_78_bool, cvector var_79_cvector)
{
	cvector var_81_cvector;
	var_79_cvector = var_81_cvector;
	float var_80_float;
	func_274(var_80_float, var_81_cvector);
	var_78_bool = var_80_float < 12250000.0;
}


void func_134(void)
{
	@SetVariable("k6q03", -1);
	func_150(var_125_int, var_126_int);
}


void func_200(object var_8_object, object var_9_object, string var_10_string, string var_11_string, string var_12_string)
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


void func_72(object var_0_object)
{
	object var_10_object; int var_12_int;
	@GetMainOutdoorScene(var_10_object);
	object var_11_object;
	@GetScene(var_11_object);
	if(var_10_object != var_11_object) {
		@SetVariable("pt_k6q03_albinos_path", -1);
		object var_16_object; object var_17_object;
		var_10_object = var_17_object;
		int var_22_int;
		func_333(var_22_int, "pt_k6q03_albinos_path");
		func_200(var_16_object, var_17_object, ("pt_k6q03_albinos_path" + (var_22_int + 1)), "pers_albinos", "k6q03_albinos.xml");
		var_0_object = var_16_object;
	} else {
		int var_54_int;
		func_290(var_54_int, "pt_k6q03_albinos_path");
		var_54_int = var_12_int;
		@Trace(var_12_int);
		@SetVariable("pt_k6q03_albinos_path", var_12_int);
		object var_101_object; object var_102_object;
		var_10_object = var_102_object;
		func_218(var_101_object, var_102_object, ("pt_k6q03_albinos_path" + (var_12_int + 1)), "pers_albinos", "k6q03_albinos.xml");
		var_0_object = var_101_object;
	}
	
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_266(bool var_94_bool, cvector var_95_cvector)
{
	cvector var_97_cvector;
	var_95_cvector = var_97_cvector;
	float var_96_float;
	func_274(var_96_float, var_97_cvector);
	var_94_bool = var_96_float < 4000000.0;
}


void func_333(int var_22_int, string var_23_string)
{
	object var_29_object; bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	@GetMainOutdoorScene(var_29_object);
	int var_30_int = 0;
	
	for(;;) {
		var_29_object->GetLocator((var_23_string + (var_30_int + 1)), var_31_bool, var_32_cvector, var_33_cvector);
		if(!var_31_bool) //@nz
			break;
		var_30_int += 1;
	}
	var_30_int = var_22_int;
}
EMIT "Stack[-5] = 0";


void func_142(void)
{
	@SetVariable("k6q03", 1000);
	func_150(var_1_object, var_2_string);
}


void func_274(float var_80_float, cvector var_81_cvector)
{
	object var_84_object;
	@FindActor(var_84_object, "player");
	if(!var_84_object) //@nz
		var_80_float = 0;
	cvector var_88_cvector; object var_89_object;
	var_84_object = var_89_object;
	func_189(var_88_cvector, var_89_object);
	var_80_float = (var_88_cvector - var_81_cvector) | (var_88_cvector - var_81_cvector);
}
EMIT "Stack[-2] = 0";


void func_150(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	func_237(var_1_object);
	object var_52_object;
	func_194(var_52_object);
	@RemoveActor(var_52_object);
}


void func_218(object var_101_object, object var_102_object, string var_103_string, string var_104_string, string var_105_string)
{
	bool var_113_bool; cvector var_114_cvector; cvector var_115_cvector;
	var_102_object->GetLocator(var_103_string, var_113_bool, var_114_cvector, var_115_cvector);
	if(!var_113_bool) //@nz
		@Trace(("Locator " + var_103_string) + " doesn't exist");
	else
		var_102_object->AddStationaryActor(Obj(), var_114_cvector, var_115_cvector, var_104_string, var_105_string, true);
	object var_116_object = var_101_object;
	
}
EMIT "Stack[-1] = 0";


void func_290(int var_54_int, string var_55_string)
{
	cvector var_63_cvector; int var_64_int; bool var_67_bool; cvector var_68_cvector; cvector var_69_cvector;
	var_64_int = -1;
	object var_65_object;
	@GetMainOutdoorScene(var_65_object);
	int var_66_int = -1;
	
	for(;;) {
		var_66_int += 1;
		var_65_object->GetLocator((var_55_string + (var_66_int + 1)), var_67_bool, var_68_cvector, var_69_cvector);
		if(!var_67_bool) { //@nz
		} else {
			bool var_78_bool; cvector var_79_cvector;
			var_68_cvector = var_79_cvector;
			func_258(var_78_bool, var_79_cvector);
			if(!var_78_bool) { //@nz
			} else {
			bool var_94_bool; cvector var_95_cvector;
			var_68_cvector = var_95_cvector;
			func_266(var_94_bool, var_95_cvector);
			if(var_94_bool != 0) {
			} else if(var_66_int < var_64_int) {
			}
			var_68_cvector = var_63_cvector;
			}
		}
		if(var_64_int == -1) {
			var_54_int = var_64_int - 1;
			break;
		}
		var_64_int = var_54_int;

	}
	
}
EMIT "Stack[-5] = 0";


void func_165(int var_34_int)
{
	float var_35_float; float var_36_float;
	@GetGameTime(var_36_float);
	if(var_36_float >= (var_34_int * 24)) {
		func_150(var_35_float, var_36_float);
	} else {
		@SetTimeEvent(0, (var_34_int * 24));
		@Hold();
	}
	
}


void func_237(object var_41_object)
{
	int var_45_int; int var_46_int; object var_47_object;
	if(var_41_object != 0) {
		var_41_object->size(var_45_int);
		var_46_int = 0;

		while(var_46_int < var_45_int) {
			var_41_object->get(var_47_object, var_46_int);
			if(var_47_object != 0)
				var_47_object->Remove();
			var_47_object = null;
			var_46_int += 1;
		}

		var_41_object->clear();
	}
}


// @pe
void func_184(void)
{
	func_123();
}


void func_123(void)
{
	int var_126_int;
	@GetVariable("k6q03", var_126_int);
	if(var_126_int != 1000)
		func_134();
}


void func_189(cvector var_88_cvector, object var_89_object)
{
	cvector var_91_cvector;
	var_89_object->GetPosition(var_91_cvector);
	var_91_cvector = var_88_cvector;
}


