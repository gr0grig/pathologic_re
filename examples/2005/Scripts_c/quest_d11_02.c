maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, bool var_8_bool)
	{
		object var_9_object;
		func_321(var_9_object);
		var_3_object = var_9_object;
		object var_12_object;
		func_321(var_12_object);
		var_4_object = var_12_object;
		var_5_bool = false;
		var_6_bool = false;
		var_7_int = 0;
		var_8_bool = false;
		func_291(11);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, bool var_8_bool, string var_9_string)
	{
		object var_16_object; int var_17_int; int var_18_int; int var_19_int; object var_20_object; bool var_21_bool;
		@Trace(var_9_string);
		if(var_9_string == "uprava_load") {
			if(!var_5_bool) //@nz
				func_17(var_19_int, var_20_object, var_21_bool);
		} else {
				if(!(var_9_string == "init_graveyard")) goto Label_122;
				@SetVariable("d11q02", 1);
				@GetMainOutdoorScene(var_16_object);
				@AddActor(var_2_object, "d11q02_trigger", var_16_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d11q02_trigger.xml");
				var_17_int = 1;

				while(var_17_int <= 4) {
					object var_61_object; object var_62_object;
					var_16_object = var_62_object;
					func_327(var_61_object, var_62_object, ("pt_d11q02_soldier" + var_17_int), "pers_soldat", "d11q02_soldier.xml");
					var_3_object->add(var_61_object); //@t
					var_17_int += 1;
				}

				object var_68_object; object var_69_object;
				var_16_object = var_69_object;
				func_327(var_68_object, var_69_object, "pt_d11q02_victim1", "pers_worker", "d11q02_victim1.xml");
				var_4_object->add(var_68_object); //@t
				object var_73_object; object var_74_object;
				var_16_object = var_74_object;
				func_327(var_73_object, var_74_object, "pt_d11q02_victim2", "pers_worker", "d11q02_victim2.xml");
				var_4_object->add(var_73_object); //@t
				object var_78_object; object var_79_object;
				var_16_object = var_79_object;
				func_327(var_78_object, var_79_object, "pt_d11q02_victim3", "pers_unosha", "d11q02_victim3.xml");
				var_4_object->add(var_78_object); //@t
				object var_83_object; object var_84_object;
				var_16_object = var_84_object;
				func_327(var_83_object, var_84_object, "pt_d11q02_victim4", "pers_unosha", "d11q02_victim4.xml");
				var_4_object->add(var_83_object); //@t
				var_16_object = null;
		}
	Label_220:
		for(;;) {

		}
	
	Label_122:
		if(var_9_string == "d11q02_trigger") {
			func_366(var_3_object, "execute");
			var_6_bool = true;
		} else if(var_9_string == "execute") {
			func_366(var_4_object, "execute");
			func_232();
		} else if(var_9_string == "soldier_attack") {
			func_366(var_3_object, "attack");
		}
		if(var_9_string == "actor_unload") {
			if(var_7_int != 0) {
				if(var_7_int == 1)
					func_248(var_19_int, var_20_object, var_21_bool);
			} else if(false != 0) {
				var_6_bool = false;
				func_232();
				func_248(var_19_int, var_20_object, var_21_bool);
		}
			if(var_9_string == "soldier_dead") {
				var_3_object->size(var_18_int); //@t
				var_19_int = 0;

				for(;;) {
					if(var_19_int < var_18_int) {
						var_3_object->get(var_20_object, var_19_int); //@t
						if(var_20_object == 0) goto Label_193;
						var_20_object->IsDead(var_21_bool);
						if(!var_21_bool) { //@nz
						} else {
							var_20_object = null;
							var_19_int += 1;
						}
					}
					if(var_19_int == var_18_int) {
						@SetVariable("d11q02", 2);
						if(!var_7_int) //@nz
							var_7_int = 1;
					}
					goto Label_220;

				}
			}
			if(var_9_string == "fail") {
				func_232();
			} else if(var_9_string == "completed") {
				func_240();
			}
		}
		goto Label_220;
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, bool var_8_bool, int var_9_int, float var_10_float)
	{
		func_221();
	}

}


