// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		object var_6_object;
		func_255(var_6_object);
		var_0_object = var_6_object;
		object var_9_object;
		func_255(var_9_object);
		var_2_object = var_9_object;
		object var_5_object;
		@GetMainOutdoorScene(var_5_object);
		object var_10_object; object var_11_object;
		var_5_object = var_11_object;
		func_261(var_10_object, var_11_object, "pt_b10q04_bull", "pers_avrox", "b10q04_bull.xml");
		var_1_object = var_10_object;
		object var_28_object; object var_29_object;
		var_5_object = var_29_object;
		func_261(var_28_object, var_29_object, "pt_d10q03_morlok1", "pers_morlok", "d10q03_morlok.xml");
		var_0_object->add(var_28_object); //@t
		object var_33_object; object var_34_object;
		var_5_object = var_34_object;
		func_261(var_33_object, var_34_object, "pt_d10q03_morlok2", "pers_morlok", "d10q03_morlok.xml");
		var_0_object->add(var_33_object); //@t
		object var_38_object; object var_39_object;
		var_5_object = var_39_object;
		func_261(var_38_object, var_39_object, "pt_d10q03_morlok3", "pers_morlok", "d10q03_morlok.xml");
		var_0_object->add(var_38_object); //@t
		object var_43_object; object var_44_object;
		var_5_object = var_44_object;
		func_261(var_43_object, var_44_object, "pt_d10q03_salesman", "pers_salesman", "d10q03_salesman.xml");
		var_0_object->add(var_43_object); //@t
		object var_48_object; object var_49_object;
		var_5_object = var_49_object;
		func_261(var_48_object, var_49_object, "pt_d10q03_people1", "pers_worker", "d10q03_worker.xml");
		var_0_object->add(var_48_object); //@t
		object var_53_object; object var_54_object;
		var_5_object = var_54_object;
		func_261(var_53_object, var_54_object, "pt_d10q03_people2", "pers_dohodyaga", "d10q03_dohodyaga.xml");
		var_0_object->add(var_53_object); //@t
		object var_58_object; object var_59_object;
		var_5_object = var_59_object;
		func_261(var_58_object, var_59_object, "pt_d10q03_people3", "pers_unosha", "d10q03_unosha.xml");
		var_0_object->add(var_58_object); //@t
		object var_63_object; object var_64_object;
		var_5_object = var_64_object;
		func_261(var_63_object, var_64_object, "pt_d10q03_people4", "pers_alkash", "d10q03_alkash.xml");
		var_0_object->add(var_63_object); //@t
		func_225(10);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_10_object; int var_11_int; bool var_12_bool; cvector var_13_cvector; cvector var_14_cvector;
		@Trace(var_4_string);
		if(var_4_string == "place_sanitars") {
			func_336(var_0_object, "cleanup");
			if(var_1_object != 0)
				@Trigger(var_1_object, "cleanup");
			@GetMainOutdoorScene(var_10_object);
			var_11_int = 1;

			for(;;) {
				var_10_object->GetLocator(("pt_b11q04_sanitar" + var_11_int), var_12_bool, var_13_cvector, var_14_cvector);
				if(!var_12_bool) { //@nz
				} else {
					object var_52_object; object var_53_object;
					var_10_object = var_53_object;
					func_297(var_52_object, var_53_object, ("pt_b11q04_sanitar" + var_11_int), "pers_sanitar", "b11q04_sanitar.xml");
					var_2_object->add(var_52_object); //@t
					var_11_int += 1;
				}
				object var_34_object; object var_35_object;
				var_10_object = var_35_object;
				func_279(var_34_object, var_35_object, "pt_b11q04_corpse", "scripted", "b11q04_corpse.xml");
				var_3_object = var_34_object;
				var_10_object = null;
		} else {
			if(var_4_string == "fail") {
				func_174();
			} else if(var_4_string == "completed") {
				func_182();
			}
		}

		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		func_160();
	}

}


