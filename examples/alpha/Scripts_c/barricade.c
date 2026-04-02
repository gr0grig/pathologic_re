task task_0
{
	void OnLoad(object var_0_object)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object)
	{
		bool var_1_bool;
		func_39(var_1_bool);
		if(var_1_bool != 0) {
			func_49(true);
			func_76(var_0_object);
		} else {
			func_49(false);
			func_127(var_0_object);
		}
	
	}

	void OnUnload(object var_0_object)
	{
		func_127(var_0_object);
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


void func_0(void)
{
	@Hold();
}


void func_133(cvector var_30_cvector)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	var_32_cvector = var_30_cvector;
}


void func_39(bool var_1_bool)
{
	float var_3_float;
	@GetGameTime(var_3_float);
	if(var_3_float > 198)
		var_1_bool = true;
	var_1_bool = false;
}


void func_76(object var_0_object)
{
	cvector var_30_cvector;
	func_133(var_30_cvector);
	cvector var_25_cvector = var_30_cvector + [0.0, 150.0, 0.0];
	float var_27_float;
	float var_28_float;
	@RandVec2D(var_27_float, var_28_float);
	cvector var_26_cvector;
	var_34_float = GetByIndex(var_26_cvector, 0);
	var_27_float = var_34_float;
	SetByIndex(var_26_cvector, 0) = var_34_float;
	var_35_float = GetByIndex(var_26_cvector, 1);
	SetByIndex(var_26_cvector, 1) = (float)0;
	var_36_float = GetByIndex(var_26_cvector, 2);
	var_28_float = var_36_float;
	SetByIndex(var_26_cvector, 2) = var_36_float;
	object var_29_object;
	@GetScene(var_29_object);
	if(!var_29_object) //@nz
		@Trace("Barricade null scene");
	var_29_object->AddStationaryActor(var_0_object, var_25_cvector, var_26_cvector, "pers_soldat", "soldier.xml", true);
	if(var_0_object == null) {
		@Trace("Error adding soldier");
	} else {
		var_45_float = GetByIndex(var_25_cvector, 0);
		var_49_float = GetByIndex(var_25_cvector, 1);
		var_53_float = GetByIndex(var_25_cvector, 2);
		@Trace((((("Soldier was added: " + var_45_float) + " ") + var_49_float) + " ") + var_53_float);
	}
	
}
EMIT "Stack[-1] = 0";


void func_49(bool var_6_bool)
{
	object var_10_object;
	@SetVisibility(var_6_bool);
	int var_9_int;
	@GetPFPolyID(var_9_int);
	if(var_9_int != -1) {
		@Trace("Blocking polygons: " + (var_9_int & 248));
		@GetMainOutdoorScene(var_10_object);
		if(var_6_bool != 0)
			var_10_object->BlockPolygons(var_9_int, 248);
		else
			var_10_object->UnblockPolygons(var_9_int, 248);
		var_10_object = null;
	}
	
}


void func_127(object var_0_object)
{
	if(var_0_object != 0) {
		var_0_object->Remove(); //@t
		var_0_object = null;
	}
}


