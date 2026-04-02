// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_3261();
			if(var_32_cvector == 36939) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3575();
			}
			if(var_31_bool == 36938) {
				func_162(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535263); //@t
				var_0_object->ClearReplies(); //@t
				bool var_56_bool;
				func_3713(var_1_object);
				if(var_56_bool != 0)
					var_0_object->AddReply(535264, 37039, 36939); //@t
				var_0_object->AddReply(535339, -1, 37021); //@t
				var_0_object->AddReply(535354, -1, 37038); //@t
				return 0;
			}
			if(var_31_bool == 37039) {
				func_162(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535356, 37042, 37040); //@t
				var_0_object->AddReply(535357, 37043, 37041); //@t
				return 0;
			}
			if(var_31_bool == 37043) {
				func_162(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535360, -1, 37044); //@t
				var_0_object->AddReply(535361, 37042, 37045); //@t
				return 0;
			}
			if(var_31_bool == 37042) {
				func_162(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535362, 37049, 37047); //@t
				var_0_object->AddReply(535363, -1, 37048); //@t
				return 0;
			}
			if(var_31_bool == 37049) {
				func_162(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535365, -1, 37050); //@t
				var_0_object->AddReply(535366, -1, 37051); //@t
				return 0;
			}
			var_3_string = true;
			bool var_113_bool;
			func_3364(var_113_bool);
			if(var_113_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_3261();
			if(var_31_bool == 19193) {
				func_475(var_32_cvector, "Neutral");
				var_0_object->SetMessage(518060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518061, 29781, 19194); //@t
				var_0_object->AddReply(528400, 29777, 29776); //@t
				return 0;
			}
			if(var_31_bool == 29777) {
				func_475(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528401); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528402, 29779, 29778); //@t
				return 0;
			}
			if(var_31_bool == 29779) {
				func_475(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528403); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528404, 29781, 29780); //@t
				return 0;
			}
			if(var_31_bool == 29781) {
				func_475(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528405); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528406, 29784, 29782); //@t
				var_0_object->AddReply(528407, 29786, 29783); //@t
				return 0;
			}
			if(var_31_bool == 29786) {
				func_475(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528409); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528410, 29784, 29787); //@t
				var_0_object->AddReply(528411, 29784, 29788); //@t
				return 0;
			}
			if(var_31_bool == 29784) {
				func_475(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528408); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528412, -1, 29791); //@t
				var_0_object->AddReply(528413, -1, 29792); //@t
				return 0;
			}
			var_3_string = true;
			bool var_100_bool;
			func_3364(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1f2";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_3261();
			if(var_32_cvector == 22198) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3366();
				object var_86_object = var_1_object;
				func_3394(var_0_object);
			}
			if(var_32_cvector == 22409) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_3410();
			}
			if(var_32_cvector == 22412) {
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_3431();
			}
			if(var_31_bool == 22197) {
				bool var_162_bool;
				func_3725(var_1_object);
				if(var_162_bool != 0) {
					func_818(var_32_cvector, "Neutral");
					var_0_object->SetMessage(520984); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528518, 29911, 29910); //@t
					return 0;
				}
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(520986); //@t
				var_0_object->ClearReplies(); //@t
				bool var_188_bool;
				func_3581(var_1_object);
				if(var_188_bool != 0)
					var_0_object->AddReply(521209, 29920, 22405); //@t
				bool var_197_bool;
				func_3593(var_1_object);
				if(var_197_bool != 0)
					var_0_object->AddReply(521216, 22411, 22410); //@t
				var_0_object->AddReply(520987, -1, 22200); //@t
				return 0;
			}
			if(var_31_bool == 22411) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521218, -1, 22412); //@t
				return 0;
			}
			if(var_31_bool == 29920) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528528); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528529, 29922, 29921); //@t
				return 0;
			}
			if(var_31_bool == 29922) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528530); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528548, 29942, 29940); //@t
				var_0_object->AddReply(528531, 29924, 29923); //@t
				return 0;
			}
			if(var_31_bool == 29924) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528532); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528533, 22406, 29925); //@t
				return 0;
			}
			if(var_31_bool == 22406) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528549, 29942, 29941); //@t
				return 0;
			}
			if(var_31_bool == 29942) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528550); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521211, 22408, 22407); //@t
				var_0_object->AddReply(528524, 22408, 29916); //@t
				return 0;
			}
			if(var_31_bool == 22408) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521213, -1, 22409); //@t
				return 0;
			}
			if(var_31_bool == 29911) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528520, 29913, 29912); //@t
				return 0;
			}
			if(var_31_bool == 29913) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528521); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528522, 29915, 29914); //@t
				return 0;
			}
			if(var_31_bool == 29915) {
				func_818(var_32_cvector, "Neutral");
				var_0_object->SetMessage(528523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520985, -1, 22198); //@t
				return 0;
			}
			var_3_string = true;
			bool var_285_bool;
			func_3364(var_285_bool);
			if(var_285_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x349";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_3261();
			if(var_32_cvector == 22564) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3441();
			}
			if(var_32_cvector == 32575) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_3565();
			}
			if(var_32_cvector == 22594) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_3455();
			}
			if(var_32_cvector == 22682) {
				object var_107_object; object var_108_object;
				var_107_object = var_1_object;
				var_108_object = var_0_object;
				func_3474();
			}
			if(var_32_cvector == 22683) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_3487();
			}
			if(var_31_bool == 22560) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521382); //@t
				var_0_object->ClearReplies(); //@t
				bool var_152_bool;
				func_3605(var_1_object);
				if(var_152_bool != 0)
					var_0_object->AddReply(521383, 25136, 22561); //@t
				bool var_163_bool;
				func_3617(var_1_object);
				if(var_163_bool != 0)
					var_0_object->AddReply(521412, 22591, 22590); //@t
				bool var_172_bool;
				func_3629(var_1_object);
				if(var_172_bool != 0)
					var_0_object->AddReply(521519, 25119, 22680); //@t
				var_0_object->AddReply(521384, -1, 22562); //@t
				return 0;
			}
			if(var_31_bool == 25119) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523846); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523851, 25125, 25124); //@t
				var_0_object->AddReply(523847, 25121, 25120); //@t
				return 0;
			}
			if(var_31_bool == 25121) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523848); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523855, 25123, 25128); //@t
				return 0;
			}
			if(var_31_bool == 25125) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523852); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523853, 25127, 25126); //@t
				return 0;
			}
			if(var_31_bool == 25127) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523854); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523849, 25123, 25122); //@t
				return 0;
			}
			if(var_31_bool == 25123) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523856, 22681, 25130); //@t
				return 0;
			}
			if(var_31_bool == 22681) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521520); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521521, 25132, 22682); //@t
				var_0_object->AddReply(521522, 25134, 22683); //@t
				var_0_object->AddReply(523857, -1, 25131); //@t
				return 0;
			}
			if(var_31_bool == 25134) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523861, -1, 25135); //@t
				return 0;
			}
			if(var_31_bool == 25132) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523858); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523859, -1, 25133); //@t
				return 0;
			}
			if(var_31_bool == 22591) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523877, 25154, 25153); //@t
				return 0;
			}
			if(var_31_bool == 25154) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523878); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523879, 25162, 25155); //@t
				var_0_object->AddReply(523880, 25162, 25156); //@t
				var_0_object->AddReply(523881, 25158, 25157); //@t
				return 0;
			}
			if(var_31_bool == 25158) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523882); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523884, 25162, 25160); //@t
				var_0_object->AddReply(523883, 25163, 25159); //@t
				var_0_object->AddReply(523885, 25162, 25161); //@t
				return 0;
			}
			if(var_31_bool == 25163) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523887); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521414, 22593, 22592); //@t
				return 0;
			}
			if(var_31_bool == 22593) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521416, -1, 22594); //@t
				return 0;
			}
			if(var_31_bool == 25162) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523886); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531259, -1, 32575); //@t
				return 0;
			}
			if(var_31_bool == 25136) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523862); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523863, 25138, 25137); //@t
				return 0;
			}
			if(var_31_bool == 25138) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523864); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523865, 22563, 25139); //@t
				var_0_object->AddReply(523876, 22563, 25151); //@t
				return 0;
			}
			if(var_31_bool == 22563) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521385); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523866, 25141, 25140); //@t
				return 0;
			}
			if(var_31_bool == 25141) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523868, 25143, 25142); //@t
				return 0;
			}
			if(var_31_bool == 25143) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523870, 25148, 25144); //@t
				var_0_object->AddReply(523871, 25146, 25145); //@t
				return 0;
			}
			if(var_31_bool == 25146) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523873, 25148, 25147); //@t
				return 0;
			}
			if(var_31_bool == 25148) {
				func_1300(var_32_cvector, "Neutral");
				var_0_object->SetMessage(523874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521386, -1, 22564); //@t
				var_0_object->AddReply(523875, -1, 25150); //@t
				return 0;
			}
			var_3_string = true;
			bool var_361_bool;
			func_3364(var_361_bool);
			if(var_361_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x52b";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_3261();
			if(var_32_cvector == 23126) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3500();
			}
			if(var_32_cvector == 31745) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_3506();
			}
			if(var_32_cvector == 32812) {
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_3512();
				object var_106_object = var_1_object;
				func_3543(var_0_object);
			}
			if(var_32_cvector == 31750) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_3512();
				object var_136_object = var_1_object;
				func_3543(var_0_object);
			}
			if(var_31_bool == 23125) {
				object var_140_object; object var_141_object;
				var_140_object = var_1_object;
				var_141_object = var_0_object;
				func_3559();
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(521951); //@t
				var_0_object->ClearReplies(); //@t
				bool var_157_bool = true;
				bool var_158_bool = false;
				bool var_159_bool;
				func_3641(var_1_object);
				if(var_159_bool != 0) {
					bool var_167_bool;
					func_3665(var_1_object);
					if(var_167_bool != 0)
						var_158_bool = true;
				}
				if(var_158_bool != 1) {
					bool var_173_bool = false;
					bool var_174_bool;
					func_3653(var_1_object);
					if(var_174_bool != 0) {
						bool var_180_bool;
						func_3665(var_1_object);
						if(var_180_bool != 0)
							var_173_bool = true;
					}
					if(var_173_bool != 1)
						var_157_bool = false;
				}
				if(var_157_bool != 0)
					var_0_object->AddReply(521952, 23688, 23126); //@t
				bool var_185_bool = false;
				bool var_186_bool;
				func_3677(var_1_object);
				if(!var_186_bool) { //@nz
					bool var_193_bool;
					func_3689(var_1_object);
					if(var_193_bool != 0)
						var_185_bool = true;
				}
				if(var_185_bool != 0)
					var_0_object->AddReply(530373, 31746, 31745); //@t
				bool var_202_bool = false;
				bool var_203_bool;
				func_3677(var_1_object);
				if(var_203_bool != 0) {
					bool var_205_bool;
					func_3701(var_1_object);
					if(var_205_bool != 0)
						var_202_bool = true;
				}
				if(var_202_bool != 0)
					var_0_object->AddReply(530376, 31749, 31748); //@t
				var_0_object->AddReply(521955, -1, 23129); //@t
				return 0;
			}
			if(var_31_bool == 31749) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(530377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531437, 32785, 32783); //@t
				var_0_object->AddReply(531438, -1, 32784); //@t
				return 0;
			}
			if(var_31_bool == 32785) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531439); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531460, 32811, 32810); //@t
				var_0_object->AddReply(530378, -1, 31750); //@t
				return 0;
			}
			if(var_31_bool == 32811) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531461); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531462, -1, 32812); //@t
				return 0;
			}
			if(var_31_bool == 31746) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(530374); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530375, -1, 31747); //@t
				return 0;
			}
			if(var_31_bool == 23688) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522513, 23690, 23689); //@t
				var_0_object->AddReply(522525, 23702, 23701); //@t
				return 0;
			}
			if(var_31_bool == 23702) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522526); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522527, 23692, 23703); //@t
				return 0;
			}
			if(var_31_bool == 23690) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522515, 23692, 23691); //@t
				return 0;
			}
			if(var_31_bool == 23692) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522517, 23694, 23693); //@t
				var_0_object->AddReply(522528, 23706, 23705); //@t
				return 0;
			}
			if(var_31_bool == 23706) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522529); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522530, 23709, 23707); //@t
				return 0;
			}
			if(var_31_bool == 23709) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522531); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522532, 23694, 23710); //@t
				return 0;
			}
			if(var_31_bool == 23694) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522519, 23696, 23695); //@t
				return 0;
			}
			if(var_31_bool == 23696) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522520); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522521, -1, 23697); //@t
				var_0_object->AddReply(522522, 23699, 23698); //@t
				return 0;
			}
			if(var_31_bool == 23699) {
				func_2072(var_32_cvector, "Neutral");
				var_0_object->SetMessage(522523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522524, -1, 23700); //@t
				return 0;
			}
			var_3_string = true;
			bool var_323_bool;
			func_3364(var_323_bool);
			if(var_323_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x82f";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_3261();
			if(var_31_int == 42560) {
				func_2652(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_56_bool;
			func_3364(var_56_bool);
			if(var_56_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa73";
	
	}

}


maintask task_13
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2720(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2791();
			bool var_35_bool = false;
			bool var_36_bool;
			func_3005(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2760(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_2740(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_3268(var_77_object);
					var_77_object = var_76_object;
					func_3153(var_75_bool, var_76_object);
				}
			} else {
				func_2755(var_31_int);
				func_2782();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2973();
		func_2791();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
		{
		@StopGroup0();
		func_2791();
		func_3233("Neutral");
		func_2782();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2782();
		else
			func_3233("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2973();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2996(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_3988(var_49_object);
			func_3233("Neutral");
			func_2791();
			func_2782();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_35_bool;
	func_3005(var_35_bool);
	if(!var_35_bool) goto Label_0; //@nz
}


void func_3841(void)
{
	object var_92_object;
	@CreateDiaryEntry(var_92_object, 288, 1, 521459);
	bool var_96_bool; object var_97_object;
	var_92_object = var_97_object;
	func_3893(var_96_bool, var_97_object, 284);
}
EMIT "Stack[-1] = 0";


void func_3332(string var_69_string, int var_70_int)
{
	string var_72_string = "idle";
	if(var_70_int != 0)
		var_72_string += var_70_int;
	var_72_string = var_69_string;
}


void func_3078(void)
{
	bool var_262_bool;
	@CameraSwitchToNormal();
	bool var_263_bool;
	func_3364(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		@HasAnimationTrack(var_262_bool, "head");
		if(var_262_bool == 0) goto Label_3094;
		@UnlookAsync("head");
	}
Label_3094:
	
}


// @pe
void func_3593(bool var_342_bool)
{
	int var_344_int;
	func_3284(var_344_int, "b7q02");
	if(var_344_int == 2)
		var_342_bool = true;
	var_342_bool = false;
}


void func_3339(int var_63_int)
{
	int var_66_int; bool var_67_bool;
	var_66_int = 0;
	
	for(;;) {
		string var_69_string; int var_70_int;
		var_66_int = var_70_int;
		func_3332(var_69_string, var_70_int);
		@HasAnimation(var_67_bool, "all", var_69_string);
		if(!var_67_bool) //@nz
			break;
		var_66_int += 1;
	}
	var_66_int = var_63_int;
}


void func_13(object var_0_object, int var_554_int, object var_555_object)
{
	var_0_object = var_555_object;
	bool var_565_bool; object var_566_object;
	object var_567_object;
	func_3268(var_567_object);
	var_567_object = var_566_object;
	func_3095(var_565_bool, var_566_object);
	bool var_568_bool; object var_569_object;
	var_555_object = var_569_object;
	func_3010(var_568_bool, var_569_object, 70.0);
	if(!var_568_bool) { //@nz
		var_554_int = -2;
		return 8;
	}
	object var_561_object;
	@CreateDialog(var_561_object);
	int var_572_int;
	func_3358(var_572_int);
	var_561_object->SetNPCName(var_572_int);
	int var_573_int;
	func_3356(var_573_int);
	var_561_object->SetNPCDescription(var_573_int);
	string var_574_string;
	func_3360(var_574_string);
	var_561_object->SetPhoto(var_574_string);
	string var_575_string;
	func_3362(var_575_string);
	var_561_object->SetPhoto2(var_575_string);
	int var_576_int;
	func_3971(var_576_int);
	var_561_object->SetPlayerName(var_576_int);
	bool var_562_bool;
	@IsOverrideActive(var_562_bool);
	if(var_562_bool != 0) {
		var_554_int = -2;
		return 8;
	}
	@DoDialog(var_561_object);
	object var_578_object; object var_579_object;
	var_555_object = var_578_object;
	var_561_object = var_579_object;
	TaskCall(2);
	func_94(var_580_object, var_581_object, var_582_string, var_583_bool, var_578_object, var_579_object);
	TaskReturn();
	bool var_564_bool;
	var_561_object->IsDialogEnd(var_564_bool);
	
	for(;;) {
		var_617_bool = !var_564_bool; //@nz
		if(var_617_bool == 0) goto Label_83;
		@sync();
		var_561_object->IsDialogEnd(var_564_bool);
	}
	
Label_83:
	object var_618_object;
	var_555_object = var_618_object;
	func_3078();
	@StopDialog(var_561_object);
	var_561_object->GetReturnValue(-1);
	int var_563_int = var_554_int;
}
EMIT "Stack[-4] = 0";


void func_3854(void)
{
	object var_114_object;
	@CreateDiaryEntry(var_114_object, 578, 2, 530658);
	bool var_118_bool; object var_119_object;
	var_114_object = var_119_object;
	func_3893(var_118_bool, var_119_object, 575);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1300(object var_2_object, string var_389_string)
{
	bool var_390_bool;
	func_3364(var_390_bool);
	if(!var_390_bool) //@nz
		return 0;
	if(var_389_string == var_2_object)
		return 0;
	string var_393_string; bool var_394_bool;
	var_389_string = var_393_string;
	if(var_389_string == "")
		var_394_bool = false;
	else
		var_394_bool = true;
	func_3240(var_393_string, var_394_bool);
	var_2_object = var_389_string;
	
}


// @pe
void func_3605(bool var_398_bool)
{
	int var_400_int;
	func_3284(var_400_int, "b8q01");
	if(var_400_int == 1)
		var_398_bool = true;
	var_398_bool = false;
}


void func_3095(bool var_65_bool, object var_66_object)
{
	int var_72_int; int var_73_int;
	@GetVariable("voice_common", var_72_int);
	if(var_72_int != 0) {
		bool var_76_bool; object var_77_object;
		var_66_object = var_77_object;
		func_3153(var_76_bool, var_77_object);
		if(!var_76_bool) { //@nz
			bool var_107_bool; object var_108_object;
			var_66_object = var_108_object;
			func_3190(var_107_bool, var_108_object);
			if(!var_107_bool) { //@nz
				var_65_bool = false;
				return 4;
			}
		}
		@irand(var_73_int, 2);
		if(var_73_int != 0)
			@SetVariable("voice_common", ((var_72_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_152_bool; object var_153_object;
		var_66_object = var_153_object;
		func_3190(var_152_bool, var_153_object);
		if(!var_152_bool) { //@nz
			bool var_155_bool; object var_156_object;
			var_66_object = var_156_object;
			func_3153(var_155_bool, var_156_object);
			if(!var_155_bool) { //@nz
				var_65_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_3151;
	
Label_3151:
	var_65_bool = true;
	
}


// @pe
void func_2072(object var_2_object, string var_475_string)
{
	bool var_476_bool;
	func_3364(var_476_bool);
	if(!var_476_bool) //@nz
		return 0;
	if(var_475_string == var_2_object)
		return 0;
	string var_479_string; bool var_480_bool;
	var_475_string = var_479_string;
	if(var_475_string == "")
		var_480_bool = false;
	else
		var_480_bool = true;
	func_3240(var_479_string, var_480_bool);
	var_2_object = var_475_string;
	
}


void func_3867(void)
{
	object var_130_object;
	@CreateDiaryEntry(var_130_object, 579, 2, 530659);
	bool var_134_bool; object var_135_object;
	var_130_object = var_135_object;
	func_3893(var_134_bool, var_135_object, 575);
}
EMIT "Stack[-1] = 0";


void func_3356(int var_208_int)
{
	var_208_int = 515545;
}


void func_3358(int var_207_int)
{
	var_207_int = 502870;
}


void func_3360(string var_209_string)
{
	var_209_string = "ui/NPC_Mat.png";
}


// @pe
void func_3617(bool var_407_bool)
{
	int var_409_int;
	func_3284(var_409_int, "b8q01");
	if(var_409_int == 3)
		var_407_bool = true;
	var_407_bool = false;
}


// @pe
void func_2594(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_643_object, object var_644_object)
{
	var_0_object = var_644_object;
	var_1_object = var_643_object;
	var_3_string = false;
	if(1 != 0) {
		func_2652(var_644_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_2622;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa26";
	}
Label_2622:
	bool var_665_bool;
	func_3364(var_665_bool);
	if(var_665_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3233(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2651;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2651:
		return 0;

	}
	
}


void func_3362(string var_210_string)
{
	var_210_string = "ui/NPC_Mat_b.png";
}


void func_3364(bool var_103_bool)
{
	var_103_bool = true;
}


void func_3366(void)
{
	@SetVariable("b7q01", 3);
	object var_43_object;
	func_3921(var_43_object);
	object var_40_object;
	var_43_object = var_40_object;
	float var_54_float;
	func_3312(var_54_float);
	var_40_object->AddMark("b7q01MatGotoPrison", "pt_map_uprava_prison", 1, 521024, var_54_float);
	func_3763();
	bool var_80_bool;
	func_3300(var_80_bool, "quest_b7_01", "init_prison");
}
EMIT "Stack[-1] = 0";


void func_3880(object var_83_object)
{
	object var_85_object;
	@GetDiaryRoot(var_85_object);
	if(!var_85_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_83_object = false;
	}
	var_85_object = var_83_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3629(bool var_416_bool)
{
	int var_418_int;
	func_3284(var_418_int, "b8q03");
	if(var_418_int == 2)
		var_416_bool = true;
	var_416_bool = false;
}


// @pe
void func_818(object var_2_object, string var_311_string)
{
	bool var_312_bool;
	func_3364(var_312_bool);
	if(!var_312_bool) //@nz
		return 0;
	if(var_311_string == var_2_object)
		return 0;
	string var_315_string; bool var_316_bool;
	var_311_string = var_315_string;
	if(var_311_string == "")
		var_316_bool = false;
	else
		var_316_bool = true;
	func_3240(var_315_string, var_316_bool);
	var_2_object = var_311_string;
	
}


void func_3893(bool var_74_bool, object var_75_object, int var_76_int)
{
	object var_83_object;
	func_3880(var_83_object);
	object var_80_object;
	var_83_object = var_80_object;
	object var_81_object;
	var_80_object->Find(var_76_int, var_81_object);
	if(!var_81_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_76_int);
		var_74_bool = false;
	}
	var_81_object->AddChild(var_75_object);
	@SendWorldWndMessage(7);
	int var_82_int;
	var_75_object->GetCategory(var_82_int);
	@SetDiarySection(var_82_int);
	var_74_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_3641(bool var_486_bool)
{
	int var_488_int;
	func_3284(var_488_int, "b10q01");
	if(var_488_int == 4)
		var_486_bool = true;
	var_486_bool = false;
}


void func_1857(object var_0_object, int var_440_int, object var_441_object)
{
	var_0_object = var_441_object;
	bool var_451_bool; object var_452_object;
	object var_453_object;
	func_3268(var_453_object);
	var_453_object = var_452_object;
	func_3095(var_451_bool, var_452_object);
	bool var_454_bool; object var_455_object;
	var_441_object = var_455_object;
	func_3010(var_454_bool, var_455_object, 70.0);
	if(!var_454_bool) { //@nz
		var_440_int = -2;
		return 8;
	}
	object var_447_object;
	@CreateDialog(var_447_object);
	int var_458_int;
	func_3358(var_458_int);
	var_447_object->SetNPCName(var_458_int);
	int var_459_int;
	func_3356(var_459_int);
	var_447_object->SetNPCDescription(var_459_int);
	string var_460_string;
	func_3360(var_460_string);
	var_447_object->SetPhoto(var_460_string);
	string var_461_string;
	func_3362(var_461_string);
	var_447_object->SetPhoto2(var_461_string);
	int var_462_int;
	func_3971(var_462_int);
	var_447_object->SetPlayerName(var_462_int);
	bool var_448_bool;
	@IsOverrideActive(var_448_bool);
	if(var_448_bool != 0) {
		var_440_int = -2;
		return 8;
	}
	@DoDialog(var_447_object);
	object var_464_object; object var_465_object;
	var_441_object = var_464_object;
	var_447_object = var_465_object;
	TaskCall(10);
	func_1938(var_466_object, var_467_object, var_468_string, var_469_bool, var_464_object, var_465_object);
	TaskReturn();
	bool var_450_bool;
	var_447_object->IsDialogEnd(var_450_bool);
	
	for(;;) {
		var_550_bool = !var_450_bool; //@nz
		if(var_550_bool == 0) goto Label_1927;
		@sync();
		var_447_object->IsDialogEnd(var_450_bool);
	}
	
Label_1927:
	object var_551_object;
	var_441_object = var_551_object;
	func_3078();
	@StopDialog(var_447_object);
	var_447_object->GetReturnValue(-1);
	int var_449_int = var_440_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3394(object var_87_object)
{
	object var_91_object;
	func_3921(var_91_object);
	object var_88_object;
	var_91_object = var_88_object;
	func_3938(var_88_object, "pt_map_uprava_prison", (float)2);
	object var_111_object;
	func_3921(var_111_object);
	var_87_object->ShowMap(var_111_object);
}


// @pe
void func_3653(bool var_499_bool)
{
	int var_501_int;
	func_3284(var_501_int, "b10q01");
	if(var_501_int == 1000)
		var_499_bool = true;
	var_499_bool = false;
}


void func_336(object var_0_object, int var_54_int, object var_55_object)
{
	var_0_object = var_55_object;
	bool var_65_bool; object var_66_object;
	object var_67_object;
	func_3268(var_67_object);
	var_67_object = var_66_object;
	func_3095(var_65_bool, var_66_object);
	bool var_160_bool; object var_161_object;
	var_55_object = var_161_object;
	func_3010(var_160_bool, var_161_object, 70.0);
	if(!var_160_bool) { //@nz
		var_54_int = -2;
		return 8;
	}
	object var_61_object;
	@CreateDialog(var_61_object);
	int var_207_int;
	func_3358(var_207_int);
	var_61_object->SetNPCName(var_207_int);
	int var_208_int;
	func_3356(var_208_int);
	var_61_object->SetNPCDescription(var_208_int);
	string var_209_string;
	func_3360(var_209_string);
	var_61_object->SetPhoto(var_209_string);
	string var_210_string;
	func_3362(var_210_string);
	var_61_object->SetPhoto2(var_210_string);
	int var_211_int;
	func_3971(var_211_int);
	var_61_object->SetPlayerName(var_211_int);
	bool var_62_bool;
	@IsOverrideActive(var_62_bool);
	if(var_62_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	@DoDialog(var_61_object);
	object var_220_object; object var_221_object;
	var_55_object = var_220_object;
	var_61_object = var_221_object;
	TaskCall(4);
	func_417(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object);
	TaskReturn();
	bool var_64_bool;
	var_61_object->IsDialogEnd(var_64_bool);
	
	for(;;) {
		var_259_bool = !var_64_bool; //@nz
		if(var_259_bool == 0) goto Label_406;
		@sync();
		var_61_object->IsDialogEnd(var_64_bool);
	}
	
Label_406:
	object var_260_object;
	var_55_object = var_260_object;
	func_3078();
	@StopDialog(var_61_object);
	var_61_object->GetReturnValue(-1);
	int var_63_int = var_54_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3665(bool var_492_bool)
{
	int var_494_int;
	func_3284(var_494_int, "oob10Mat1");
	if(var_494_int == 0) {
		var_492_bool = true;
		return 0;
	}
	var_492_bool = false;
}


void func_3153(bool var_76_bool, object var_77_object)
{
	string var_83_string; bool var_85_bool; int var_86_int; string var_87_string;
	var_83_string = "c";
	int var_84_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_77_object->HasProperty((var_83_string + (var_84_int + 1)), var_85_bool);
			if(!var_85_bool) { //@nz
			} else {
				var_84_int += 1;
			}
		}
		if(!var_84_int) { //@nz
			var_76_bool = false;
			return 10;
		}
		var_86_int = 0;
		if(var_84_int > 1)
			@irand(var_86_int, var_84_int);
		var_77_object->GetProperty((var_83_string + (var_86_int + 1)), var_87_string);
		bool var_99_bool; string var_100_string;
		var_87_string = var_100_string;
		func_3246(var_99_bool, var_100_string);
		var_99_bool = var_76_bool;
		return 10;

	}
}


void func_3921(object var_55_object)
{
	object var_58_object; object var_59_object;
	@GetMainOutdoorScene(var_58_object);
	if(var_58_object == null) {
		@Trace("Can't find main outdoor scene");
		var_59_object = null;
		var_59_object = var_55_object;
	}
	var_58_object->GetMap(var_59_object);
	var_59_object = var_55_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3410(void)
{
	@SetVariable("b7q02", 1);
	func_3776();
	func_3802();
	object var_134_object;
	func_3289(var_134_object, "quest_b7_02");
	bool var_142_bool;
	func_3300(var_142_bool, "quest_b7_02", "init_termitnik2");
}


void func_2902(void)
{
	bool var_57_bool; int var_58_int; int var_59_int; bool var_60_bool;
	@WaitForAnimEnd();
	bool var_61_bool;
	func_3005(var_61_bool);
	if(!var_61_bool) //@nz
		return 12;
	int var_63_int;
	func_3339(var_63_int);
	int var_55_int;
	var_63_int = var_55_int;
	int var_56_int = 0;
	
	for(;;) {
		bool var_76_bool = false;
		if(var_56_int < 5) {
			bool var_79_bool;
			func_3005(var_79_bool);
			if(var_79_bool != 0)
				var_76_bool = true;
		}
		if(var_76_bool != 0) {
			if(!var_55_int) { //@nz
				@Sleep(3, var_57_bool);
				if(!var_57_bool) { //@nz
				} else {
			} else {
			@irand(var_58_int, var_55_int);
			@irand(var_59_int, 5);
			if(var_59_int != 0)
				var_58_int = 0;
			string var_90_string; int var_91_int;
			var_58_int = var_91_int;
			func_3332(var_90_string, var_91_int);
			@PlayAnimation("all", var_90_string);
			@WaitForAnimEnd(var_60_bool);
			var_92_bool = !var_60_bool; //@nz
			if(var_92_bool == 0) goto Label_2957;
			goto Label_2968;
			}
				Label_2957:
					bool var_83_bool;
					func_2971(var_83_bool);
					var_84_bool = !var_83_bool; //@nz
					if(var_84_bool == 0) goto Label_2963;
			}
		}
	Label_2968:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2963:
		@ResetAAS();
		var_56_int += 1;
	}
	
}


// @pe
void func_2652(object var_2_object, string var_650_string)
{
	bool var_651_bool;
	func_3364(var_651_bool);
	if(!var_651_bool) //@nz
		return 0;
	if(var_650_string == var_2_object)
		return 0;
	string var_654_string; bool var_655_bool;
	var_650_string = var_654_string;
	if(var_650_string == "")
		var_655_bool = false;
	else
		var_655_bool = true;
	func_3240(var_654_string, var_655_bool);
	var_2_object = var_650_string;
	
}


// @pe
void func_3677(bool var_511_bool)
{
	int var_513_int;
	func_3284(var_513_int, "b10q04PlennikTalk");
	if(var_513_int != 0) {
		var_511_bool = true;
		return 0;
	}
	var_511_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_578_object, object var_579_object)
{
	var_0_object = var_579_object;
	var_3_string = false;
	if(1 != 0) {
		func_162(var_579_object, "Neutral");
		var_0_object->SetMessage(535263); //@t
		var_0_object->ClearReplies(); //@t
		bool var_594_bool;
		func_3713(var_578_object);
		if(var_594_bool != 0)
			var_0_object->AddReply(535264, 37039, 36939); //@t
		var_0_object->AddReply(535339, -1, 37021); //@t
		var_0_object->AddReply(535354, -1, 37038); //@t
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_132:
	bool var_609_bool;
	func_3364(var_609_bool);
	if(var_609_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3233(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_161:
		return 0;

	}
	
}


void func_3938(object var_108_object, string var_109_string, float var_110_float)
{
	object var_118_object;
	@GetMainOutdoorScene(var_118_object);
	if(var_118_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_116_cvector;
	cvector var_117_cvector;
	bool var_119_bool;
	var_118_object->GetLocator(var_109_string, var_119_bool, var_116_cvector, var_117_cvector);
	if(!var_119_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_109_string) + " doesnt exist");
	var_118_object->GetMap(var_108_object);
	if(var_108_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_129_float = GetByIndex(var_116_cvector, 0);
	var_130_float = GetByIndex(var_116_cvector, 2);
	var_108_object->SetMapParams(var_129_float, var_130_float, var_110_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3431(void)
{
	func_3789();
	bool var_157_bool;
	func_3300(var_157_bool, "quest_b7_02", "completed");
}


// @pe
void func_3689(bool var_518_bool)
{
	int var_520_int;
	func_3284(var_520_int, "oob10Mat2");
	if(var_520_int == 0) {
		var_518_bool = true;
		return 0;
	}
	var_518_bool = false;
}


void func_1136(object var_0_object, int var_358_int, object var_359_object)
{
	var_0_object = var_359_object;
	bool var_369_bool; object var_370_object;
	object var_371_object;
	func_3268(var_371_object);
	var_371_object = var_370_object;
	func_3095(var_369_bool, var_370_object);
	bool var_372_bool; object var_373_object;
	var_359_object = var_373_object;
	func_3010(var_372_bool, var_373_object, 70.0);
	if(!var_372_bool) { //@nz
		var_358_int = -2;
		return 8;
	}
	object var_365_object;
	@CreateDialog(var_365_object);
	int var_376_int;
	func_3358(var_376_int);
	var_365_object->SetNPCName(var_376_int);
	int var_377_int;
	func_3356(var_377_int);
	var_365_object->SetNPCDescription(var_377_int);
	string var_378_string;
	func_3360(var_378_string);
	var_365_object->SetPhoto(var_378_string);
	string var_379_string;
	func_3362(var_379_string);
	var_365_object->SetPhoto2(var_379_string);
	int var_380_int;
	func_3971(var_380_int);
	var_365_object->SetPlayerName(var_380_int);
	bool var_366_bool;
	@IsOverrideActive(var_366_bool);
	if(var_366_bool != 0) {
		var_358_int = -2;
		return 8;
	}
	@DoDialog(var_365_object);
	object var_382_object; object var_383_object;
	var_359_object = var_382_object;
	var_365_object = var_383_object;
	TaskCall(8);
	func_1217(var_384_object, var_385_object, var_386_string, var_387_bool, var_382_object, var_383_object);
	TaskReturn();
	bool var_368_bool;
	var_365_object->IsDialogEnd(var_368_bool);
	
	for(;;) {
		var_436_bool = !var_368_bool; //@nz
		if(var_436_bool == 0) goto Label_1206;
		@sync();
		var_365_object->IsDialogEnd(var_368_bool);
	}
	
Label_1206:
	object var_437_object;
	var_359_object = var_437_object;
	func_3078();
	@StopDialog(var_365_object);
	var_365_object->GetReturnValue(-1);
	int var_367_int = var_358_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3441(void)
{
	@SetVariable("b8q01", 2);
	func_3828();
	bool var_64_bool;
	func_3300(var_64_bool, "quest_b8_01", "place_klara");
}


// @pe
void func_3701(bool var_530_bool)
{
	int var_532_int;
	func_3284(var_532_int, "b10q04");
	if(var_532_int == 0) {
		var_530_bool = true;
		return 0;
	}
	var_530_bool = false;
}


void func_3190(bool var_107_bool, object var_108_object)
{
	bool var_116_bool; int var_117_int; string var_118_string;
	int var_120_int;
	func_3317(var_120_int);
	string var_114_string = ("d" + var_120_int) + "m";
	int var_115_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_108_object->HasProperty((var_114_string + (var_115_int + 1)), var_116_bool);
			if(!var_116_bool) { //@nz
			} else {
				var_115_int += 1;
			}
		}
		if(!var_115_int) { //@nz
			var_107_bool = false;
			return 10;
		}
		var_117_int = 0;
		if(var_115_int > 1)
			@irand(var_117_int, var_115_int);
		var_108_object->GetProperty((var_114_string + (var_117_int + 1)), var_118_string);
		bool var_139_bool; string var_140_string;
		var_118_string = var_140_string;
		func_3246(var_139_bool, var_140_string);
		var_139_bool = var_107_bool;
		return 10;

	}
}


// @pe
void func_3455(void)
{
	@SetVariable("b8q01", 4);
	func_3841();
	bool var_99_bool;
	func_3300(var_99_bool, "quest_b8_01", "remove_klara");
	bool var_102_bool;
	func_3300(var_102_bool, "quest_b8_01", "unlock_boiny");
}


// @pe
void func_3713(bool var_594_bool)
{
	int var_596_int;
	func_3284(var_596_int, "oob12Mat1");
	if(var_596_int == 0) {
		var_594_bool = true;
		return 0;
	}
	var_594_bool = false;
}


void func_3971(int var_211_int)
{
	int var_213_int;
	@GetVariable("branch", var_213_int);
	if(var_213_int == 0) {
		var_211_int = 1;
		return 2;
	EMIT "GOTO 0xf92";
	}
	if(var_213_int == 1) {
		var_211_int = 2;
		return 2;
	}
	var_211_int = 3;
}


void func_644(object var_0_object, int var_272_int, object var_273_object)
{
	var_0_object = var_273_object;
	bool var_283_bool; object var_284_object;
	object var_285_object;
	func_3268(var_285_object);
	var_285_object = var_284_object;
	func_3095(var_283_bool, var_284_object);
	bool var_286_bool; object var_287_object;
	var_273_object = var_287_object;
	func_3010(var_286_bool, var_287_object, 70.0);
	if(!var_286_bool) { //@nz
		var_272_int = -2;
		return 8;
	}
	object var_279_object;
	@CreateDialog(var_279_object);
	int var_290_int;
	func_3358(var_290_int);
	var_279_object->SetNPCName(var_290_int);
	int var_291_int;
	func_3356(var_291_int);
	var_279_object->SetNPCDescription(var_291_int);
	string var_292_string;
	func_3360(var_292_string);
	var_279_object->SetPhoto(var_292_string);
	string var_293_string;
	func_3362(var_293_string);
	var_279_object->SetPhoto2(var_293_string);
	int var_294_int;
	func_3971(var_294_int);
	var_279_object->SetPlayerName(var_294_int);
	bool var_280_bool;
	@IsOverrideActive(var_280_bool);
	if(var_280_bool != 0) {
		var_272_int = -2;
		return 8;
	}
	@DoDialog(var_279_object);
	object var_296_object; object var_297_object;
	var_273_object = var_296_object;
	var_279_object = var_297_object;
	TaskCall(6);
	func_725(var_298_object, var_299_object, var_300_string, var_301_bool, var_296_object, var_297_object);
	TaskReturn();
	bool var_282_bool;
	var_279_object->IsDialogEnd(var_282_bool);
	
	for(;;) {
		var_354_bool = !var_282_bool; //@nz
		if(var_354_bool == 0) goto Label_714;
		@sync();
		var_279_object->IsDialogEnd(var_282_bool);
	}
	
Label_714:
	object var_355_object;
	var_273_object = var_355_object;
	func_3078();
	@StopDialog(var_279_object);
	var_279_object->GetReturnValue(-1);
	int var_281_int = var_272_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3725(bool var_303_bool)
{
	int var_305_int;
	func_3284(var_305_int, "b7q01");
	if(var_305_int == 2)
		var_303_bool = true;
	var_303_bool = false;
}


// @pe
void func_3474(void)
{
	@SetVariable("b8q03", 3);
	@SetVariable("b8q03MladVladIsVictim", 0);
	func_3854();
}


// @pe
void func_1938(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_464_object, object var_465_object)
{
	var_0_object = var_465_object;
	var_1_object = var_464_object;
	var_3_string = false;
	if(1 != 0) {
		object var_471_object; object var_472_object;
		var_471_object = var_1_object;
		var_472_object = var_0_object;
		func_3559();
		func_2072(var_465_object, "Neutral");
		var_0_object->SetMessage(521951); //@t
		var_0_object->ClearReplies(); //@t
		bool var_484_bool = true;
		bool var_485_bool = false;
		bool var_486_bool;
		func_3641(var_1_object);
		if(var_486_bool != 0) {
			bool var_492_bool;
			func_3665(var_1_object);
			if(var_492_bool != 0)
				var_485_bool = true;
		}
		if(var_485_bool != 1) {
			bool var_498_bool = false;
			bool var_499_bool;
			func_3653(var_1_object);
			if(var_499_bool != 0) {
				bool var_505_bool;
				func_3665(var_1_object);
				if(var_505_bool != 0)
					var_498_bool = true;
			}
			if(var_498_bool != 1)
				var_484_bool = false;
		}
		if(var_484_bool != 0)
			var_0_object->AddReply(521952, 23688, 23126); //@t
		bool var_510_bool = false;
		bool var_511_bool;
		func_3677(var_1_object);
		if(!var_511_bool) { //@nz
			bool var_518_bool;
			func_3689(var_1_object);
			if(var_518_bool != 0)
				var_510_bool = true;
		}
		if(var_510_bool != 0)
			var_0_object->AddReply(530373, 31746, 31745); //@t
		bool var_527_bool = false;
		bool var_528_bool;
		func_3677(var_1_object);
		if(var_528_bool != 0) {
			bool var_530_bool;
			func_3701(var_1_object);
			if(var_530_bool != 0)
				var_527_bool = true;
		}
		if(var_527_bool != 0)
			var_0_object->AddReply(530376, 31749, 31748); //@t
		var_0_object->AddReply(521955, -1, 23129); //@t
		goto Label_2042;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x796";
	}
Label_2042:
	bool var_542_bool;
	func_3364(var_542_bool);
	if(var_542_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3233(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2071;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2071:
		return 0;

	}
	
}


void func_3988(object var_49_object)
{
	int var_51_int;
	@GetVariable("mt_mat", var_51_int);
	if(!var_51_int) { //@nz
		int var_54_int; object var_55_object;
		var_49_object = var_55_object;
		TaskCall(3);
		func_336(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		@SetVariable("mt_mat", 1);
	}
	bool var_269_bool;
	func_3326(var_269_bool, 7);
	if(var_269_bool != 0) {
		int var_272_int; object var_273_object;
		var_49_object = var_273_object;
		TaskCall(5);
		func_644(var_274_object, var_272_int, var_273_object);
		TaskReturn();
		return 2;
	}
	bool var_356_bool;
	func_3326(var_356_bool, 8);
	if(var_356_bool != 0) {
		int var_358_int; object var_359_object;
		var_49_object = var_359_object;
		TaskCall(7);
		func_1136(var_360_object, var_358_int, var_359_object);
		TaskReturn();
		return 2;
	}
	bool var_438_bool;
	func_3326(var_438_bool, 10);
	if(var_438_bool != 0) {
		int var_440_int; object var_441_object;
		var_49_object = var_441_object;
		TaskCall(9);
		func_1857(var_442_object, var_440_int, var_441_object);
		TaskReturn();
		return 2;
	}
	bool var_552_bool;
	func_3326(var_552_bool, 12);
	if(var_552_bool != 0) {
		int var_554_int; object var_555_object;
		var_49_object = var_555_object;
		TaskCall(1);
		func_13(var_556_object, var_554_int, var_555_object);
		TaskReturn();
		return 2;
	}
	int var_619_int; object var_620_object;
	var_49_object = var_620_object;
	TaskCall(11);
	func_2513(var_621_object, var_619_int, var_620_object);
	TaskReturn();
}


void func_3737(void)
{
	object var_70_object;
	@CreateDiaryEntry(var_70_object, 545, 2, 530436);
	bool var_74_bool; object var_75_object;
	var_70_object = var_75_object;
	func_3893(var_74_bool, var_75_object, -1);
}
EMIT "Stack[-1] = 0";


void func_2971(bool var_83_bool)
{
	var_83_bool = true;
}


void func_2973(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_3487(void)
{
	@SetVariable("b8q03", 3);
	@SetVariable("b8q03MladVladIsVictim", 1);
	func_3867();
}


void func_2720(object var_0_object)
{
	bool var_31_bool;
	func_3005(var_31_bool);
	if(!var_31_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2848();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2902();
	}
}
EMIT "Return(); Pop(0)";


void func_3233(string var_38_string)
{
	float var_41_float; float var_42_float;
	@lshGetAnimTimes(var_38_string, var_41_float, var_42_float);
	@lshPlayAnimation(var_41_float, var_42_float, false);
}


// @pe
void func_162(object var_2_object, string var_585_string)
{
	bool var_586_bool;
	func_3364(var_586_bool);
	if(!var_586_bool) //@nz
		return 0;
	if(var_585_string == var_2_object)
		return 0;
	string var_589_string; bool var_590_bool;
	var_585_string = var_589_string;
	if(var_585_string == "")
		var_590_bool = false;
	else
		var_590_bool = true;
	func_3240(var_589_string, var_590_bool);
	var_2_object = var_585_string;
	
}


// @pe
void func_417(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_220_object, object var_221_object)
{
	var_0_object = var_221_object;
	var_1_object = var_220_object;
	var_3_string = false;
	if(1 != 0) {
		func_475(var_221_object, "Neutral");
		var_0_object->SetMessage(518060); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518061, 29781, 19194); //@t
		var_0_object->AddReply(528400, 29777, 29776); //@t
		goto Label_445;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a5";
	}
Label_445:
	bool var_246_bool;
	func_3364(var_246_bool);
	if(var_246_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3233(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_474;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_474:
		return 0;

	}
	
}


void func_2978(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_3750(void)
{
	object var_93_object;
	@CreateDiaryEntry(var_93_object, 546, 2, 530437);
	bool var_97_bool; object var_98_object;
	var_93_object = var_98_object;
	func_3893(var_97_bool, var_98_object, 545);
}
EMIT "Stack[-1] = 0";


void func_3240(string var_231_string, bool var_232_bool)
{
	float var_237_float; float var_238_float;
	@lshGetAnimTimes(var_231_string, var_237_float, var_238_float);
	@lshPlayAnimation(var_237_float, var_238_float, var_232_bool);
}


void func_2986(bool var_39_bool, cvector var_40_cvector)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	bool var_46_bool;
	@Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
}


// @pe
void func_3500(void)
{
	@SetVariable("oob10Mat1", 1);
}


void func_3246(bool var_99_bool, string var_100_string)
{
	bool var_102_bool;
	bool var_103_bool;
	func_3364(var_103_bool);
	if(var_103_bool != 0) {
		@lshHasSpeech(var_102_bool, var_100_string);
		if(var_102_bool != 0) {
			@lshPlaySpeech(var_100_string);
			var_99_bool = true;
		}
	}
	var_99_bool = false;
}


// @pe
void func_3506(void)
{
	@SetVariable("oob10Mat2", 1);
}


void func_3763(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 256, 1, 521028);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_3893(var_62_bool, var_63_object, 253);
}
EMIT "Stack[-1] = 0";


void func_2740(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2996(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


void func_2996(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2986(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_3512(void)
{
	@SetVariable("b10q04", 1);
	object var_55_object;
	func_3921(var_55_object);
	object var_52_object;
	var_55_object = var_52_object;
	float var_66_float;
	func_3312(var_66_float);
	var_52_object->AddMark("b10q04MatGotoMorlok", "pt_b10q04_morlok", 0, 530534, var_66_float);
	func_3737();
	func_3750();
	bool var_100_bool;
	func_3300(var_100_bool, "quest_b10_04", "place_morloks");
}
EMIT "Stack[-1] = 0";


void func_3261(void)
{
	bool var_34_bool;
	func_3364(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_3005(bool var_31_bool)
{
	bool var_33_bool;
	@IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
}


void func_3776(void)
{
	object var_119_object;
	@CreateDiaryEntry(var_119_object, 270, 2, 521214);
	bool var_123_bool; object var_124_object;
	var_119_object = var_124_object;
	func_3893(var_123_bool, var_124_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1217(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_382_object, object var_383_object)
{
	var_0_object = var_383_object;
	var_1_object = var_382_object;
	var_3_string = false;
	if(1 != 0) {
		func_1300(var_383_object, "Neutral");
		var_0_object->SetMessage(521382); //@t
		var_0_object->ClearReplies(); //@t
		bool var_398_bool;
		func_3605(var_1_object);
		if(var_398_bool != 0)
			var_0_object->AddReply(521383, 25136, 22561); //@t
		bool var_407_bool;
		func_3617(var_1_object);
		if(var_407_bool != 0)
			var_0_object->AddReply(521412, 22591, 22590); //@t
		bool var_416_bool;
		func_3629(var_1_object);
		if(var_416_bool != 0)
			var_0_object->AddReply(521519, 25119, 22680); //@t
		var_0_object->AddReply(521384, -1, 22562); //@t
		goto Label_1270;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4c5";
	}
Label_1270:
	bool var_428_bool;
	func_3364(var_428_bool);
	if(var_428_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3233(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1299;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1299:
		return 0;

	}
	
}


void func_3010(bool var_160_bool, object var_161_object, float var_162_float)
{
	cvector var_173_cvector; bool var_180_bool;
	var_161_object->GetPosition(var_173_cvector);
	float var_172_float;
	var_161_object->GetEyesHeight(var_172_float);
	var_181_float = GetByIndex(var_173_cvector, 1);
	SetByIndex(var_173_cvector, 1) = (var_181_float + var_172_float);
	cvector var_174_cvector;
	@GetPosition(var_174_cvector);
	@GetEyesHeight(var_172_float);
	var_182_float = GetByIndex(var_174_cvector, 1);
	SetByIndex(var_174_cvector, 1) = (var_182_float + var_172_float);
	cvector var_175_cvector = var_173_cvector - var_174_cvector;
	var_183_float = GetByIndex(var_175_cvector, 1);
	SetByIndex(var_175_cvector, 1) = (float)0;
	var_185_float = sqrt(var_175_cvector | var_175_cvector);
	var_175_cvector /= var_185_float;
	cvector var_176_cvector = -var_175_cvector;
	cvector var_187_cvector;
	func_3274(var_187_cvector, (var_176_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_177_cvector = ((var_175_cvector * var_162_float) + (var_187_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_179_bool;
	@IsOverrideActive(var_179_bool);
	if(var_179_bool != 0)
		var_160_bool = false;
	@StopWorld();
	@CameraTransit((var_174_cvector + var_177_cvector), var_176_cvector);
	var_200_float = GetByIndex(var_177_cvector, 0);
	var_201_float = GetByIndex(var_177_cvector, 2);
	@Rotate(var_200_float, var_201_float);
	bool var_202_bool;
	func_3364(var_202_bool);
	if(var_202_bool != 0) {
	} else {
		@HasAnimationTrack(var_180_bool, "head");
		if(var_180_bool == 0) goto Label_3072;
		@LookAsyncCamera("head");
	}
Label_3072:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_160_bool = true;
	
}


void func_2755(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_3268(object var_67_object)
{
	object var_69_object;
	@self(var_69_object);
	var_69_object = var_67_object;
}
EMIT "Stack[-1] = 0";


void func_2760(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2978(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_3274(cvector var_187_cvector, cvector var_188_cvector)
{
	float var_191_float = sqrt(var_188_cvector | var_188_cvector);
	if(var_191_float < 0.000001)
		var_187_cvector = [0.0, 0.0, 0.0];
	var_187_cvector = var_188_cvector / var_191_float;
}


void func_3789(void)
{
	object var_150_object;
	@CreateDiaryEntry(var_150_object, 273, 2, 521227);
	bool var_154_bool; object var_155_object;
	var_150_object = var_155_object;
	func_3893(var_154_bool, var_155_object, 270);
}
EMIT "Stack[-1] = 0";


void func_2513(object var_0_object, int var_619_int, object var_620_object)
{
	var_0_object = var_620_object;
	bool var_630_bool; object var_631_object;
	object var_632_object;
	func_3268(var_632_object);
	var_632_object = var_631_object;
	func_3095(var_630_bool, var_631_object);
	bool var_633_bool; object var_634_object;
	var_620_object = var_634_object;
	func_3010(var_633_bool, var_634_object, 70.0);
	if(!var_633_bool) { //@nz
		var_619_int = -2;
		return 8;
	}
	object var_626_object;
	@CreateDialog(var_626_object);
	int var_637_int;
	func_3358(var_637_int);
	var_626_object->SetNPCName(var_637_int);
	int var_638_int;
	func_3356(var_638_int);
	var_626_object->SetNPCDescription(var_638_int);
	string var_639_string;
	func_3360(var_639_string);
	var_626_object->SetPhoto(var_639_string);
	string var_640_string;
	func_3362(var_640_string);
	var_626_object->SetPhoto2(var_640_string);
	int var_641_int;
	func_3971(var_641_int);
	var_626_object->SetPlayerName(var_641_int);
	bool var_627_bool;
	@IsOverrideActive(var_627_bool);
	if(var_627_bool != 0) {
		var_619_int = -2;
		return 8;
	}
	@DoDialog(var_626_object);
	object var_643_object; object var_644_object;
	var_620_object = var_643_object;
	var_626_object = var_644_object;
	TaskCall(12);
	func_2594(var_645_object, var_646_object, var_647_string, var_648_bool, var_643_object, var_644_object);
	TaskReturn();
	bool var_629_bool;
	var_626_object->IsDialogEnd(var_629_bool);
	
	for(;;) {
		var_673_bool = !var_629_bool; //@nz
		if(var_673_bool == 0) goto Label_2583;
		@sync();
		var_626_object->IsDialogEnd(var_629_bool);
	}
	
Label_2583:
	object var_674_object;
	var_620_object = var_674_object;
	func_3078();
	@StopDialog(var_626_object);
	var_626_object->GetReturnValue(-1);
	int var_628_int = var_619_int;
}
EMIT "Stack[-4] = 0";


void func_3284(int var_305_int, string var_306_string)
{
	int var_308_int;
	@GetVariable(var_306_string, var_308_int);
	var_308_int = var_305_int;
}


// @pe
void func_725(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_296_object, object var_297_object)
{
	var_0_object = var_297_object;
	var_1_object = var_296_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_303_bool;
		func_3725(var_1_object);
		if(var_303_bool != 0) {
			func_818(var_297_object, "Neutral");
			var_0_object->SetMessage(520984); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528518, 29911, 29910); //@t
		} else {
					func_818(var_297_object, "Neutral");
					var_0_object->SetMessage(520986); //@t
					var_0_object->ClearReplies(); //@t
					bool var_333_bool;
					func_3581(var_1_object);
					if(var_333_bool != 0)
						var_0_object->AddReply(521209, 29920, 22405); //@t
					bool var_342_bool;
					func_3593(var_1_object);
					if(var_342_bool != 0)
						var_0_object->AddReply(521216, 22411, 22410); //@t
					var_0_object->AddReply(520987, -1, 22200); //@t
		}
	}
	for(;;) {
		bool var_323_bool;
		func_3364(var_323_bool);
		if(var_323_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3233(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_817;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_817:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2d9";


// @pe
void func_3543(object var_107_object)
{
	object var_111_object;
	func_3921(var_111_object);
	object var_108_object;
	var_111_object = var_108_object;
	func_3938(var_108_object, "pt_b10q04_morlok", (float)2);
	object var_131_object;
	func_3921(var_131_object);
	var_107_object->ShowMap(var_131_object);
}


void func_3289(object var_134_object, string var_135_string)
{
	object var_138_object;
	@GetMainOutdoorScene(var_138_object);
	object var_139_object;
	@AddBlankActor(var_139_object, var_138_object, var_135_string, (var_135_string + ".bin"));
	var_139_object = var_134_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3802(void)
{
	object var_127_object;
	@CreateDiaryEntry(var_127_object, 271, 2, 521215);
	bool var_131_bool; object var_132_object;
	var_127_object = var_132_object;
	func_3893(var_131_bool, var_132_object, 270);
}
EMIT "Stack[-1] = 0";


// @pe
void func_475(object var_2_object, string var_227_string)
{
	bool var_228_bool;
	func_3364(var_228_bool);
	if(!var_228_bool) //@nz
		return 0;
	if(var_227_string == var_2_object)
		return 0;
	string var_231_string; bool var_232_bool;
	var_227_string = var_231_string;
	if(var_227_string == "")
		var_232_bool = false;
	else
		var_232_bool = true;
	func_3240(var_231_string, var_232_bool);
	var_2_object = var_227_string;
	
}


void func_2782(void)
{
	float var_45_float;
	@rand(var_45_float, 8, 16);
	@SetTimer(10, var_45_float);
}


void func_3300(bool var_100_bool, string var_101_string, string var_102_string)
{
	object var_104_object;
	@FindActor(var_104_object, var_101_string);
	if(var_104_object == null)
		var_100_bool = false;
	@Trigger(var_104_object, var_102_string);
	var_100_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2791(void)
{
	@KillTimer(10);
}


void func_3815(void)
{
	object var_75_object;
	@CreateDiaryEntry(var_75_object, 606, 1, 531260);
	bool var_79_bool; object var_80_object;
	var_75_object = var_80_object;
	func_3893(var_79_bool, var_80_object, 284);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3559(void)
{
	@SetVariable("b10MatVisit", 1);
}


// @pe
void func_3565(void)
{
	func_3815();
	bool var_82_bool;
	func_3300(var_82_bool, "quest_b8_01", "fail");
}


void func_3312(float var_66_float)
{
	float var_68_float;
	@GetGameTime(var_68_float);
	var_68_float = var_66_float;
}


void func_3828(void)
{
	object var_42_object;
	@CreateDiaryEntry(var_42_object, 286, 1, 521457);
	bool var_46_bool; object var_47_object;
	var_42_object = var_47_object;
	func_3893(var_46_bool, var_47_object, 284);
}
EMIT "Stack[-1] = 0";


void func_3317(int var_120_int)
{
	float var_122_float;
	@GetGameTime(var_122_float);
	var_120_int = 1 + (var_122_float / 24);
}


// @pe
void func_3575(void)
{
	@SetVariable("oob12Mat1", 1);
}


// @pe
void func_3581(bool var_333_bool)
{
	int var_335_int;
	func_3284(var_335_int, "b7q02");
	if(var_335_int == 0) {
		var_333_bool = true;
		return 0;
	}
	var_333_bool = false;
}


// @pe
void func_3326(bool var_269_bool, int var_270_int)
{
	int var_271_int;
	func_3317(var_271_int);
	var_269_bool = var_271_int == var_270_int;
}


