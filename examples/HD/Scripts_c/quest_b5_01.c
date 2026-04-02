// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		func_362("cot_alexandr@door1", false);
		object var_14_object;
		func_309(var_14_object);
		var_2_object = var_14_object;
	
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
		func_445(var_6_int, var_7_float);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_17_object; object var_18_object; float var_19_float; object var_20_object; object var_21_object; int var_22_int; int var_23_int; object var_24_object; object var_25_object; object var_26_object; object var_27_object; int var_28_int;
		@Trace(var_4_string);
		if(var_4_string == "vera_kabak") {
			@GetSceneByName(var_17_object, "shouse1_kabak");
			object var_32_object; object var_33_object;
			var_17_object = var_33_object;
			func_326(var_32_object, var_33_object, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera1.xml");
			var_17_object = null;
		} else if(var_4_string == "vera_stvorki") {
				@Trigger(var_32_object, "cleanup");
				@GetMainOutdoorScene(var_18_object);
				object var_53_object; object var_54_object;
				var_18_object = var_54_object;
				func_344(var_53_object, var_54_object, "pt_b5q01_vera", "pers_nudegirl", "b5q01_vera2.xml");
				var_1_object = var_53_object;
				@GetGameTime(var_19_float);
				@SetTimeEvent(0, (var_19_float + 1));
				var_18_object = null;
		}
	Label_217:
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
			func_344(var_78_object, var_79_object, "pt_b5q01_butcher1", "pers_butcher", "b5q01_butcher.xml");
			var_2_object->add(var_78_object); //@t
			object var_83_object; object var_84_object;
			var_21_object = var_84_object;
			func_344(var_83_object, var_84_object, "pt_b5q01_butcher2", "pers_butcher", "b5q01_butcher.xml");
			var_2_object->add(var_83_object); //@t
			object var_88_object; object var_89_object;
			var_21_object = var_89_object;
			func_344(var_88_object, var_89_object, "pt_b5q01_butcher3", "pers_butcher", "b5q01_butcher.xml");
			var_2_object->add(var_88_object); //@t
			object var_93_object; object var_94_object;
			var_21_object = var_94_object;
			func_344(var_93_object, var_94_object, "pt_b5q01_nudegirl", "pers_nudegirl", "b5q01_gwife.xml");
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

			if(var_3_object != 0) {
				var_3_object->GetActor(var_26_object); //@t
				if(var_26_object != 0)
					@Trigger(var_26_object, "retreat");
				var_3_object->Remove(); //@t
			}
		} else if(var_4_string == "gwife_dead") {
			@SetVariable("b5q01WifeDead", 1);
			@FindActor(var_27_object, "player");
			if(var_27_object != 0) {
				bool var_114_bool; object var_115_object;
				var_27_object = var_115_object;
				func_379(var_114_bool, var_115_object, 0.5);
			}
		}
		if(var_4_string == "cleanup") {
			@GetVariable("b5q01", var_28_int);
			if(var_28_int != 1000)
				func_218();
			else
				func_234(var_25_object, Obj(), Obj(), var_28_int);
			if(var_4_string == "cutscene") {
				object var_179_object;
				func_315(var_179_object, "cs_burah_danko_microscope");
			} else if(var_4_string == "cutscene_end") {
				@SetVariable("b5q01MicroscopeCS", 1);
			} else if(var_4_string == "fail") {
				func_218();
			} else if(var_4_string == "completed") {
				func_226();
			}
		}
		goto Label_217;
	
	}

}


void func_258(bool var_133_bool, object var_134_object, string var_135_string)
{
	var_140_bool = IsFuncExist(var_134_object, "HasProperty", 2);
	if(!var_140_bool) { //@nz
		var_133_bool = false;
		return 2;
	}
	bool var_137_bool;
	var_134_object->HasProperty(var_135_string, var_137_bool);
	var_137_bool = var_133_bool;
}


void func_454(int var_8_int, int var_9_int, int var_10_int, float var_11_float)
{
	int var_13_int;
	@AddMessage(var_9_int, var_10_int, var_11_float, var_13_int);
	@SendWorldWndMessage(6);
	var_13_int = var_8_int;
}


void func_326(object var_32_object, object var_33_object, string var_34_string, string var_35_string, string var_36_string)
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


