maintask task_0
{
	// @pe
	void init(void)
	{
		func_10();
		@SetVisibility(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor)
	{
		int var_10_int; object var_15_object; int var_16_int; int var_17_int; object var_18_object;
		@GetInvItemByName(var_10_int, "bottle_empty");
		int var_11_int;
		@GetInvItemProperty(var_11_int, var_10_int, "Category");
		int var_12_int;
		actor->GetItemCount(var_12_int, var_11_int);
		int var_13_int = 0;
		int var_14_int = 0;
	
		for(;;) {
			if(var_14_int < var_12_int) {
				actor->GetItem(var_15_object, var_14_int, var_11_int);
				var_15_object->GetItemID(var_16_int);
				if(var_16_int == var_10_int) {
					actor->GetItemAmount(var_17_int, var_14_int, var_11_int);
					var_13_int += var_17_int;
					actor->RemoveItem(var_14_int, var_17_int, var_11_int);
					var_12_int += -1;
				} else {
				var_14_int += 1;
			}
			if(var_13_int != 0) {
				disable OnUse;
				@CreateInvItem(var_18_object);
				var_18_object->SetItemName("bottle_water");
				object var_27_object; object var_28_object; int var_29_int;
				actor = var_27_object;
				var_18_object = var_28_object;
				var_13_int = var_29_int;
				func_95(var_27_object, var_28_object, var_29_int);
				@PlaySound("fill");
				@SendWorldWndMessage(5);
				@Sleep(1);
				enable OnUse;
				var_18_object = null;
			} else {
				func_73(400);
			}
			}
			var_15_object = null;
		}
	
	}

}


void func_73(int var_46_int)
{
	object var_48_object;
	@CreateIntVector(var_48_object);
	var_48_object->add(var_46_int);
	@SendWorldWndMessage(200, var_48_object);
}
EMIT "Stack[-1] = 0";


void func_10(void)
{
}


void func_83(int var_38_int, int var_39_int)
{
	object var_41_object;
	@CreateIntVector(var_41_object);
	var_41_object->add(var_38_int);
	var_41_object->add(var_39_int);
	@SendWorldWndMessage(3, var_41_object);
}
EMIT "Stack[-1] = 0";


void func_95(object var_27_object, object var_28_object, int var_29_int)
{
	int var_33_int;
	var_28_object->GetItemID(var_33_int);
	int var_34_int;
	@GetInvItemProperty(var_34_int, var_33_int, "Category");
	bool var_35_bool;
	var_27_object->AddItem(var_35_bool, var_28_object, var_34_int, var_29_int);
	if(!var_35_bool) { //@nz
		var_27_object->DropItems(var_28_object, var_29_int);
	} else {
		int var_38_int; int var_39_int;
		var_33_int = var_38_int;
		var_29_int = var_39_int;
		func_83(var_38_int, var_39_int);
	}
	
}


