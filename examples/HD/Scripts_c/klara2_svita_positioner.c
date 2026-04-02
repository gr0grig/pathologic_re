// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, int var_1_int)
	{
		var_1_int = -1;
		int var_3_int = 0;
	
		while(var_3_int < 6) {
			@SetTimeEvent((6 + var_3_int), ((var_3_int + 6) * 24));
			var_3_int += 1;
		}
	
		@CreateObjectVector(var_0_object);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";

	void OnTrigger(object var_0_object, int var_1_int, string var_2_string)
	{
		int var_5_int; object var_6_object;
		@Trace(var_2_string);
		if(var_2_string == "place_svita") {
			int var_9_int;
			int var_10_int;
			func_375(var_10_int);
			var_10_int = var_9_int;
			func_172(var_5_int, var_6_object, var_9_int);
		} else if(var_2_string == "wonder") {
				@TriggerWorld("lightning");
				func_276(var_6_object);
				func_282(var_6_object);
				if(var_1_int != -1) {
					func_451(var_1_int, true);
					func_384();
				}
		}
	Label_164:
		for(;;) {

		}
	
		if(!(var_2_string == "bad_wonder")) goto Label_164;
		int var_171_int;
		func_375(var_171_int);
		var_171_int = var_5_int;
		@GetMainOutdoorScene(var_6_object);
		object var_172_object; object var_173_object;
		var_6_object = var_173_object;
		int var_178_int; int var_179_int;
		var_5_int = var_179_int;
		func_462(var_178_int, var_179_int);
		func_294(var_172_object, var_173_object, (("pt_k2system" + var_178_int) + "_albinos"), "pers_rat", "k2system_rat.xml");
		bool var_195_bool;
		func_289(var_195_bool, 0.5);
		if(var_195_bool != 0) {
			object var_199_object; object var_200_object;
			var_6_object = var_200_object;
			int var_205_int; int var_206_int;
			var_5_int = var_206_int;
			func_462(var_205_int, var_206_int);
			func_294(var_199_object, var_200_object, (("pt_k2system" + var_205_int) + "_patrol"), "pers_rat_big", "k2system_rat_big.xml");
		}
		bool var_209_bool;
		func_289(var_209_bool, 0.5);
		if(var_209_bool != 0) {
			object var_211_object; object var_212_object;
			var_6_object = var_212_object;
			int var_217_int; int var_218_int;
			var_5_int = var_218_int;
			func_462(var_217_int, var_218_int);
			func_294(var_211_object, var_212_object, (("pt_k2system" + var_217_int) + "_nude"), "pers_rat", "k2system_rat.xml");
		}
		bool var_221_bool;
		func_289(var_221_bool, 0.5);
		if(var_221_bool != 0) {
			object var_223_object; object var_224_object;
			var_6_object = var_224_object;
			int var_229_int; int var_230_int;
			var_5_int = var_230_int;
			func_462(var_229_int, var_230_int);
			func_294(var_223_object, var_224_object, (("pt_k2system" + var_229_int) + "_dohodyaga1"), "pers_rat_big", "k2system_rat_big.xml");
		}
		bool var_233_bool;
		func_289(var_233_bool, 0.5);
		if(var_233_bool != 0) {
			object var_235_object; object var_236_object;
			var_6_object = var_236_object;
			int var_241_int; int var_242_int;
			var_5_int = var_242_int;
			func_462(var_241_int, var_242_int);
			func_294(var_235_object, var_236_object, (("pt_k2system" + var_241_int) + "_dohodyaga2"), "pers_rat", "k2system_rat.xml");
		}
		func_397();
		var_6_object = null;
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, int var_2_int, float var_3_float)
	{
		if(var_2_int == var_1_int)
			func_282(var_3_float);
	}

}


void func_384(void)
{
	object var_147_object;
	@CreateDiaryEntry(var_147_object, 727, 2, 539106);
	bool var_151_bool; object var_152_object;
	var_147_object = var_152_object;
	func_423(var_151_bool, var_152_object, 723);
}
EMIT "Stack[-1] = 0";


void func_289(bool var_195_bool, float var_196_float)
{
	float var_198_float;
	@rand(var_198_float);
	var_195_bool = var_198_float < var_196_float;
}


// @pe
void func_451(int var_139_int, bool var_140_bool)
{
	if(var_140_bool != 0)
		var_144_int = 1;
	else
		var_145_int = 0; //@pi
	@SetVariable(("K2SystemSvitaRemoved" + var_139_int), var_144_int);
	
}


