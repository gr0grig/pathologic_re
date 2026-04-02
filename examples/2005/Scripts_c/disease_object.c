maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		if(var_1_string == "cleanup") {
			var_0_bool = true;
		} else if(var_1_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnLoad(bool var_0_bool)
	{
		if(!var_0_bool) { //@nz
			@SetVisibility(true);
			func_38(true);
		}
	}

	void OnUnload(bool var_0_bool)
	{
		if(var_0_bool != 0) {
			func_38(false);
			object var_17_object;
			func_67(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

}


void func_67(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_38(bool var_2_bool)
{
	int var_5_int; object var_6_object;
	@GetPFPolyID(var_5_int);
	if(var_5_int != -1) {
		@GetMainOutdoorScene(var_6_object);
		if(var_2_bool != 0) {
			@Trace("Blocking polygons: " + (var_5_int & 1016));
			var_6_object->BlockPolygons(var_5_int, 1016);
		} else {
			var_6_object->UnblockPolygons(var_5_int, 1016);
	}
		@Trace("ERROR: Can't find PF polygon to block");
	}
	var_6_object = null;
	goto Label_66;
	
Label_66:
	
}


