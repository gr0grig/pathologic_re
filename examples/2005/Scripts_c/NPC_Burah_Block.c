// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3196();
			if(var_26_bool == 32194) {
				func_152(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530875); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530876, 32199, 32195); //@t
				var_0_object->AddReply(530877, 32197, 32196); //@t
				return 0;
			}
			if(var_26_bool == 32197) {
				func_152(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530878); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530879, 32199, 32198); //@t
				var_0_object->AddReply(530881, 32199, 32200); //@t
				return 0;
			}
			if(var_26_bool == 32199) {
				func_152(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530880); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530882, -1, 32203); //@t
				var_0_object->AddReply(530883, -1, 32204); //@t
				return 0;
			}
			var_3_string = true;
			bool var_71_bool;
			func_3296(var_71_bool);
			if(var_71_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3196();
			if(var_27_cvector == 23500) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3407();
				object var_50_object = var_1_object;
				func_3298(var_0_object);
			}
			if(var_27_cvector == 23501) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_3407();
				object var_80_object = var_1_object;
				func_3298(var_0_object);
			}
			if(var_27_cvector == 23495) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_3407();
				object var_86_object = var_1_object;
				func_3298(var_0_object);
			}
			if(var_27_cvector == 23496) {
				object var_90_object; object var_91_object;
				var_90_object = var_1_object;
				var_91_object = var_0_object;
				func_3407();
				object var_92_object = var_1_object;
				func_3298(var_0_object);
			}
			if(var_27_cvector == 23510) {
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_3351();
			}
			if(var_27_cvector == 22758) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_3357();
			}
			if(var_26_bool == 22695) {
				bool var_108_bool;
				func_3423(var_1_object);
				if(var_108_bool != 0) {
					object var_116_object; object var_117_object;
					var_116_object = var_1_object;
					var_117_object = var_0_object;
					func_3314();
					object var_120_object; object var_121_object;
					var_120_object = var_1_object;
					var_121_object = var_0_object;
					func_3401();
					func_451(var_27_cvector, "Neutral");
					var_0_object->SetMessage(521534); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522289, 23470, 23444); //@t
					var_0_object->AddReply(522291, 23449, 23446); //@t
					return 0;
				}
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521594); //@t
				var_0_object->ClearReplies(); //@t
				bool var_145_bool;
				func_3505(var_1_object);
				if(var_145_bool != 0)
					var_0_object->AddReply(522347, 23514, 23510); //@t
				bool var_154_bool;
				func_3517(var_1_object);
				if(var_154_bool != 0)
					var_0_object->AddReply(521595, 23511, 22758); //@t
				var_0_object->AddReply(522350, -1, 23513); //@t
				return 0;
			}
			if(var_26_bool == 23511) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522349, -1, 23512); //@t
				return 0;
			}
			if(var_26_bool == 23514) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522351); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522352, 23516, 23515); //@t
				return 0;
			}
			if(var_26_bool == 23516) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522354, 23518, 23517); //@t
				return 0;
			}
			if(var_26_bool == 23518) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522356, 23520, 23519); //@t
				return 0;
			}
			if(var_26_bool == 23520) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522357); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522358, 23522, 23521); //@t
				var_0_object->AddReply(522360, -1, 23523); //@t
				return 0;
			}
			if(var_26_bool == 23522) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522361, -1, 23524); //@t
				return 0;
			}
			if(var_26_bool == 23449) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522294); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522295, 23453, 23450); //@t
				var_0_object->AddReply(522297, 23447, 23452); //@t
				return 0;
			}
			if(var_26_bool == 23447) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522292); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522296, -1, 23451); //@t
				var_0_object->AddReply(522293, -1, 23448); //@t
				return 0;
			}
			if(var_26_bool == 23453) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522299, 23457, 23454); //@t
				var_0_object->AddReply(522300, 23447, 23455); //@t
				return 0;
			}
			if(var_26_bool == 23457) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522301); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522302, 23464, 23458); //@t
				var_0_object->AddReply(522303, 23460, 23459); //@t
				return 0;
			}
			if(var_26_bool == 23460) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522305, -1, 23461); //@t
				var_0_object->AddReply(522306, 23447, 23462); //@t
				return 0;
			}
			if(var_26_bool == 23464) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522308, 22697, 23465); //@t
				var_0_object->AddReply(522309, 23467, 23466); //@t
				return 0;
			}
			if(var_26_bool == 23467) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522310); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522311, 23447, 23468); //@t
				return 0;
			}
			if(var_26_bool == 23470) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522313, 23472, 23471); //@t
				return 0;
			}
			if(var_26_bool == 23472) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522316, 23445, 23474); //@t
				var_0_object->AddReply(522315, 23502, 23473); //@t
				return 0;
			}
			if(var_26_bool == 23502) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522342, 23445, 23504); //@t
				var_0_object->AddReply(522341, 23507, 23503); //@t
				return 0;
			}
			if(var_26_bool == 23507) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522346, 23445, 23508); //@t
				return 0;
			}
			if(var_26_bool == 23445) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521535, 23481, 22696); //@t
				var_0_object->AddReply(522319, 23479, 23478); //@t
				return 0;
			}
			if(var_26_bool == 23479) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522320); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522321, 23483, 23480); //@t
				return 0;
			}
			if(var_26_bool == 23483) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522324); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522325, 23457, 23484); //@t
				return 0;
			}
			if(var_26_bool == 23481) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522322); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522323, 22697, 23482); //@t
				var_0_object->AddReply(522328, 22697, 23489); //@t
				return 0;
			}
			if(var_26_bool == 22697) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(521536); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522326, 23488, 23487); //@t
				return 0;
			}
			if(var_26_bool == 23488) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522327); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522329, 23497, 23491); //@t
				var_0_object->AddReply(521537, 23492, 22698); //@t
				return 0;
			}
			if(var_26_bool == 23492) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522331, 23494, 23493); //@t
				return 0;
			}
			if(var_26_bool == 23494) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522333, -1, 23495); //@t
				var_0_object->AddReply(522334, -1, 23496); //@t
				return 0;
			}
			if(var_26_bool == 23497) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522335); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522336, 23499, 23498); //@t
				var_0_object->AddReply(530873, 23499, 32191); //@t
				return 0;
			}
			if(var_26_bool == 23499) {
				func_451(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522337); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522338, -1, 23500); //@t
				var_0_object->AddReply(522339, -1, 23501); //@t
				return 0;
			}
			var_3_string = true;
			bool var_400_bool;
			func_3296(var_400_bool);
			if(var_400_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1da";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3196();
			if(var_27_cvector == 24032) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3332();
			}
			if(var_26_bool == 23290) {
				bool var_38_bool = false;
				bool var_39_bool;
				func_3435(var_1_object);
				if(var_39_bool != 0) {
					bool var_47_bool;
					func_3459(var_47_bool, var_1_object);
					if(!var_47_bool) //@nz
						var_38_bool = true;
				}
				if(var_38_bool != 0) {
					object var_59_object; object var_60_object;
					var_59_object = var_1_object;
					var_60_object = var_0_object;
					func_3320();
					object var_63_object; object var_64_object;
					var_63_object = var_1_object;
					var_64_object = var_0_object;
					func_3326();
					func_1418(var_27_cvector, "Neutral");
					var_0_object->SetMessage(522123); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522124, 24011, 23291); //@t
					var_0_object->AddReply(540112, -1, 42079); //@t
					return 0;
				}
				bool var_86_bool;
				func_3459(var_86_bool, var_1_object);
				if(var_86_bool != 0) {
					object var_88_object; object var_89_object;
					var_88_object = var_1_object;
					var_89_object = var_0_object;
					func_3326();
					func_1418(var_27_cvector, "Neutral");
					var_0_object->SetMessage(522127); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522128, -1, 23295); //@t
					var_0_object->AddReply(522844, -1, 24028); //@t
					return 0;
				}
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_3326();
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522125); //@t
				var_0_object->ClearReplies(); //@t
				bool var_102_bool;
				func_3447(var_1_object);
				if(var_102_bool != 0)
					var_0_object->AddReply(522848, 24033, 24032); //@t
				var_0_object->AddReply(522126, -1, 23293); //@t
				return 0;
			}
			if(var_26_bool == 24033) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522849); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522850, 24035, 24034); //@t
				return 0;
			}
			if(var_26_bool == 24035) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522852, 24037, 24036); //@t
				var_0_object->AddReply(540113, -1, 42080); //@t
				return 0;
			}
			if(var_26_bool == 24037) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522854, -1, 24038); //@t
				return 0;
			}
			if(var_26_bool == 24011) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522828); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522829, 24015, 24012); //@t
				var_0_object->AddReply(522830, 24014, 24013); //@t
				return 0;
			}
			if(var_26_bool == 24014) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522839, 24019, 24022); //@t
				return 0;
			}
			if(var_26_bool == 24015) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522833, 24017, 24016); //@t
				var_0_object->AddReply(522840, -1, 24024); //@t
				return 0;
			}
			if(var_26_bool == 24017) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522835, 24019, 24018); //@t
				var_0_object->AddReply(522841, -1, 24025); //@t
				return 0;
			}
			if(var_26_bool == 24019) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522836); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522837, 24021, 24020); //@t
				return 0;
			}
			if(var_26_bool == 24021) {
				func_1418(var_27_cvector, "Neutral");
				var_0_object->SetMessage(522838); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522843, -1, 24027); //@t
				var_0_object->AddReply(522842, -1, 24026); //@t
				return 0;
			}
			var_3_string = true;
			bool var_192_bool;
			func_3296(var_192_bool);
			if(var_192_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5a1";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3196();
			if(var_27_cvector == 26059) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3345();
			}
			if(var_27_cvector == 26065) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_3338();
			}
			if(var_27_cvector == 31819) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3363();
			}
			if(var_27_cvector == 31825) {
				object var_54_object; object var_55_object;
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_3385();
				object var_72_object = var_1_object;
				func_3369(var_0_object);
			}
			if(var_26_bool == 26058) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(524719); //@t
				var_0_object->ClearReplies(); //@t
				bool var_113_bool = false;
				bool var_114_bool = false;
				bool var_115_bool;
				func_3469(var_1_object);
				if(var_115_bool != 0) {
					bool var_123_bool;
					func_3481(var_1_object);
					if(!var_123_bool) //@nz
						var_114_bool = true;
				}
				if(var_114_bool != 0) {
					bool var_130_bool;
					func_3493(var_1_object);
					if(var_130_bool != 0)
						var_113_bool = true;
				}
				if(var_113_bool != 0)
					var_0_object->AddReply(524720, 32206, 26059); //@t
				bool var_139_bool = false;
				bool var_140_bool;
				func_3481(var_1_object);
				if(var_140_bool != 0) {
					bool var_142_bool;
					func_3469(var_1_object);
					if(var_142_bool != 0)
						var_139_bool = true;
				}
				if(var_139_bool != 0)
					var_0_object->AddReply(524724, 32212, 26063); //@t
				bool var_147_bool = false;
				bool var_148_bool;
				func_3529(var_1_object);
				if(var_148_bool != 0) {
					bool var_154_bool;
					func_3541(var_1_object);
					if(var_154_bool != 0)
						var_147_bool = true;
				}
				if(var_147_bool != 0)
					var_0_object->AddReply(530453, 32226, 31819); //@t
				var_0_object->AddReply(524721, -1, 26060); //@t
				var_0_object->AddReply(530884, -1, 32205); //@t
				return 0;
			}
			if(var_26_bool == 32226) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530902); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530903, 32228, 32227); //@t
				var_0_object->AddReply(530906, 32228, 32230); //@t
				return 0;
			}
			if(var_26_bool == 32228) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530905, 31820, 32229); //@t
				var_0_object->AddReply(530907, 32233, 32232); //@t
				return 0;
			}
			if(var_26_bool == 32233) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530909, -1, 32234); //@t
				var_0_object->AddReply(530910, -1, 32235); //@t
				return 0;
			}
			if(var_26_bool == 31820) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530455, 31822, 31821); //@t
				var_0_object->AddReply(530911, 31822, 32236); //@t
				return 0;
			}
			if(var_26_bool == 31822) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530456); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530457, 31824, 31823); //@t
				var_0_object->AddReply(530912, 32239, 32238); //@t
				return 0;
			}
			if(var_26_bool == 32239) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530914, 31824, 32240); //@t
				var_0_object->AddReply(530915, -1, 32241); //@t
				return 0;
			}
			if(var_26_bool == 31824) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530458); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530459, -1, 31825); //@t
				return 0;
			}
			if(var_26_bool == 32212) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530891); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530892, 32215, 32213); //@t
				var_0_object->AddReply(530893, -1, 32214); //@t
				return 0;
			}
			if(var_26_bool == 32215) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530896, 32219, 32217); //@t
				var_0_object->AddReply(530895, 32219, 32216); //@t
				var_0_object->AddReply(530897, 32219, 32218); //@t
				return 0;
			}
			if(var_26_bool == 32219) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530898); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530899, 26064, 32220); //@t
				var_0_object->AddReply(530901, 26064, 32224); //@t
				return 0;
			}
			if(var_26_bool == 26064) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(524725); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524726, -1, 26065); //@t
				return 0;
			}
			if(var_26_bool == 32206) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530885); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530886, 32208, 32207); //@t
				return 0;
			}
			if(var_26_bool == 32208) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(530887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530888, 26061, 32209); //@t
				var_0_object->AddReply(530889, -1, 32210); //@t
				return 0;
			}
			if(var_26_bool == 26061) {
				func_1968(var_27_cvector, "Neutral");
				var_0_object->SetMessage(524722); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524723, -1, 26062); //@t
				var_0_object->AddReply(530890, -1, 32211); //@t
				return 0;
			}
			var_3_string = true;
			bool var_303_bool;
			func_3296(var_303_bool);
			if(var_303_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7c7";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_3196();
			if(var_26_int == 42563) {
				func_2587(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540554); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540555, -1, 42564); //@t
				var_0_object->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_3296(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa32";
	
	}

}