void func_160(void)
{
	int var_7_int;
	@GetVariable("d10q03", var_7_int);
	if(var_7_int != 1000)
		func_174();
	int var_6_int;
	func_201(var_5_float, var_6_int, var_7_int);
}


void func_225(int var_68_int)
{
	float var_69_float; float var_70_float;
	@GetGameTime(var_70_float);
	if(var_70_float >= (var_68_int * 24)) {
		func_201(var_68_int, var_69_float, var_70_float);
	} else {
		@SetTimeEvent(0, (var_68_int * 24));
		@Hold();
	}
	
}


void func_261(object var_10_object, object var_11_object, string var_12_string, string var_13_string, string var_14_string)
{
	bool var_19_bool; cvector var_20_cvector; cvector var_21_cvector;
	var_11_object->GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	if(!var_19_bool) //@nz
		@Trace(("Locator " + var_12_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_13_string, var_11_object, var_20_cvector, var_21_cvector, var_14_string);
	object var_22_object = var_10_object;
	
}
EMIT "Stack[-1] = 0";


void func_201(object var_1_object, object var_2_object, object var_3_object)
{
	func_190(var_69_float, var_70_float);
	func_315(var_2_object);
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleaunp");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_103_object;
	func_249(var_103_object);
	@RemoveActor(var_103_object);
}


void func_297(object var_52_object, object var_53_object, string var_54_string, string var_55_string, string var_56_string)
{
	bool var_62_bool; cvector var_63_cvector; cvector var_64_cvector;
	var_53_object->GetLocator(var_54_string, var_62_bool, var_63_cvector, var_64_cvector);
	if(!var_62_bool) //@nz
		@Trace(("Locator " + var_54_string) + " doesn't exist");
	else
		var_53_object->AddStationaryActor(Obj(), var_63_cvector, var_64_cvector, var_55_string, var_56_string);
	object var_65_object = var_52_object;
	
}
EMIT "Stack[-1] = 0";


void func_174(void)
{
	@SetVariable("d10q03", -1);
	func_190(var_6_int, var_7_int);
}


void func_336(object var_74_object, string var_75_string)
{
	int var_79_int; int var_80_int; object var_81_object;
	if(var_74_object != 0) {
		var_74_object->size(var_79_int);
		var_80_int = 0;

		for(;;) {
			if(!(var_80_int < var_79_int)) goto Label_354;
			var_74_object->get(var_81_object, var_80_int);
			if(var_81_object != 0)
				@Trigger(var_81_object, var_75_string);
			var_81_object = null;
			var_80_int += 1;
		}
	}
Label_354:
}


void func_182(void)
{
	@SetVariable("d10q03", 1000);
	func_190(var_13_cvector, var_14_cvector);
}


void func_279(object var_34_object, object var_35_object, string var_36_string, string var_37_string, string var_38_string)
{
	bool var_43_bool; cvector var_44_cvector; cvector var_45_cvector;
	var_35_object->GetLocator(var_36_string, var_43_bool, var_44_cvector, var_45_cvector);
	if(!var_43_bool) //@nz
		@Trace(("Locator " + var_36_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_37_string, var_35_object, var_44_cvector, var_45_cvector, var_38_string);
	object var_46_object = var_34_object;
	
}
EMIT "Stack[-1] = 0";


void func_249(object var_103_object)
{
	object var_105_object;
	@self(var_105_object);
	var_105_object = var_103_object;
}
EMIT "Stack[-1] = 0";


void func_315(object var_88_object)
{
	int var_92_int; int var_93_int; object var_94_object;
	if(var_88_object != 0) {
		var_88_object->size(var_92_int);
		var_93_int = 0;

		while(var_93_int < var_92_int) {
			var_88_object->get(var_94_object, var_93_int);
			if(var_94_object != 0)
				var_94_object->Remove();
			var_94_object = null;
			var_93_int += 1;
		}

		var_88_object->clear();
	}
}


void func_190(object var_0_object, object var_1_object)
{
	func_336(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
}


void func_255(object var_6_object)
{
	object var_8_object;
	@CreateObjectVector(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


