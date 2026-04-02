// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		object var_4_object;
		func_315(var_4_object);
		var_2_object = var_4_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		float var_7_float;
		var_5_float = var_7_float;
		int var_6_int;
		func_434(var_6_int, var_7_float);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_17_object; object var_18_object; float var_19_float; object var_20_object; object var_21_object; int var_22_int; int var_23_int; object var_24_object; object var_25_object; object var_26_object; object var_27_object; int var_28_int;
		@Trace(var_4_string);
		if(var_4_string == "vera_kabak") {
			@GetSceneByName(var_17_object, "shouse1_kabak");
			object var_32_object; object var_33_object;
			var_17_object = var_33_object;
			func_332(var_32_object, var_33_object, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera1.xml");
			var_17_object = null;
		} else if(var_4_string == "vera_stvorki") {
				@Trigger(var_32_object, "cleanup");
				@GetMainOutdoorScene(var_18_object);
				object var_53_object; object var_54_object;
				var_18_object = var_54_object;
				func_350(var_53_object, var_54_object, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera2.xml");
				var_1_object = var_53_object;
				@GetGameTime(var_19_float);
				@SetTimeEvent(0, (var_19_float + 1));
				var_18_object = null;
		}
	Label_222:
		for(;;) {

		}
	
		if(var_4_string == "vera_retreat") {
			var_1_object->GetActor(var_20_object); //@t
			@Trigger(var_20_object, "retreat");
			var_20_object = null;
		} else if(var_4_string == "place_butchers") {
			@GetMainOutdoorScene(var_21_object);
			object var_78_object; object var_79_object;
			var_21_object = var_79_object;
			func_350(var_78_object, var_79_object, "pt_b5q01_butcher1", "pers_butcher", "b5q01_butcher.xml");
			var_2_object->add(var_78_object); //@t
			object var_83_object; object var_84_object;
			var_21_object = var_84_object;
			func_350(var_83_object, var_84_object, "pt_b5q01_butcher2", "pers_butcher", "b5q01_butcher.xml");
			var_2_object->add(var_83_object); //@t
			object var_88_object; object var_89_object;
			var_21_object = var_89_object;
			func_350(var_88_object, var_89_object, "pt_b5q01_butcher3", "pers_butcher", "b5q01_butcher.xml");
			var_2_object->add(var_88_object); //@t
			object var_93_object; object var_94_object;
			var_21_object = var_94_object;
			func_350(var_93_object, var_94_object, "pt_b5q01_nudegirl", "pers_nudegirl", "b5q01_gwife.xml");
			var_3_object = var_93_object;
			var_21_object = null;
		} else if(var_4_string == "butcher_attack") {
			var_2_object->size(var_22_int); //@t
			var_23_int = 0;

			while(var_23_int < var_22_int) {
				var_2_object->get(var_24_object, var_23_int); //@t
				if(var_24_object != 0) {
					var_24_object->GetActor(var_25_object);
					if(var_25_object != 0)
						@Trigger(var_25_object, "attack");
					var_25_object = null;
				}
				var_24_object = null;
				var_23_int += 1;
			}

			func_413(var_2_object);
			if(var_3_object != 0) {
				var_3_object->GetActor(var_26_object); //@t
				if(var_26_object != 0)
					@Trigger(var_26_object, "retreat");
				var_3_object->Remove(); //@t
			}
		} else if(var_4_string == "gwife_dead") {
			@SetVariable("b5q01WifeDead", 1);
			func_413(Obj());
			var_2_object = null;
			@FindActor(var_27_object, "player");
			if(var_27_object != 0) {
				bool var_126_bool; object var_127_object;
				var_27_object = var_127_object;
				func_368(var_126_bool, var_127_object, 0.5);
			}
		}
		if(var_4_string == "cleanup") {
			@GetVariable("b5q01", var_28_int);
			if(var_28_int != 1000)
				func_223();
			else
				func_239(var_25_object, Obj(), Obj(), var_28_int);
			if(var_4_string == "cutscene") {
				object var_181_object;
				func_321(var_181_object, "cs_burah_danko_microscope");
			} else if(var_4_string == "cutscene_end") {
				@SetVariable("b5q01MicroscopeCS", 1);
			} else if(var_4_string == "fail") {
				func_223();
			} else if(var_4_string == "completed") {
				func_231();
			}
		}
		goto Label_222;
	
	}

}


