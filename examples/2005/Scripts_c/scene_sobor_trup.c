maintask task_0
{
	void init(object var_0_object)
	{
		@CreateObjectVector(var_0_object);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		if(var_1_string == "noaglaja") {
			@SetVariable("sobor_aglaja", 0);
		} else if(var_1_string == "aglaja") {
			@SetVariable("sobor_aglaja", 1);
		}
	
	}

	void OnLoad(object var_0_object)
	{
		object var_6_object;
		func_113(var_6_object);
		object var_2_object;
		var_6_object = var_2_object;
		object var_1_object;
		func_119(var_1_object, var_2_object, "pt_d6q01_boy", "pers_boy", "d6q01_boy.xml");
		var_0_object->add(var_1_object); //@t
		object var_22_object; object var_23_object;
		object var_27_object;
		func_113(var_27_object);
		var_27_object = var_23_object;
		func_119(var_22_object, var_23_object, "pt_d6q01_girl", "pers_girl", "d6q01_girl.xml");
		var_0_object->add(var_22_object); //@t
		object var_28_object; object var_29_object;
		object var_33_object;
		func_113(var_33_object);
		var_33_object = var_29_object;
		func_119(var_28_object, var_29_object, "pt_d6q01_unosha", "pers_unosha", "d6q01_unosha.xml");
		var_0_object->add(var_28_object); //@t
		object var_34_object; object var_35_object;
		object var_39_object;
		func_113(var_39_object);
		var_39_object = var_35_object;
		func_119(var_34_object, var_35_object, "pt_d6q01_wasted_male", "pers_wasted_male", "d6q01_wasted_male.xml");
		var_0_object->add(var_34_object); //@t
		object var_40_object; object var_41_object;
		object var_45_object;
		func_113(var_45_object);
		var_45_object = var_41_object;
		func_119(var_40_object, var_41_object, "pt_d6q01_wasted_woman", "pers_wasted_girl", "d6q01_wasted_woman.xml");
		var_0_object->add(var_40_object); //@t
		object var_46_object; object var_47_object;
		object var_51_object;
		func_113(var_51_object);
		var_51_object = var_47_object;
		func_119(var_46_object, var_47_object, "pt_d6q01_woman", "pers_woman", "d6q01_woman.xml");
		var_0_object->add(var_46_object); //@t
		object var_52_object; object var_53_object;
		object var_57_object;
		func_113(var_57_object);
		var_57_object = var_53_object;
		func_119(var_52_object, var_53_object, "pt_d6q01_worker", "pers_worker", "d6q01_worker.xml");
		var_0_object->add(var_52_object); //@t
	}

	void OnUnload(object var_0_object)
	{
		func_137(var_0_object);
	}

}


void func_113(object var_6_object)
{
	object var_8_object;
	@self(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


void func_137(object var_1_object)
{
	int var_5_int; int var_6_int; object var_7_object;
	if(var_1_object != 0) {
		var_1_object->size(var_5_int);
		var_6_int = 0;

		while(var_6_int < var_5_int) {
			var_1_object->get(var_7_object, var_6_int);
			if(var_7_object != 0)
				@RemoveActor(var_7_object);
			var_7_object = null;
			var_6_int += 1;
		}

		var_1_object->clear();
	}
}


void func_119(object var_1_object, object var_2_object, string var_3_string, string var_4_string, string var_5_string)
{
	bool var_13_bool; cvector var_14_cvector; cvector var_15_cvector;
	var_2_object->GetLocator(var_3_string, var_13_bool, var_14_cvector, var_15_cvector);
	if(!var_13_bool) //@nz
		@Trace(("Locator " + var_3_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_4_string, var_2_object, var_14_cvector, var_15_cvector, var_5_string);
	object var_16_object = var_1_object;
	
}
EMIT "Stack[-1] = 0";


