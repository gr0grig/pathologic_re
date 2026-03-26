// @IMPORTS: SetVisibility/1,Hold/0,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,PlaySound/1,SetVariable/2,Sleep/1
// @STRINGS: W:bottle_empty|W:Category|A:GetItemCount|A:GetItem|A:GetItemID|W:disease|A:HasProperty|A:GetProperty|A:RemoveItem|W:bottle_water|A:SetItemName|A:SetProperty|W:fill|W:player_exchange|A:AddItem|A:DropItems
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xb vars=object

task_0_event_0(var_0_object)
{
	var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_float = 0; var_6_int = 0; var_7_object = Obj(); var_8_int = 0; var_9_bool = 0; var_10_float = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_float = 0; var_17_int = 0; var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_float = 0; var_22_object = Obj();
	GetInvItemByName(var_12_int, "bottle_empty");
	GetInvItemProperty(var_13_int, var_12_int, "Category");
	@@var_0_object:GetItemCount(var_14_int, var_13_int);
	var_15_int = -1;
	var_17_int = 0;
	
Label_22:
	var_25_bool = var_17_int < var_14_int;
	if(var_25_bool != 0) {
		@@var_0_object:GetItem(var_18_object, var_17_int, var_13_int);
		@@var_18_object:GetItemID(var_19_int);
		var_26_bool = var_19_int == var_12_int;
		if(var_26_bool != 0) {
			@@var_18_object:HasProperty(var_20_bool, "disease");
			var_28_bool = var_20_bool == 0; //@nz
			if(var_28_bool != 0) {
				var_29_bool = 0;
				var_29_bool = 1;
				var_31_bool = var_15_int == (int)-1;
				if(var_31_bool != 1) {
					var_33_bool = var_16_float > (int)0;
					if(var_33_bool != 1) {
						var_29_bool = 0;
					}
				}
				if(var_29_bool != 0) {
					var_17_int = var_15_int;
					var_16_float = 0;
				}
			} else {
				@@var_18_object:GetProperty(var_21_float, "disease");
				var_36_bool = 0;
				var_36_bool = 1;
				var_38_bool = var_15_int == (int)-1;
				if(var_38_bool != 1) {
					var_39_bool = var_21_float < var_16_float;
					if(var_39_bool != 1) {
						var_36_bool = 0;
					}
				}
				if(var_36_bool == 0) goto Label_62;
				var_17_int = var_15_int;
				var_21_float = var_16_float;
	}
			var_41_bool = var_15_int != (int)-1;
			if(var_41_bool != 0) {
				EventDisable(0);
				@@var_0_object:RemoveItem(var_15_int, (int)1, var_13_int);
				CreateInvItem(var_22_object);
				@@var_22_object:SetItemName("bottle_water");
				@@var_22_object:SetProperty("disease", var_16_float);
				var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0;
				var_0_object = var_45_object;
				var_22_object = var_46_object;
				func_100(var_45_object, var_46_object, (int)1);
				PlaySound("fill");
				SetVariable("player_exchange", (int)1);
				Sleep((int)1);
				EventEnable(0);
				var_22_object = 0;
			}
			return 22;
		}
	}
Label_62:
	var_18_object = 0;
	var_17_int = var_17_int + (int)1;
	goto Label_22;
	
}


main()
{
	func_10();
	SetVisibility((bool)1);
	
Label_6:
	Hold();
	goto Label_6;
}
EMIT "Return(); Pop(0)";


func_10()
{
	return 0;
}


func_100(var_45_object, var_46_object, var_47_int)
{
	var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0;
	@@var_46_object:GetItemID(var_51_int);
	GetInvItemProperty(var_52_int, var_51_int, "Category");
	@@var_45_object:AddItem(var_53_bool, var_46_object, var_52_int, var_47_int);
	var_55_bool = var_53_bool == 0; //@nz
	if(var_55_bool != 0) {
		@@var_45_object:DropItems(var_46_object, var_47_int);
	}
	return 6;
}


