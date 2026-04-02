maintask task_0
{
	void init(object var_0_object)
	{
		object var_3_object;
		func_96(var_3_object);
		var_0_object = var_3_object;
		object var_2_object;
		@GetMainOutdoorScene(var_2_object);
		object var_6_object; object var_7_object;
		var_2_object = var_7_object;
		func_102(var_6_object, var_7_object, "pt_b1q04_grabitel1", "pers_grabitel", "b1q04_grabitel.xml");
		var_0_object->add(var_6_object); //@t
		object var_24_object; object var_25_object;
		var_2_object = var_25_object;
		func_102(var_24_object, var_25_object, "pt_b1q04_grabitel2", "pers_grabitel", "b1q04_grabitel2.xml");
		var_0_object->add(var_24_object); //@t
		object var_29_object; object var_30_object;
		var_2_object = var_30_object;
		func_102(var_29_object, var_30_object, "pt_b1q04_worker1", "pers_worker", "b1q04_worker.xml");
		var_0_object->add(var_29_object); //@t
		object var_34_object; object var_35_object;
		var_2_object = var_35_object;
		func_102(var_34_object, var_35_object, "pt_b1q04_worker2", "pers_worker", "b1q04_worker.xml");
		var_0_object->add(var_34_object); //@t
		func_66(1);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_49();
	}

}


void func_96(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_66(int var_39_int)
{
	float var_41_float;
	@GetGameTime(var_41_float);
	if(var_41_float >= (var_39_int * 24)) {
		func_53(var_41_float);
	} else {
		@SetTimeEvent(0, (var_39_int * 24));
		@Hold();
	}
	
}


void func_102(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
{
	bool var_15_bool; cvector var_16_cvector; cvector var_17_cvector;
	var_7_object->GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	if(!var_15_bool) //@nz
		@Trace(("Locator " + var_8_string) + " doesn't exist");
	else
		var_7_object->AddStationaryActor(Obj(), var_16_cvector, var_17_cvector, var_9_string, var_10_string);
	object var_18_object = var_6_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_49(void)
{
	func_53(var_2_float);
}


void func_53(object var_0_object)
{
	if(var_0_object != 0) {
		func_120(var_0_object);
		var_0_object = null;
	}
	object var_57_object;
	func_90(var_57_object);
	@RemoveActor(var_57_object);
}


void func_120(object var_46_object)
{
	int var_50_int; int var_51_int; object var_52_object;
	if(var_46_object != 0) {
		var_46_object->size(var_50_int);
		var_51_int = 0;

		while(var_51_int < var_50_int) {
			var_46_object->get(var_52_object, var_51_int);
			if(var_52_object != 0)
				var_52_object->Remove();
			var_52_object = null;
			var_51_int += 1;
		}

		var_46_object->clear();
	}
}


void func_90(object var_57_object)
{
	object var_59_object;
	@self(var_59_object);
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