void func_321(object var_181_object, string var_182_string)
{
	object var_185_object;
	@GetMainOutdoorScene(var_185_object);
	object var_186_object;
	@AddBlankActor(var_186_object, var_185_object, var_182_string, (var_182_string + ".bin"));
	var_186_object = var_181_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_264(bool var_145_bool, object var_146_object, string var_147_string)
{
	var_152_bool = IsFuncExist(var_146_object, "HasProperty", 2);
	if(!var_152_bool) { //@nz
		var_145_bool = false;
		return 2;
	}
	bool var_149_bool;
	var_146_object->HasProperty(var_147_string, var_149_bool);
	var_149_bool = var_145_bool;
}


void func_332(object var_32_object, object var_33_object, string var_34_string, string var_35_string, string var_36_string)
{
	bool var_41_bool; cvector var_42_cvector; cvector var_43_cvector;
	var_33_object->GetLocator(var_34_string, var_41_bool, var_42_cvector, var_43_cvector);
	if(!var_41_bool) //@nz
		@Trace(("Locator " + var_34_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_35_string, var_33_object, var_42_cvector, var_43_cvector, var_36_string);
	object var_44_object = var_32_object;
	
}
EMIT "Stack[-1] = 0";


void func_403(float var_133_float)
{
	object var_135_object;
	@CreateFloatVector(var_135_object);
	var_135_object->add(var_133_float);
	@SendWorldWndMessage(16, var_135_object);
}
EMIT "Stack[-1] = 0";


void func_276(bool var_137_bool, object var_138_object, string var_139_string, float var_140_float, float var_141_float, float var_142_float)
{
	object var_146_object;
	var_138_object = var_146_object;
	string var_147_string;
	var_139_string = var_147_string;
	bool var_145_bool;
	func_264(var_145_bool, var_146_object, var_147_string);
	if(!var_145_bool) //@nz
		var_137_bool = false;
	float var_144_float;
	var_138_object->GetProperty(var_139_string, var_144_float);
	float var_155_float; float var_157_float; float var_158_float;
	var_141_float = var_157_float;
	var_142_float = var_158_float;
	func_304(var_155_float, (var_144_float + var_140_float), var_157_float, var_158_float);
	var_138_object->SetProperty(var_139_string, var_155_float);
	var_137_bool = true;
}


void func_413(object var_105_object)
{
	int var_109_int; int var_110_int; object var_111_object;
	if(var_105_object != 0) {
		var_105_object->size(var_109_int);
		var_110_int = 0;

		while(var_110_int < var_109_int) {
			var_105_object->get(var_111_object, var_110_int);
			if(var_111_object != 0)
				var_111_object->Remove();
			var_111_object = null;
			var_110_int += 1;
		}

		var_105_object->clear();
	}
}


void func_350(object var_53_object, object var_54_object, string var_55_string, string var_56_string, string var_57_string)
{
	bool var_62_bool; cvector var_63_cvector; cvector var_64_cvector;
	var_54_object->GetLocator(var_55_string, var_62_bool, var_63_cvector, var_64_cvector);
	if(!var_62_bool) //@nz
		@Trace(("Locator " + var_55_string) + " doesn't exist");
	else
		var_54_object->AddStationaryActor(Obj(), var_63_cvector, var_64_cvector, var_56_string, var_57_string);
	object var_65_object = var_53_object;
	
}
EMIT "Stack[-1] = 0";


void func_223(void)
{
	@SetVariable("b5q01", -1);
	func_239(var_25_object, var_26_object, var_27_object, var_28_int);
}


void func_231(void)
{
	@SetVariable("b5q01", 1000);
	func_239(var_25_object, var_26_object, var_27_object, var_28_int);
}


void func_298(object var_176_object)
{
	object var_178_object;
	@self(var_178_object);
	var_178_object = var_176_object;
}
EMIT "Stack[-1] = 0";


void func_239(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	func_413(var_2_object);
	var_2_object = null;
	if(var_3_object != 0)
		var_3_object->Remove(); //@t
	object var_176_object;
	func_298(var_176_object);
	@RemoveActor(var_176_object);
}


// @pe
void func_368(bool var_126_bool, object var_127_object, float var_128_float)
{
	if(!var_127_object) { //@nz
		var_126_bool = false;
		return 0;
	}
	if(var_128_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_128_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_133_float;
		var_128_float = var_133_float;
		func_403(var_133_float);
		bool var_137_bool; object var_138_object; float var_140_float;
		var_127_object = var_138_object;
		var_128_float = var_140_float;
		func_276(var_137_bool, var_138_object, "reputation", var_140_float, (float)0, (float)1);
		var_126_bool = true;
		return 0;

	}
	
	var_126_bool = false;
}


// @pe
void func_304(float var_155_float, float var_156_float, float var_157_float, float var_158_float)
{
	if(var_156_float < var_157_float) {
		var_157_float = var_155_float;
		return 0;
	}
	if(var_156_float > var_158_float) {
		var_158_float = var_155_float;
		return 0;
	}
	var_156_float = var_155_float;
}


// @pe
void func_434(int var_6_int, float var_7_float)
{
	float var_11_float;
	var_7_float = var_11_float;
	int var_8_int;
	func_443(var_8_int, 530811, 530810, var_11_float);
	var_8_int = var_6_int;
}


void func_443(int var_8_int, int var_9_int, int var_10_int, float var_11_float)
{
	int var_13_int;
	@AddMessage(var_9_int, var_10_int, var_11_float, var_13_int);
	@SendWorldWndMessage(6);
	var_13_int = var_8_int;
}


void func_315(object var_4_object)
{
	object var_6_object;
	@CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