maintask task_11
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_2655(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_2726();
			bool var_30_bool = false;
			bool var_31_bool;
			func_2940(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_2695(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_2675(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_3203(var_72_object);
					var_72_object = var_71_object;
					func_3088(var_70_bool, var_71_object);
				}
			} else {
				func_2690(var_26_int);
				func_2717();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_2908();
		func_2726();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_2726();
		func_3168("Neutral");
		func_2717();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_2717();
		else
			func_3168("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_2908();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_2931(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_3631(var_44_object);
			func_3168("Neutral");
			func_2726();
			func_2717();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_30_bool;
	func_2940(var_30_bool);
	if(!var_30_bool) goto Label_0; //@nz
}


// @pe
void func_3332(void)
{
	@SetVariable("oob12Block2", 1);
}


void func_262(object var_0_object, int var_267_int, object var_268_object)
{
	var_0_object = var_268_object;
	bool var_278_bool; object var_279_object;
	object var_280_object;
	func_3203(var_280_object);
	var_280_object = var_279_object;
	func_3030(var_278_bool, var_279_object);
	bool var_281_bool; object var_282_object;
	var_268_object = var_282_object;
	func_2945(var_281_bool, var_282_object, 70.0);
	if(!var_281_bool) { //@nz
		var_267_int = -2;
		return 8;
	}
	object var_274_object;
	@CreateDialog(var_274_object);
	int var_285_int;
	func_3290(var_285_int);
	var_274_object->SetNPCName(var_285_int);
	int var_286_int;
	func_3288(var_286_int);
	var_274_object->SetNPCDescription(var_286_int);
	string var_287_string;
	func_3292(var_287_string);
	var_274_object->SetPhoto(var_287_string);
	string var_288_string;
	func_3294(var_288_string);
	var_274_object->SetPhoto2(var_288_string);
	int var_289_int;
	func_3614(var_289_int);
	var_274_object->SetPlayerName(var_289_int);
	bool var_275_bool;
	@IsOverrideActive(var_275_bool);
	if(var_275_bool != 0) {
		var_267_int = -2;
		return 8;
	}
	@DoDialog(var_274_object);
	object var_291_object; object var_292_object;
	var_268_object = var_291_object;
	var_274_object = var_292_object;
	TaskCall(4);
	func_343(var_293_object, var_294_object, var_295_string, var_296_bool, var_291_object, var_292_object);
	TaskReturn();
	bool var_277_bool;
	var_274_object->IsDialogEnd(var_277_bool);
	
	for(;;) {
		var_360_bool = !var_277_bool; //@nz
		if(var_360_bool == 0) goto Label_332;
		@sync();
		var_274_object->IsDialogEnd(var_277_bool);
	}
	
Label_332:
	object var_361_object;
	var_268_object = var_361_object;
	func_3013();
	@StopDialog(var_274_object);
	var_274_object->GetReturnValue(-1);
	int var_276_int = var_267_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3338(void)
{
	bool var_40_bool;
	func_3224(var_40_bool, "quest_b10_02", "completed");
}


void func_13(object var_0_object, int var_49_int, object var_50_object)
{
	var_0_object = var_50_object;
	bool var_60_bool; object var_61_object;
	object var_62_object;
	func_3203(var_62_object);
	var_62_object = var_61_object;
	func_3030(var_60_bool, var_61_object);
	bool var_155_bool; object var_156_object;
	var_50_object = var_156_object;
	func_2945(var_155_bool, var_156_object, 70.0);
	if(!var_155_bool) { //@nz
		var_49_int = -2;
		return 8;
	}
	object var_56_object;
	@CreateDialog(var_56_object);
	int var_202_int;
	func_3290(var_202_int);
	var_56_object->SetNPCName(var_202_int);
	int var_203_int;
	func_3288(var_203_int);
	var_56_object->SetNPCDescription(var_203_int);
	string var_204_string;
	func_3292(var_204_string);
	var_56_object->SetPhoto(var_204_string);
	string var_205_string;
	func_3294(var_205_string);
	var_56_object->SetPhoto2(var_205_string);
	int var_206_int;
	func_3614(var_206_int);
	var_56_object->SetPlayerName(var_206_int);
	bool var_57_bool;
	@IsOverrideActive(var_57_bool);
	if(var_57_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	@DoDialog(var_56_object);
	object var_215_object; object var_216_object;
	var_50_object = var_215_object;
	var_56_object = var_216_object;
	TaskCall(2);
	func_94(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object);
	TaskReturn();
	bool var_59_bool;
	var_56_object->IsDialogEnd(var_59_bool);
	
	for(;;) {
		var_254_bool = !var_59_bool; //@nz
		if(var_254_bool == 0) goto Label_83;
		@sync();
		var_56_object->IsDialogEnd(var_59_bool);
	}
	
Label_83:
	object var_255_object;
	var_50_object = var_255_object;
	func_3013();
	@StopDialog(var_56_object);
	var_56_object->GetReturnValue(-1);
	int var_58_int = var_49_int;
}
EMIT "Stack[-4] = 0";


void func_3088(bool var_71_bool, object var_72_object)
{
	string var_78_string; bool var_80_bool; int var_81_int; string var_82_string;
	var_78_string = "c";
	int var_79_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_72_object->HasProperty((var_78_string + (var_79_int + 1)), var_80_bool);
			if(!var_80_bool) { //@nz
			} else {
				var_79_int += 1;
			}
		}
		if(!var_79_int) { //@nz
			var_71_bool = false;
			return 10;
		}
		var_81_int = 0;
		if(var_79_int > 1)
			@irand(var_81_int, var_79_int);
		var_72_object->GetProperty((var_78_string + (var_81_int + 1)), var_82_string);
		bool var_94_bool; string var_95_string;
		var_82_string = var_95_string;
		func_3181(var_94_bool, var_95_string);
		var_94_bool = var_71_bool;
		return 10;

	}
}


// @pe
void func_3345(void)
{
	@SetVariable("oob10Block1", 1);
}


void func_2837(void)
{
	bool var_52_bool; int var_53_int; int var_54_int; bool var_55_bool;
	@WaitForAnimEnd();
	bool var_56_bool;
	func_2940(var_56_bool);
	if(!var_56_bool) //@nz
		return 12;
	int var_58_int;
	func_3271(var_58_int);
	int var_50_int;
	var_58_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_51_int < 5) {
			bool var_74_bool;
			func_2940(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			if(!var_50_int) { //@nz
				@Sleep(3, var_52_bool);
				if(!var_52_bool) { //@nz
				} else {
			} else {
			@irand(var_53_int, var_50_int);
			@irand(var_54_int, 5);
			if(var_54_int != 0)
				var_53_int = 0;
			string var_85_string; int var_86_int;
			var_53_int = var_86_int;
			func_3264(var_85_string, var_86_int);
			@PlayAnimation("all", var_85_string);
			@WaitForAnimEnd(var_55_bool);
			var_87_bool = !var_55_bool; //@nz
			if(var_87_bool == 0) goto Label_2892;
			goto Label_2903;
			}
				Label_2892:
					bool var_78_bool;
					func_2906(var_78_bool);
					var_79_bool = !var_78_bool; //@nz
					if(var_79_bool == 0) goto Label_2898;
			}
		}
	Label_2903:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2898:
		@ResetAAS();
		var_51_int += 1;
	}
	
}


// @pe
void func_3351(void)
{
	@SetVariable("oob9Block2", 1);
}


// @pe
void func_2587(object var_2_object, string var_612_string)
{
	bool var_613_bool;
	func_3296(var_613_bool);
	if(!var_613_bool) //@nz
		return 0;
	if(var_612_string == var_2_object)
		return 0;
	string var_616_string; bool var_617_bool;
	var_612_string = var_616_string;
	if(var_612_string == "")
		var_617_bool = false;
	else
		var_617_bool = true;
	func_3175(var_616_string, var_617_bool);
	var_2_object = var_612_string;
	
}


// @pe
void func_3357(void)
{
	@SetVariable("oob9Block3", 1);
}


void func_3614(int var_206_int)
{
	int var_208_int;
	@GetVariable("branch", var_208_int);
	if(var_208_int == 0) {
		var_206_int = 1;
		return 2;
	EMIT "GOTO 0xe2d";
	}
	if(var_208_int == 1) {
		var_206_int = 2;
		return 2;
	}
	var_206_int = 3;
}


// @pe
void func_3363(void)
{
	@SetVariable("oob10Block2", 1);
}


// @pe
void func_3369(object var_73_object)
{
	object var_77_object;
	func_3564(var_77_object);
	object var_74_object;
	var_77_object = var_74_object;
	func_3581(var_74_object, "pt_gmap_vagon_army", (float)2);
	object var_97_object;
	func_3564(var_97_object);
	var_73_object->ShowMap(var_97_object);
}


void func_3631(object var_44_object)
{
	int var_46_int;
	@GetVariable("mt_block", var_46_int);
	if(!var_46_int) { //@nz
		int var_49_int; object var_50_object;
		var_44_object = var_50_object;
		TaskCall(1);
		func_13(var_51_object, var_49_int, var_50_object);
		TaskReturn();
		@SetVariable("mt_block", 1);
	}
	bool var_264_bool;
	func_3258(var_264_bool, 9);
	if(var_264_bool != 0) {
		int var_267_int; object var_268_object;
		var_44_object = var_268_object;
		TaskCall(3);
		func_262(var_269_object, var_267_int, var_268_object);
		TaskReturn();
		return 2;
	}
	bool var_362_bool;
	func_3258(var_362_bool, 10);
	if(var_362_bool != 0) {
		int var_364_int; object var_365_object;
		var_44_object = var_365_object;
		TaskCall(7);
		func_1762(var_366_object, var_364_int, var_365_object);
		TaskReturn();
		return 2;
	}
	bool var_468_bool;
	func_3258(var_468_bool, 12);
	if(var_468_bool != 0) {
		int var_470_int; object var_471_object;
		var_44_object = var_471_object;
		TaskCall(5);
		func_1194(var_472_object, var_470_int, var_471_object);
		TaskReturn();
		return 2;
	}
	int var_581_int; object var_582_object;
	var_44_object = var_582_object;
	TaskCall(9);
	func_2448(var_583_object, var_581_int, var_582_object);
	TaskReturn();
}


// @pe
void func_1843(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_388_object, object var_389_object)
{
	var_0_object = var_389_object;
	var_1_object = var_388_object;
	var_3_string = false;
	if(1 != 0) {
		func_1968(var_389_object, "Neutral");
		var_0_object->SetMessage(524719); //@t
		var_0_object->ClearReplies(); //@t
		bool var_404_bool = false;
		bool var_405_bool = false;
		bool var_406_bool;
		func_3469(var_1_object);
		if(var_406_bool != 0) {
			bool var_412_bool;
			func_3481(var_1_object);
			if(!var_412_bool) //@nz
				var_405_bool = true;
		}
		if(var_405_bool != 0) {
			bool var_419_bool;
			func_3493(var_1_object);
			if(var_419_bool != 0)
				var_404_bool = true;
		}
		if(var_404_bool != 0)
			var_0_object->AddReply(524720, 32206, 26059); //@t
		bool var_428_bool = false;
		bool var_429_bool;
		func_3481(var_1_object);
		if(var_429_bool != 0) {
			bool var_431_bool;
			func_3469(var_1_object);
			if(var_431_bool != 0)
				var_428_bool = true;
		}
		if(var_428_bool != 0)
			var_0_object->AddReply(524724, 32212, 26063); //@t
		bool var_436_bool = false;
		bool var_437_bool;
		func_3529(var_1_object);
		if(var_437_bool != 0) {
			bool var_443_bool;
			func_3541(var_1_object);
			if(var_443_bool != 0)
				var_436_bool = true;
		}
		if(var_436_bool != 0)
			var_0_object->AddReply(530453, 32226, 31819); //@t
		var_0_object->AddReply(524721, -1, 26060); //@t
		var_0_object->AddReply(530884, -1, 32205); //@t
		goto Label_1938;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x737";
	}
Label_1938:
	bool var_458_bool;
	func_3296(var_458_bool);
	if(var_458_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3168(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1967;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1967:
		return 0;

	}
	
}


void func_3125(bool var_102_bool, object var_103_object)
{
	bool var_111_bool; int var_112_int; string var_113_string;
	int var_115_int;
	func_3241(var_115_int);
	string var_109_string = ("d" + var_115_int) + "m";
	int var_110_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_103_object->HasProperty((var_109_string + (var_110_int + 1)), var_111_bool);
			if(!var_111_bool) { //@nz
			} else {
				var_110_int += 1;
			}
		}
		if(!var_110_int) { //@nz
			var_102_bool = false;
			return 10;
		}
		var_112_int = 0;
		if(var_110_int > 1)
			@irand(var_112_int, var_110_int);
		var_103_object->GetProperty((var_109_string + (var_112_int + 1)), var_113_string);
		bool var_134_bool; string var_135_string;
		var_113_string = var_135_string;
		func_3181(var_134_bool, var_135_string);
		var_134_bool = var_102_bool;
		return 10;

	}
}


void func_3385(void)
{
	object var_58_object;
	func_3564(var_58_object);
	object var_57_object;
	var_58_object = var_57_object;
	float var_69_float;
	func_3236(var_69_float);
	var_57_object->AddMark("b10q04BlockGotoOfficer", "pt_gmap_vagon_army", 0, 530547, var_69_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3401(void)
{
	@SetVariable("b9BlockVisit", 1);
}


void func_3407(void)
{
	object var_36_object;
	func_3564(var_36_object);
	object var_35_object;
	var_36_object = var_35_object;
	float var_47_float;
	func_3236(var_47_float);
	var_35_object->AddMark("b9q01BlockGotoBoiny", "pt_map_starshina", 3, 531550, var_47_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_343(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_291_object, object var_292_object)
{
	var_0_object = var_292_object;
	var_1_object = var_291_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_298_bool;
		func_3423(var_1_object);
		if(var_298_bool != 0) {
			object var_306_object; object var_307_object;
			var_306_object = var_1_object;
			var_307_object = var_0_object;
			func_3314();
			object var_310_object; object var_311_object;
			var_310_object = var_1_object;
			var_311_object = var_0_object;
			func_3401();
			func_451(var_292_object, "Neutral");
			var_0_object->SetMessage(521534); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522289, 23470, 23444); //@t
			var_0_object->AddReply(522291, 23449, 23446); //@t
		} else {
					func_451(var_292_object, "Neutral");
					var_0_object->SetMessage(521594); //@t
					var_0_object->ClearReplies(); //@t
					bool var_339_bool;
					func_3505(var_1_object);
					if(var_339_bool != 0)
						var_0_object->AddReply(522347, 23514, 23510); //@t
					bool var_348_bool;
					func_3517(var_1_object);
					if(var_348_bool != 0)
						var_0_object->AddReply(521595, 23511, 22758); //@t
					var_0_object->AddReply(522350, -1, 23513); //@t
		}
	}
	for(;;) {
		bool var_329_bool;
		func_3296(var_329_bool);
		if(var_329_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3168(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_450;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_450:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x15b";


void func_2906(bool var_78_bool)
{
	var_78_bool = true;
}


void func_2908(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_215_object, object var_216_object)
{
	var_0_object = var_216_object;
	var_1_object = var_215_object;
	var_3_string = false;
	if(1 != 0) {
		func_152(var_216_object, "Neutral");
		var_0_object->SetMessage(530875); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(530876, 32199, 32195); //@t
		var_0_object->AddReply(530877, 32197, 32196); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_122:
	bool var_241_bool;
	func_3296(var_241_bool);
	if(var_241_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3168(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_151;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_151:
		return 0;

	}
	
}


void func_2655(object var_0_object)
{
	bool var_26_bool;
	func_2940(var_26_bool);
	if(!var_26_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2783();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2837();
	}
}
EMIT "Return(); Pop(0)";


void func_3168(string var_33_string)
{
	float var_36_float; float var_37_float;
	@lshGetAnimTimes(var_33_string, var_36_float, var_37_float);
	@lshPlayAnimation(var_36_float, var_37_float, false);
}


// @pe
void func_3423(bool var_298_bool)
{
	int var_300_int;
	func_3219(var_300_int, "oob9Block1");
	if(var_300_int == 0) {
		var_298_bool = true;
		return 0;
	}
	var_298_bool = false;
}


void func_2913(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_3175(string var_226_string, bool var_227_bool)
{
	float var_232_float; float var_233_float;
	@lshGetAnimTimes(var_226_string, var_232_float, var_233_float);
	@lshPlayAnimation(var_232_float, var_233_float, var_227_bool);
}


void func_2921(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


// @pe
void func_3435(bool var_502_bool)
{
	int var_504_int;
	func_3219(var_504_int, "oob12Block1");
	if(var_504_int == 0) {
		var_502_bool = true;
		return 0;
	}
	var_502_bool = false;
}


void func_3181(bool var_94_bool, string var_95_string)
{
	bool var_97_bool;
	bool var_98_bool;
	func_3296(var_98_bool);
	if(var_98_bool != 0) {
		@lshHasSpeech(var_97_bool, var_95_string);
		if(var_97_bool != 0) {
			@lshPlaySpeech(var_95_string);
			var_94_bool = true;
		}
	}
	var_94_bool = false;
}


void func_2675(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_2931(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


void func_2931(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_2921(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


// @pe
void func_3447(bool var_567_bool)
{
	int var_569_int;
	func_3219(var_569_int, "oob12Block2");
	if(var_569_int == 0) {
		var_567_bool = true;
		return 0;
	}
	var_567_bool = false;
}


void func_3196(void)
{
	bool var_29_bool;
	func_3296(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_2940(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


void func_2945(bool var_155_bool, object var_156_object, float var_157_float)
{
	cvector var_168_cvector; bool var_175_bool;
	var_156_object->GetPosition(var_168_cvector);
	float var_167_float;
	var_156_object->GetEyesHeight(var_167_float);
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (var_176_float + var_167_float);
	cvector var_169_cvector;
	@GetPosition(var_169_cvector);
	@GetEyesHeight(var_167_float);
	var_177_float = GetByIndex(var_169_cvector, 1);
	SetByIndex(var_169_cvector, 1) = (var_177_float + var_167_float);
	cvector var_170_cvector = var_168_cvector - var_169_cvector;
	var_178_float = GetByIndex(var_170_cvector, 1);
	SetByIndex(var_170_cvector, 1) = (float)0;
	var_180_float = sqrt(var_170_cvector | var_170_cvector);
	var_170_cvector /= var_180_float;
	cvector var_171_cvector = -var_170_cvector;
	cvector var_182_cvector;
	func_3209(var_182_cvector, (var_171_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_172_cvector = ((var_170_cvector * var_157_float) + (var_182_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_174_bool;
	@IsOverrideActive(var_174_bool);
	if(var_174_bool != 0)
		var_155_bool = false;
	@StopWorld();
	@CameraTransit((var_169_cvector + var_172_cvector), var_171_cvector);
	var_195_float = GetByIndex(var_172_cvector, 0);
	var_196_float = GetByIndex(var_172_cvector, 2);
	@Rotate(var_195_float, var_196_float);
	bool var_197_bool;
	func_3296(var_197_bool);
	if(var_197_bool != 0) {
	} else {
		@HasAnimationTrack(var_175_bool, "head");
		if(var_175_bool == 0) goto Label_3007;
		@LookAsyncCamera("head");
	}
Label_3007:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_155_bool = true;
	
}


void func_2690(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_3203(object var_62_object)
{
	object var_64_object;
	@self(var_64_object);
	var_64_object = var_62_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3459(bool var_508_bool, object var_509_object)
{
	object var_511_object;
	var_509_object = var_511_object;
	func_3553(var_511_object);
	bool var_510_bool;
	if(var_510_bool != 0) {
		var_508_bool = true;
		return 0;
	}
	var_508_bool = false;
}


void func_2695(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_2913(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_3209(cvector var_182_cvector, cvector var_183_cvector)
{
	float var_186_float = sqrt(var_183_cvector | var_183_cvector);
	if(var_186_float < 0.000001)
		var_182_cvector = [0.0, 0.0, 0.0];
	var_182_cvector = var_183_cvector / var_186_float;
}


// @pe
void func_1418(object var_2_object, string var_528_string)
{
	bool var_529_bool;
	func_3296(var_529_bool);
	if(!var_529_bool) //@nz
		return 0;
	if(var_528_string == var_2_object)
		return 0;
	string var_532_string; bool var_533_bool;
	var_528_string = var_532_string;
	if(var_528_string == "")
		var_533_bool = false;
	else
		var_533_bool = true;
	func_3175(var_532_string, var_533_bool);
	var_2_object = var_528_string;
	
}


// @pe
void func_3469(bool var_406_bool)
{
	int var_408_int;
	func_3219(var_408_int, "b10q02");
	if(var_408_int == 3)
		var_406_bool = true;
	var_406_bool = false;
}


void func_2448(object var_0_object, int var_581_int, object var_582_object)
{
	var_0_object = var_582_object;
	bool var_592_bool; object var_593_object;
	object var_594_object;
	func_3203(var_594_object);
	var_594_object = var_593_object;
	func_3030(var_592_bool, var_593_object);
	bool var_595_bool; object var_596_object;
	var_582_object = var_596_object;
	func_2945(var_595_bool, var_596_object, 70.0);
	if(!var_595_bool) { //@nz
		var_581_int = -2;
		return 8;
	}
	object var_588_object;
	@CreateDialog(var_588_object);
	int var_599_int;
	func_3290(var_599_int);
	var_588_object->SetNPCName(var_599_int);
	int var_600_int;
	func_3288(var_600_int);
	var_588_object->SetNPCDescription(var_600_int);
	string var_601_string;
	func_3292(var_601_string);
	var_588_object->SetPhoto(var_601_string);
	string var_602_string;
	func_3294(var_602_string);
	var_588_object->SetPhoto2(var_602_string);
	int var_603_int;
	func_3614(var_603_int);
	var_588_object->SetPlayerName(var_603_int);
	bool var_589_bool;
	@IsOverrideActive(var_589_bool);
	if(var_589_bool != 0) {
		var_581_int = -2;
		return 8;
	}
	@DoDialog(var_588_object);
	object var_605_object; object var_606_object;
	var_582_object = var_605_object;
	var_588_object = var_606_object;
	TaskCall(10);
	func_2529(var_607_object, var_608_object, var_609_string, var_610_bool, var_605_object, var_606_object);
	TaskReturn();
	bool var_591_bool;
	var_588_object->IsDialogEnd(var_591_bool);
	
	for(;;) {
		var_635_bool = !var_591_bool; //@nz
		if(var_635_bool == 0) goto Label_2518;
		@sync();
		var_588_object->IsDialogEnd(var_591_bool);
	}
	
Label_2518:
	object var_636_object;
	var_582_object = var_636_object;
	func_3013();
	@StopDialog(var_588_object);
	var_588_object->GetReturnValue(-1);
	int var_590_int = var_581_int;
}
EMIT "Stack[-4] = 0";


void func_3219(int var_300_int, string var_301_string)
{
	int var_303_int;
	@GetVariable(var_301_string, var_303_int);
	var_303_int = var_300_int;
}


// @pe
void func_152(object var_2_object, string var_222_string)
{
	bool var_223_bool;
	func_3296(var_223_bool);
	if(!var_223_bool) //@nz
		return 0;
	if(var_222_string == var_2_object)
		return 0;
	string var_226_string; bool var_227_bool;
	var_222_string = var_226_string;
	if(var_222_string == "")
		var_227_bool = false;
	else
		var_227_bool = true;
	func_3175(var_226_string, var_227_bool);
	var_2_object = var_222_string;
	
}


void func_3224(bool var_40_bool, string var_41_string, string var_42_string)
{
	object var_44_object;
	@FindActor(var_44_object, var_41_string);
	if(var_44_object == null)
		var_40_bool = false;
	@Trigger(var_44_object, var_42_string);
	var_40_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3481(bool var_412_bool)
{
	int var_414_int;
	func_3219(var_414_int, "b10q02Cutscene");
	if(var_414_int != 0) {
		var_412_bool = true;
		return 0;
	}
	var_412_bool = false;
}


void func_2717(void)
{
	float var_40_float;
	@rand(var_40_float, 8, 16);
	@SetTimer(10, var_40_float);
}


void func_3236(float var_69_float)
{
	float var_71_float;
	@GetGameTime(var_71_float);
	var_71_float = var_69_float;
}


// @pe
void func_3493(bool var_419_bool)
{
	int var_421_int;
	func_3219(var_421_int, "oob10Block1");
	if(var_421_int == 0) {
		var_419_bool = true;
		return 0;
	}
	var_419_bool = false;
}


void func_2726(void)
{
	@KillTimer(10);
}


void func_3241(int var_115_int)
{
	float var_117_float;
	@GetGameTime(var_117_float);
	var_115_int = 1 + (var_117_float / 24);
}


void func_1194(object var_0_object, int var_470_int, object var_471_object)
{
	var_0_object = var_471_object;
	bool var_481_bool; object var_482_object;
	object var_483_object;
	func_3203(var_483_object);
	var_483_object = var_482_object;
	func_3030(var_481_bool, var_482_object);
	bool var_484_bool; object var_485_object;
	var_471_object = var_485_object;
	func_2945(var_484_bool, var_485_object, 70.0);
	if(!var_484_bool) { //@nz
		var_470_int = -2;
		return 8;
	}
	object var_477_object;
	@CreateDialog(var_477_object);
	int var_488_int;
	func_3290(var_488_int);
	var_477_object->SetNPCName(var_488_int);
	int var_489_int;
	func_3288(var_489_int);
	var_477_object->SetNPCDescription(var_489_int);
	string var_490_string;
	func_3292(var_490_string);
	var_477_object->SetPhoto(var_490_string);
	string var_491_string;
	func_3294(var_491_string);
	var_477_object->SetPhoto2(var_491_string);
	int var_492_int;
	func_3614(var_492_int);
	var_477_object->SetPlayerName(var_492_int);
	bool var_478_bool;
	@IsOverrideActive(var_478_bool);
	if(var_478_bool != 0) {
		var_470_int = -2;
		return 8;
	}
	@DoDialog(var_477_object);
	object var_494_object; object var_495_object;
	var_471_object = var_494_object;
	var_477_object = var_495_object;
	TaskCall(6);
	func_1275(var_496_object, var_497_object, var_498_string, var_499_bool, var_494_object, var_495_object);
	TaskReturn();
	bool var_480_bool;
	var_477_object->IsDialogEnd(var_480_bool);
	
	for(;;) {
		var_579_bool = !var_480_bool; //@nz
		if(var_579_bool == 0) goto Label_1264;
		@sync();
		var_477_object->IsDialogEnd(var_480_bool);
	}
	
Label_1264:
	object var_580_object;
	var_471_object = var_580_object;
	func_3013();
	@StopDialog(var_477_object);
	var_477_object->GetReturnValue(-1);
	int var_479_int = var_470_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1968(object var_2_object, string var_395_string)
{
	bool var_396_bool;
	func_3296(var_396_bool);
	if(!var_396_bool) //@nz
		return 0;
	if(var_395_string == var_2_object)
		return 0;
	string var_399_string; bool var_400_bool;
	var_395_string = var_399_string;
	if(var_395_string == "")
		var_400_bool = false;
	else
		var_400_bool = true;
	func_3175(var_399_string, var_400_bool);
	var_2_object = var_395_string;
	
}


// @pe
void func_3505(bool var_339_bool)
{
	int var_341_int;
	func_3219(var_341_int, "oob9Block2");
	if(var_341_int == 0) {
		var_339_bool = true;
		return 0;
	}
	var_339_bool = false;
}


void func_3250(int var_512_int)
{
	float var_514_float;
	@GetGameTime(var_514_float);
	int var_515_int;
	var_514_float = var_515_int;
	var_512_int = var_515_int % 24;
}


// @pe
void func_3258(bool var_264_bool, int var_265_int)
{
	int var_266_int;
	func_3241(var_266_int);
	var_264_bool = var_266_int == var_265_int;
}


// @pe
void func_3517(bool var_348_bool)
{
	int var_350_int;
	func_3219(var_350_int, "oob9Block3");
	if(var_350_int == 0) {
		var_348_bool = true;
		return 0;
	}
	var_348_bool = false;
}


void func_3264(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


// @pe
void func_451(object var_2_object, string var_314_string)
{
	bool var_315_bool;
	func_3296(var_315_bool);
	if(!var_315_bool) //@nz
		return 0;
	if(var_314_string == var_2_object)
		return 0;
	string var_318_string; bool var_319_bool;
	var_314_string = var_318_string;
	if(var_314_string == "")
		var_319_bool = false;
	else
		var_319_bool = true;
	func_3175(var_318_string, var_319_bool);
	var_2_object = var_314_string;
	
}


void func_3013(void)
{
	bool var_257_bool;
	@CameraSwitchToNormal();
	bool var_258_bool;
	func_3296(var_258_bool);
	if(var_258_bool != 0) {
	} else {
		@HasAnimationTrack(var_257_bool, "head");
		if(var_257_bool == 0) goto Label_3029;
		@UnlookAsync("head");
	}
Label_3029:
	
}


void func_3271(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_3264(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


// @pe
void func_3529(bool var_437_bool)
{
	int var_439_int;
	func_3219(var_439_int, "b10q04KapellaGotoBlock");
	if(var_439_int != 0) {
		var_437_bool = true;
		return 0;
	}
	var_437_bool = false;
}


// @pe
void func_3541(bool var_443_bool)
{
	int var_445_int;
	func_3219(var_445_int, "oob10Block2");
	if(var_445_int == 0) {
		var_443_bool = true;
		return 0;
	}
	var_443_bool = false;
}


void func_3030(bool var_60_bool, object var_61_object)
{
	int var_67_int; int var_68_int;
	@GetVariable("voice_common", var_67_int);
	if(var_67_int != 0) {
		bool var_71_bool; object var_72_object;
		var_61_object = var_72_object;
		func_3088(var_71_bool, var_72_object);
		if(!var_71_bool) { //@nz
			bool var_102_bool; object var_103_object;
			var_61_object = var_103_object;
			func_3125(var_102_bool, var_103_object);
			if(!var_102_bool) { //@nz
				var_60_bool = false;
				return 4;
			}
		}
		@irand(var_68_int, 2);
		if(var_68_int != 0)
			@SetVariable("voice_common", ((var_67_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_147_bool; object var_148_object;
		var_61_object = var_148_object;
		func_3125(var_147_bool, var_148_object);
		if(!var_147_bool) { //@nz
			bool var_150_bool; object var_151_object;
			var_61_object = var_151_object;
			func_3088(var_150_bool, var_151_object);
			if(!var_150_bool) { //@nz
				var_60_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3086;
	
Label_3086:
	var_60_bool = true;
	
}


void func_3288(int var_203_int)
{
	var_203_int = 515532;
}


void func_3290(int var_202_int)
{
	var_202_int = 514840;
}


void func_3292(string var_204_string)
{
	var_204_string = "ui/NPC_Block.png";
}


void func_3294(string var_205_string)
{
	var_205_string = "ui/NPC_Block_b.png";
}


void func_3296(bool var_98_bool)
{
	var_98_bool = true;
}


// @pe
void func_2529(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_605_object, object var_606_object)
{
	var_0_object = var_606_object;
	var_1_object = var_605_object;
	var_3_string = false;
	if(1 != 0) {
		func_2587(var_606_object, "Neutral");
		var_0_object->SetMessage(540554); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540555, -1, 42564); //@t
		var_0_object->AddReply(540794, -1, 42843); //@t
		goto Label_2557;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9e5";
	}
Label_2557:
	bool var_627_bool;
	func_3296(var_627_bool);
	if(var_627_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3168(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2586;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2586:
		return 0;

	}
	
}


// @pe
void func_3298(object var_51_object)
{
	object var_55_object;
	func_3564(var_55_object);
	object var_52_object;
	var_55_object = var_52_object;
	func_3581(var_52_object, "pt_map_starshina", (float)2);
	object var_75_object;
	func_3564(var_75_object);
	var_51_object->ShowMap(var_75_object);
}


void func_1762(object var_0_object, int var_364_int, object var_365_object)
{
	var_0_object = var_365_object;
	bool var_375_bool; object var_376_object;
	object var_377_object;
	func_3203(var_377_object);
	var_377_object = var_376_object;
	func_3030(var_375_bool, var_376_object);
	bool var_378_bool; object var_379_object;
	var_365_object = var_379_object;
	func_2945(var_378_bool, var_379_object, 70.0);
	if(!var_378_bool) { //@nz
		var_364_int = -2;
		return 8;
	}
	object var_371_object;
	@CreateDialog(var_371_object);
	int var_382_int;
	func_3290(var_382_int);
	var_371_object->SetNPCName(var_382_int);
	int var_383_int;
	func_3288(var_383_int);
	var_371_object->SetNPCDescription(var_383_int);
	string var_384_string;
	func_3292(var_384_string);
	var_371_object->SetPhoto(var_384_string);
	string var_385_string;
	func_3294(var_385_string);
	var_371_object->SetPhoto2(var_385_string);
	int var_386_int;
	func_3614(var_386_int);
	var_371_object->SetPlayerName(var_386_int);
	bool var_372_bool;
	@IsOverrideActive(var_372_bool);
	if(var_372_bool != 0) {
		var_364_int = -2;
		return 8;
	}
	@DoDialog(var_371_object);
	object var_388_object; object var_389_object;
	var_365_object = var_388_object;
	var_371_object = var_389_object;
	TaskCall(8);
	func_1843(var_390_object, var_391_object, var_392_string, var_393_bool, var_388_object, var_389_object);
	TaskReturn();
	bool var_374_bool;
	var_371_object->IsDialogEnd(var_374_bool);
	
	for(;;) {
		var_466_bool = !var_374_bool; //@nz
		if(var_466_bool == 0) goto Label_1832;
		@sync();
		var_371_object->IsDialogEnd(var_374_bool);
	}
	
Label_1832:
	object var_467_object;
	var_365_object = var_467_object;
	func_3013();
	@StopDialog(var_371_object);
	var_371_object->GetReturnValue(-1);
	int var_373_int = var_364_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3553(bool var_510_bool)
{
	int var_512_int;
	func_3250(var_512_int);
	if(var_512_int >= 19)
		var_510_bool = true;
	var_510_bool = false;
}


void func_3564(object var_58_object)
{
	object var_61_object; object var_62_object;
	@GetMainOutdoorScene(var_61_object);
	if(var_61_object == null) {
		@Trace("Can't find main outdoor scene");
		var_62_object = null;
		var_62_object = var_58_object;
	}
	var_61_object->GetMap(var_62_object);
	var_62_object = var_58_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3314(void)
{
	@SetVariable("oob9Block1", 1);
}


// @pe
void func_3320(void)
{
	@SetVariable("oob12Block1", 1);
}


// @pe
void func_1275(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_494_object, object var_495_object)
{
	var_0_object = var_495_object;
	var_1_object = var_494_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_501_bool = false;
		bool var_502_bool;
		func_3435(var_1_object);
		if(var_502_bool != 0) {
			bool var_508_bool;
			func_3459(var_508_bool, var_1_object);
			if(!var_508_bool) //@nz
				var_501_bool = true;
		}
		if(var_501_bool != 0) {
			object var_520_object; object var_521_object;
			var_520_object = var_1_object;
			var_521_object = var_0_object;
			func_3320();
			object var_524_object; object var_525_object;
			var_524_object = var_1_object;
			var_525_object = var_0_object;
			func_3326();
			func_1418(var_495_object, "Neutral");
			var_0_object->SetMessage(522123); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522124, 24011, 23291); //@t
			var_0_object->AddReply(540112, -1, 42079); //@t
		} else {
					bool var_551_bool;
					func_3459(var_551_bool, var_1_object);
					if(var_551_bool == 0) goto Label_1356;
					object var_553_object; object var_554_object;
					var_553_object = var_1_object;
					var_554_object = var_0_object;
					func_3326();
					func_1418(var_495_object, "Neutral");
					var_0_object->SetMessage(522127); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522128, -1, 23295); //@t
					var_0_object->AddReply(522844, -1, 24028); //@t
		}
	}
Label_1388:
	for(;;) {
		bool var_543_bool;
		func_3296(var_543_bool);
		if(var_543_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3168(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1417;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1417:
			return 0;

		}

	}
	
Label_1356:
	object var_563_object; object var_564_object;
	var_563_object = var_1_object;
	var_564_object = var_0_object;
	func_3326();
	func_1418(var_495_object, "Neutral");
	var_0_object->SetMessage(522125); //@t
	var_0_object->ClearReplies(); //@t
	bool var_567_bool;
	func_3447(var_1_object);
	if(var_567_bool != 0)
		var_0_object->AddReply(522848, 24033, 24032); //@t
	var_0_object->AddReply(522126, -1, 23293); //@t
	goto Label_1388;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4ff";


void func_3581(object var_74_object, string var_75_string, float var_76_float)
{
	object var_84_object;
	@GetMainOutdoorScene(var_84_object);
	if(var_84_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_82_cvector;
	cvector var_83_cvector;
	bool var_85_bool;
	var_84_object->GetLocator(var_75_string, var_85_bool, var_82_cvector, var_83_cvector);
	if(!var_85_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_75_string) + " doesnt exist");
	var_84_object->GetMap(var_74_object);
	if(var_74_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_95_float = GetByIndex(var_82_cvector, 0);
	var_96_float = GetByIndex(var_82_cvector, 2);
	var_74_object->SetMapParams(var_95_float, var_96_float, var_76_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3326(void)
{
	@SetVariable("b12q01BlockVisit", 1);
}


