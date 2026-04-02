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
			func_335(var_10_int);
			var_10_int = var_9_int;
			func_152(var_5_int, var_6_object, var_9_int);
		} else if(var_2_string == "wonder") {
				@TriggerWorld("lightning");
				func_236(var_6_object);
				func_242(var_6_object);
				if(var_1_int != -1) {
					func_411(var_1_int, true);
					func_344();
				}
		}
	Label_144:
		for(;;) {

		}
	
		if(!(var_2_string == "bad_wonder")) goto Label_144;
		int var_149_int;
		func_335(var_149_int);
		var_149_int = var_5_int;
		@GetMainOutdoorScene(var_6_object);
		object var_150_object; object var_151_object;
		var_6_object = var_151_object;
		func_254(var_150_object, var_151_object, (("pt_k2system" + var_5_int) + "_albinos"), "pers_rat", "k2system_rat.xml");
		bool var_171_bool;
		func_249(var_171_bool, 0.5);
		if(var_171_bool != 0) {
			object var_175_object; object var_176_object;
			var_6_object = var_176_object;
			func_254(var_175_object, var_176_object, (("pt_k2system" + var_5_int) + "_patrol"), "pers_rat_big", "k2system_rat_big.xml");
		}
		bool var_183_bool;
		func_249(var_183_bool, 0.5);
		if(var_183_bool != 0) {
			object var_185_object; object var_186_object;
			var_6_object = var_186_object;
			func_254(var_185_object, var_186_object, (("pt_k2system" + var_5_int) + "_nude"), "pers_rat", "k2system_rat.xml");
		}
		bool var_193_bool;
		func_249(var_193_bool, 0.5);
		if(var_193_bool != 0) {
			object var_195_object; object var_196_object;
			var_6_object = var_196_object;
			func_254(var_195_object, var_196_object, (("pt_k2system" + var_5_int) + "_dohodyaga1"), "pers_rat_big", "k2system_rat_big.xml");
		}
		bool var_203_bool;
		func_249(var_203_bool, 0.5);
		if(var_203_bool != 0) {
			object var_205_object; object var_206_object;
			var_6_object = var_206_object;
			func_254(var_205_object, var_206_object, (("pt_k2system" + var_5_int) + "_dohodyaga2"), "pers_rat", "k2system_rat.xml");
		}
		func_357();
		var_6_object = null;
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, int var_2_int, float var_3_float)
	{
		if(var_2_int == var_1_int)
			func_242(var_3_float);
	}

}


void func_290(object var_5_object)
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


void func_357(void)
{
	object var_214_object;
	@CreateDiaryEntry(var_214_object, 728, 1, 539107);
	bool var_218_bool; object var_219_object;
	var_214_object = var_219_object;
	func_383(var_218_bool, var_219_object, 723);
}
EMIT "Stack[-1] = 0";


void func_236(object var_0_object)
{
	func_311(var_0_object, "wonder");
}


void func_335(int var_10_int)
{
	float var_12_float;
	@GetGameTime(var_12_float);
	var_10_int = 1 + (var_12_float / 24);
}


void func_272(object var_29_object, object var_30_object, string var_31_string, string var_32_string, string var_33_string)
{
	bool var_44_bool; cvector var_45_cvector; cvector var_46_cvector;
	var_30_object->GetLocator(var_31_string, var_44_bool, var_45_cvector, var_46_cvector);
	if(!var_44_bool) //@nz
		@Trace(("Locator " + var_31_string) + " doesn't exist");
	else
		var_30_object->AddStationaryActor(Obj(), var_45_cvector, var_46_cvector, var_32_string, var_33_string);
	object var_47_object = var_29_object;
	
}
EMIT "Stack[-1] = 0";


void func_242(object var_0_object)
{
	func_290(var_0_object);
	var_0_object->clear(); //@t
}


void func_370(object var_138_object)
{
	object var_140_object;
	@GetDiaryRoot(var_140_object);
	if(!var_140_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_138_object = false;
	}
	var_140_object = var_138_object;
}
EMIT "Stack[-1] = 0";