void func_270(bool var_125_bool, object var_126_object, string var_127_string, float var_128_float, float var_129_float, float var_130_float)
{
	object var_134_object;
	var_126_object = var_134_object;
	string var_135_string;
	var_127_string = var_135_string;
	bool var_133_bool;
	func_258(var_133_bool, var_134_object, var_135_string);
	if(!var_133_bool) //@nz
		var_125_bool = false;
	float var_132_float;
	var_126_object->GetProperty(var_127_string, var_132_float);
	float var_143_float; float var_145_float; float var_146_float;
	var_129_float = var_145_float;
	var_130_float = var_146_float;
	func_298(var_143_float, (var_132_float + var_128_float), var_145_float, var_146_float);
	var_126_object->SetProperty(var_127_string, var_143_float);
	var_125_bool = true;
}


void func_344(object var_53_object, object var_54_object, string var_55_string, string var_56_string, string var_57_string)
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


void func_218(void)
{
	@SetVariable("b5q01", -1);
	func_234(var_25_object, var_26_object, var_27_object, var_28_int);
}


void func_414(float var_121_float)
{
	object var_123_object;
	@CreateFloatVector(var_123_object);
	var_123_object->add(var_121_float);
	@SendWorldWndMessage(16, var_123_object);
}
EMIT "Stack[-1] = 0";


void func_226(void)
{
	@SetVariable("b5q01", 1000);
	func_234(var_25_object, var_26_object, var_27_object, var_28_int);
}


void func_292(object var_174_object)
{
	object var_176_object;
	@self(var_176_object);
	var_176_object = var_174_object;
}
EMIT "Stack[-1] = 0";


void func_424(object var_162_object)
{
	int var_166_int; int var_167_int; object var_168_object;
	if(var_162_object != 0) {
		var_162_object->size(var_166_int);
		var_167_int = 0;

		while(var_167_int < var_166_int) {
			var_162_object->get(var_168_object, var_167_int);
			if(var_168_object != 0)
				var_168_object->Remove();
			var_168_object = null;
			var_167_int += 1;
		}

		var_162_object->clear();
	}
}


void func_362(string var_4_string, bool var_5_bool)
{
	object var_7_object;
	@FindActor(var_7_object, var_4_string);
	if(!var_7_object) //@nz
		@Trace(("Door " + var_4_string) + " not found");
	else
		var_7_object->SetProperty("locked", var_5_bool);
	
}
EMIT "Stack[-1] = 0";


void func_234(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	func_424(var_2_object);
	if(var_3_object != 0)
		var_3_object->Remove(); //@t
	object var_174_object;
	func_292(var_174_object);
	@RemoveActor(var_174_object);
}


// @pe
void func_298(float var_143_float, float var_144_float, float var_145_float, float var_146_float)
{
	if(var_144_float < var_145_float) {
		var_145_float = var_143_float;
		return 0;
	}
	if(var_144_float > var_146_float) {
		var_146_float = var_143_float;
		return 0;
	}
	var_144_float = var_143_float;
}


void func_315(object var_179_object, string var_180_string)
{
	object var_183_object;
	@GetMainOutdoorScene(var_183_object);
	object var_184_object;
	@AddBlankActor(var_184_object, var_183_object, var_180_string, (var_180_string + ".bin"));
	var_184_object = var_179_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_309(object var_14_object)
{
	object var_16_object;
	@CreateObjectVector(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_379(bool var_114_bool, object var_115_object, float var_116_float)
{
	if(!var_115_object) { //@nz
		var_114_bool = false;
		return 0;
	}
	if(var_116_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_116_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_121_float;
		var_116_float = var_121_float;
		func_414(var_121_float);
		bool var_125_bool; object var_126_object; float var_128_float;
		var_115_object = var_126_object;
		var_116_float = var_128_float;
		func_270(var_125_bool, var_126_object, "reputation", var_128_float, (float)0, (float)1);
		var_114_bool = true;
		return 0;

	}
	
	var_114_bool = false;
}


// @pe
void func_445(int var_6_int, float var_7_float)
{
	float var_11_float;
	var_7_float = var_11_float;
	int var_8_int;
	func_454(var_8_int, 530811, 530810, var_11_float);
	var_8_int = var_6_int;
}