void func_294(object var_172_object, object var_173_object, string var_174_string, string var_175_string, string var_176_string)
{
	bool var_186_bool; cvector var_187_cvector; cvector var_188_cvector;
	var_173_object->GetLocator(var_174_string, var_186_bool, var_187_cvector, var_188_cvector);
	if(!var_186_bool) //@nz
		@Trace(("Locator " + var_174_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_175_string, var_173_object, var_187_cvector, var_188_cvector, var_176_string);
	object var_189_object = var_172_object;
	
}
EMIT "Stack[-1] = 0";


void func_423(bool var_151_bool, object var_152_object, int var_153_int)
{
	object var_160_object;
	func_410(var_160_object);
	object var_157_object;
	var_160_object = var_157_object;
	object var_158_object;
	var_157_object->Find(var_153_int, var_158_object);
	if(!var_158_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_153_int);
		var_151_bool = false;
	}
	var_158_object->AddChild(var_152_object);
	@SendWorldWndMessage(7);
	int var_159_int;
	var_152_object->GetCategory(var_159_int);
	@SetDiarySection(var_159_int);
	var_151_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_330(object var_5_object)
{
	int var_9_int; int var_10_int; object var_11_object;
	if(var_5_object != 0) {
		var_5_object->size(var_9_int);
		var_10_int = 0;

		while(var_10_int < var_9_int) {
			var_5_object->get(var_11_object, var_10_int);
			if(var_11_object != 0)
				var_11_object->Remove();
			var_11_object = null;
			var_10_int += 1;
		}

		var_5_object->clear();
	}
}


void func_172(object var_0_object, int var_1_int, int var_9_int)
{
	object var_17_object;
	@GetMainOutdoorScene(var_17_object);
	func_282(var_17_object);
	var_1_int = var_9_int;
	object var_29_object; object var_30_object;
	var_17_object = var_30_object;
	int var_35_int; int var_36_int;
	func_462(var_35_int, var_36_int);
	func_312(var_29_object, var_30_object, (("pt_k2system" + var_35_int) + "_albinos"), "pers_albinos", (("k2system" + var_36_int) + "_albinos.xml"));
	var_0_object->add(var_29_object); //@t
	object var_67_object; object var_68_object;
	var_17_object = var_68_object;
	int var_73_int; int var_74_int;
	func_462(var_73_int, var_74_int);
	func_312(var_67_object, var_68_object, (("pt_k2system" + var_73_int) + "_patrol"), "pers_patrool", (("k2system" + var_74_int) + "_patrol.xml"));
	var_0_object->add(var_67_object); //@t
	object var_80_object; object var_81_object;
	var_17_object = var_81_object;
	int var_86_int; int var_87_int;
	func_462(var_86_int, var_87_int);
	func_312(var_80_object, var_81_object, (("pt_k2system" + var_86_int) + "_nude"), "pers_nudegirl", (("k2system" + var_87_int) + "_nude.xml"));
	var_0_object->add(var_80_object); //@t
	object var_93_object; object var_94_object;
	var_17_object = var_94_object;
	int var_99_int; int var_100_int;
	func_462(var_99_int, var_100_int);
	func_312(var_93_object, var_94_object, (("pt_k2system" + var_99_int) + "_dohodyaga1"), "pers_dohodyaga", (("k2system" + var_100_int) + "_dohodyaga1.xml"));
	var_0_object->add(var_93_object); //@t
	object var_106_object; object var_107_object;
	var_17_object = var_107_object;
	int var_112_int; int var_113_int;
	func_462(var_112_int, var_113_int);
	func_312(var_106_object, var_107_object, (("pt_k2system" + var_112_int) + "_dohodyaga2"), "pers_dohodyaga", (("k2system" + var_113_int) + "_dohodyaga2.xml"));
	var_0_object->add(var_106_object); //@t
}
EMIT "Stack[-1] = 0";


void func_397(void)
{
	object var_246_object;
	@CreateDiaryEntry(var_246_object, 728, 2, 539107);
	bool var_250_bool; object var_251_object;
	var_246_object = var_251_object;
	func_423(var_250_bool, var_251_object, 723);
}
EMIT "Stack[-1] = 0";


// @pe
void func_462(int var_35_int, int var_36_int)
{
	if(var_36_int == 6) {
		var_35_int = 7;
		return 0;
	}
	if(var_36_int == 7) {
		var_35_int = 11;
		return 0;
	}
	if(var_36_int == 8) {
		var_35_int = 6;
		return 0;
	}
	if(var_36_int == 9) {
		var_35_int = 9;
		return 0;
	}
	if(var_36_int == 10) {
		var_35_int = 10;
		return 0;
	}
	if(var_36_int == 11) {
		var_35_int = 8;
		return 0;
	}
	var_36_int = var_35_int;
}


void func_410(object var_160_object)
{
	object var_162_object;
	@GetDiaryRoot(var_162_object);
	if(!var_162_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_160_object = false;
	}
	var_162_object = var_160_object;
}
EMIT "Stack[-1] = 0";


void func_276(object var_0_object)
{
	func_351(var_0_object, "wonder");
}


void func_375(int var_10_int)
{
	float var_12_float;
	@GetGameTime(var_12_float);
	var_10_int = 1 + (var_12_float / 24);
}


void func_312(object var_29_object, object var_30_object, string var_31_string, string var_32_string, string var_33_string)
{
	bool var_58_bool; cvector var_59_cvector; cvector var_60_cvector;
	var_30_object->GetLocator(var_31_string, var_58_bool, var_59_cvector, var_60_cvector);
	if(!var_58_bool) //@nz
		@Trace(("Locator " + var_31_string) + " doesn't exist");
	else
		var_30_object->AddStationaryActor(Obj(), var_59_cvector, var_60_cvector, var_32_string, var_33_string);
	object var_61_object = var_29_object;
	
}
EMIT "Stack[-1] = 0";


void func_282(object var_0_object)
{
	func_330(var_0_object);
	var_0_object->clear(); //@t
}


void func_351(object var_122_object, string var_123_string)
{
	int var_128_int; int var_129_int; object var_130_object; object var_131_object;
	if(var_122_object != 0) {
		var_122_object->size(var_128_int);
		var_129_int = 0;

		for(;;) {
			if(!(var_129_int < var_128_int)) goto Label_374;
			var_122_object->get(var_130_object, var_129_int);
			if(var_130_object != 0) {
				var_130_object->GetActor(var_131_object);
				if(var_131_object != 0)
					@Trigger(var_131_object, var_123_string);
				var_131_object = null;
			}
			var_130_object = null;
			var_129_int += 1;
		}
	}
Label_374:
}