void func_311(object var_100_object, string var_101_string)
{
	int var_106_int; int var_107_int; object var_108_object; object var_109_object;
	if(var_100_object != 0) {
		var_100_object->size(var_106_int);
		var_107_int = 0;

		for(;;) {
			if(!(var_107_int < var_106_int)) goto Label_334;
			var_100_object->get(var_108_object, var_107_int);
			if(var_108_object != 0) {
				var_108_object->GetActor(var_109_object);
				if(var_109_object != 0)
					@Trigger(var_109_object, var_101_string);
				var_109_object = null;
			}
			var_108_object = null;
			var_107_int += 1;
		}
	}
Label_334:
}


void func_344(void)
{
	object var_125_object;
	@CreateDiaryEntry(var_125_object, 727, 1, 539106);
	bool var_129_bool; object var_130_object;
	var_125_object = var_130_object;
	func_383(var_129_bool, var_130_object, 723);
}
EMIT "Stack[-1] = 0";


void func_249(bool var_171_bool, float var_172_float)
{
	float var_174_float;
	@rand(var_174_float);
	var_171_bool = var_174_float < var_172_float;
}


// @pe
void func_411(int var_117_int, bool var_118_bool)
{
	if(var_118_bool != 0)
		var_122_int = 1;
	else
		var_123_int = 0; //@pi
	@SetVariable(("K2SystemSvitaRemoved" + var_117_int), var_122_int);
	
}


void func_152(object var_0_object, int var_1_int, int var_9_int)
{
	object var_17_object;
	@GetMainOutdoorScene(var_17_object);
	func_242(var_17_object);
	var_1_int = var_9_int;
	object var_29_object; object var_30_object;
	var_17_object = var_30_object;
	func_272(var_29_object, var_30_object, (("pt_k2system" + var_9_int) + "_albinos"), "pers_albinos", (("k2system" + var_9_int) + "_albinos.xml"));
	var_0_object->add(var_29_object); //@t
	object var_53_object; object var_54_object;
	var_17_object = var_54_object;
	func_272(var_53_object, var_54_object, (("pt_k2system" + var_9_int) + "_patrol"), "pers_patrool", (("k2system" + var_9_int) + "_patrol.xml"));
	var_0_object->add(var_53_object); //@t
	object var_64_object; object var_65_object;
	var_17_object = var_65_object;
	func_272(var_64_object, var_65_object, (("pt_k2system" + var_9_int) + "_nude"), "pers_nudegirl", (("k2system" + var_9_int) + "_nude.xml"));
	var_0_object->add(var_64_object); //@t
	object var_75_object; object var_76_object;
	var_17_object = var_76_object;
	func_272(var_75_object, var_76_object, (("pt_k2system" + var_9_int) + "_dohodyaga1"), "pers_dohodyaga", (("k2system" + var_9_int) + "_dohodyaga1.xml"));
	var_0_object->add(var_75_object); //@t
	object var_86_object; object var_87_object;
	var_17_object = var_87_object;
	func_272(var_86_object, var_87_object, (("pt_k2system" + var_9_int) + "_dohodyaga2"), "pers_dohodyaga", (("k2system" + var_9_int) + "_dohodyaga2.xml"));
	var_0_object->add(var_86_object); //@t
}
EMIT "Stack[-1] = 0";


void func_254(object var_150_object, object var_151_object, string var_152_string, string var_153_string, string var_154_string)
{
	bool var_162_bool; cvector var_163_cvector; cvector var_164_cvector;
	var_151_object->GetLocator(var_152_string, var_162_bool, var_163_cvector, var_164_cvector);
	if(!var_162_bool) //@nz
		@Trace(("Locator " + var_152_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_153_string, var_151_object, var_163_cvector, var_164_cvector, var_154_string);
	object var_165_object = var_150_object;
	
}
EMIT "Stack[-1] = 0";


void func_383(bool var_129_bool, object var_130_object, int var_131_int)
{
	object var_138_object;
	func_370(var_138_object);
	object var_135_object;
	var_138_object = var_135_object;
	object var_136_object;
	var_135_object->Find(var_131_int, var_136_object);
	if(!var_136_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_131_int);
		var_129_bool = false;
	}
	var_136_object->AddChild(var_130_object);
	@SendWorldWndMessage(7);
	int var_137_int;
	var_130_object->GetCategory(var_137_int);
	@SetDiarySection(var_137_int);
	var_129_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