void func_321(object var_9_object)
{
	object var_11_object;
	@CreateObjectVector(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_291(int var_13_int)
{
	float var_14_float; float var_15_float;
	@GetGameTime(var_15_float);
	if(var_15_float >= (var_13_int * 24)) {
		func_265(var_7_int, var_8_bool, var_13_int, var_14_float, var_15_float);
	} else {
		@SetTimeEvent(0, (var_13_int * 24));
		@Hold();
	}
	
}


void func_327(object var_28_object, object var_29_object, string var_30_string, string var_31_string, string var_32_string)
{
	bool var_37_bool; cvector var_38_cvector; cvector var_39_cvector;
	var_29_object->GetLocator(var_30_string, var_37_bool, var_38_cvector, var_39_cvector);
	if(!var_37_bool) //@nz
		@Trace(("Locator " + var_30_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_31_string, var_29_object, var_38_cvector, var_39_cvector, var_32_string);
	object var_40_object = var_28_object;
	
}
EMIT "Stack[-1] = 0";


void func_232(void)
{
	@SetVariable("d11q02", -1);
	func_265(var_8_bool, var_9_int, var_10_float, var_11_int, var_12_int);
}


void func_265(object var_0_object, object var_1_object, object var_2_object, int var_7_int, bool var_8_bool)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@RemoveActor(var_2_object);
	if(var_7_int == 2) {
		object var_26_object;
		func_315(var_26_object);
		@RemoveActor(var_26_object);
	} else {
		var_7_int = 1;
	}
	var_8_bool = true;
	
}


void func_366(object var_90_object, string var_91_string)
{
	int var_95_int; int var_96_int; object var_97_object;
	if(var_90_object != 0) {
		var_90_object->size(var_95_int);
		var_96_int = 0;

		for(;;) {
			if(!(var_96_int < var_95_int)) goto Label_384;
			var_90_object->get(var_97_object, var_96_int);
			if(var_97_object != 0)
				@Trigger(var_97_object, var_91_string);
			var_97_object = null;
			var_96_int += 1;
		}
	}
Label_384:
}


void func_240(void)
{
	@SetVariable("d11q02", 1000);
	func_265(var_17_int, var_18_int, var_19_int, var_20_object, var_21_bool);
}


void func_17(object var_0_object, object var_1_object, bool var_5_bool)
{
	object var_26_object;
	@GetSceneByName(var_26_object, "uprava_admin");
	object var_28_object; object var_29_object;
	var_26_object = var_29_object;
	func_327(var_28_object, var_29_object, "pt_d11q02_girl", "pers_littlegirl", "d11q02_littlegirl.xml");
	var_0_object = var_28_object;
	object var_46_object; object var_47_object;
	var_26_object = var_47_object;
	func_327(var_46_object, var_47_object, "pt_d11q02_boy", "pers_littleboy", "d11q02_littleboy.xml");
	var_1_object = var_46_object;
	var_5_bool = true;
}
EMIT "Stack[-1] = 0";


void func_248(object var_3_object, object var_4_object, int var_7_int)
{
	func_345(var_3_object);
	func_345(var_4_object);
	if(var_8_bool != 0) {
		object var_140_object;
		func_315(var_140_object);
		@RemoveActor(var_140_object);
	}
	var_7_int = 2;
}


void func_345(object var_127_object)
{
	int var_131_int; int var_132_int; object var_133_object;
	if(var_127_object != 0) {
		var_127_object->size(var_131_int);
		var_132_int = 0;

		while(var_132_int < var_131_int) {
			var_127_object->get(var_133_object, var_132_int);
			if(var_133_object != 0)
				@RemoveActor(var_133_object);
			var_133_object = null;
			var_132_int += 1;
		}

		var_127_object->clear();
	}
}


void func_315(object var_26_object)
{
	object var_28_object;
	@self(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_221(void)
{
	int var_12_int;
	@GetVariable("d11q02", var_12_int);
	if(var_12_int != 1000)
		func_232();
}


