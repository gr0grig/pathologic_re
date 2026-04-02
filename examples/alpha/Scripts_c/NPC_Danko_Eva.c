// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		func_5098();
		bool var_30_bool;
		func_4091(var_30_bool);
		if(!var_30_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4156("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_31_object;
		var_30_bool = var_31_object;
		func_5099(var_31_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_4079(var_31_bool, var_32_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4174();
			if(var_30_string == 4274) {
				bool var_36_bool = false;
				bool var_37_bool;
				func_4861(var_1_object);
				if(var_37_bool != 0) {
					bool var_45_bool;
					func_4885(var_1_object);
					if(var_45_bool != 0)
						var_36_bool = true;
				}
				if(var_36_bool != 0) {
					object var_51_object; object var_52_object;
					var_51_object = var_1_object;
					var_52_object = var_0_object;
					func_4579();
					func_204(var_31_bool, "Neutral");
					var_0_object->SetMessage(3926); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(3927, 4276, 4275); //@t
					var_0_object->AddReply(3929, 4278, 4277); //@t
					return 0;
				}
				func_204(var_31_bool, "Neutral");
				var_0_object->SetMessage(13718); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13719, -1, 14985); //@t
				return 0;
			}
			if(var_30_string == 4278) {
				func_204(var_31_bool, "Neutral");
				var_0_object->SetMessage(3930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3931, 4276, 4279); //@t
				var_0_object->AddReply(3932, 4288, 4280); //@t
				var_0_object->AddReply(3933, -1, 4281); //@t
				return 0;
			}
			if(var_30_string == 4276) {
				func_204(var_31_bool, "Neutral");
				var_0_object->SetMessage(3928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3937, 4288, 4286); //@t
				var_0_object->AddReply(3938, 4288, 4287); //@t
				return 0;
			}
			if(var_30_string == 4288) {
				func_204(var_31_bool, "Neutral");
				var_0_object->SetMessage(3939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3940, 4297, 4291); //@t
				var_0_object->AddReply(3941, 4294, 4292); //@t
				var_0_object->AddReply(3942, -1, 4293); //@t
				return 0;
			}
			if(var_30_string == 4294) {
				func_204(var_31_bool, "Neutral");
				var_0_object->SetMessage(3943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3944, -1, 4295); //@t
				var_0_object->AddReply(3945, -1, 4296); //@t
				return 0;
			}
			if(var_30_string == 4297) {
				func_204(var_31_bool, "Neutral");
				var_0_object->SetMessage(3946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(3947, -1, 4298); //@t
				var_0_object->AddReply(3948, -1, 4299); //@t
				return 0;
			}
			var_3_string = true;
			bool var_138_bool;
			func_4256(var_138_bool);
			if(var_138_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdd";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4174();
			if(var_31_bool == 4915) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4391();
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_4519();
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_4404();
				object var_80_object = var_1_object;
				func_4300(var_0_object);
			}
			if(var_31_bool == 4900) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_4391();
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_4519();
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_4404();
				object var_114_object = var_1_object;
				func_4300(var_0_object);
			}
			if(var_31_bool == 5020) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_4549();
			}
			if(var_31_bool == 5021) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_4549();
			}
			if(var_30_string == 4899) {
				bool var_128_bool;
				func_4669(var_1_object);
				if(var_128_bool != 0) {
					object var_136_object; object var_137_object;
					var_136_object = var_1_object;
					var_137_object = var_0_object;
					func_4567();
					func_622(var_31_bool, "Neutral");
					var_0_object->SetMessage(4496); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4501, 4905, 4904); //@t
					var_0_object->AddReply(4517, 4923, 4922); //@t
					var_0_object->AddReply(4521, 4923, 4928); //@t
					return 0;
				}
				bool var_165_bool;
				func_4717(var_1_object);
				if(var_165_bool != 0) {
					object var_171_object; object var_172_object;
					var_171_object = var_1_object;
					var_172_object = var_0_object;
					func_4567();
					func_622(var_31_bool, "Neutral");
					var_0_object->SetMessage(4590); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4591, 5013, 5012); //@t
					var_0_object->AddReply(4607, 5015, 5032); //@t
					var_0_object->AddReply(4608, 5015, 5034); //@t
					return 0;
				}
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_4444();
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_4567();
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4568); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4569, 4989, 4988); //@t
				var_0_object->AddReply(4586, 5007, 5006); //@t
				return 0;
			}
			if(var_30_string == 5007) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4587); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4588, 4993, 5008); //@t
				var_0_object->AddReply(4589, 5001, 5009); //@t
				return 0;
			}
			if(var_30_string == 4989) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4570); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4571, 4991, 4990); //@t
				var_0_object->AddReply(4580, 5001, 5000); //@t
				return 0;
			}
			if(var_30_string == 5001) {
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_4525();
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4582, 5003, 5002); //@t
				var_0_object->AddReply(4585, 4993, 5005); //@t
				return 0;
			}
			if(var_30_string == 5003) {
				object var_234_object; object var_235_object;
				var_234_object = var_1_object;
				var_235_object = var_0_object;
				func_4346();
				object var_238_object; object var_239_object;
				var_238_object = var_1_object;
				var_239_object = var_0_object;
				func_4531();
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4584, 4993, 5004); //@t
				return 0;
			}
			if(var_30_string == 4991) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4573, 4993, 4992); //@t
				var_0_object->AddReply(4579, 4993, 4998); //@t
				return 0;
			}
			if(var_30_string == 4993) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4574); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4575, -1, 4994); //@t
				var_0_object->AddReply(4576, 4996, 4995); //@t
				return 0;
			}
			if(var_30_string == 4996) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4578, -1, 4997); //@t
				return 0;
			}
			if(var_30_string == 5013) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4592); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4593, 5015, 5014); //@t
				var_0_object->AddReply(4603, 5027, 5026); //@t
				return 0;
			}
			if(var_30_string == 5027) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4604); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4605, 5015, 5028); //@t
				var_0_object->AddReply(4606, 5015, 5030); //@t
				return 0;
			}
			if(var_30_string == 5015) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4594); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4595, 5017, 5016); //@t
				var_0_object->AddReply(4602, 5019, 5024); //@t
				return 0;
			}
			if(var_30_string == 5017) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4596); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4597, 5019, 5018); //@t
				var_0_object->AddReply(4601, 5019, 5022); //@t
				return 0;
			}
			if(var_30_string == 5019) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4598); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4599, -1, 5020); //@t
				var_0_object->AddReply(4600, -1, 5021); //@t
				return 0;
			}
			if(var_30_string == 4923) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4519, 4907, 4924); //@t
				var_0_object->AddReply(4520, 4907, 4926); //@t
				return 0;
			}
			if(var_30_string == 4905) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4503, 4907, 4906); //@t
				var_0_object->AddReply(4515, 4923, 4918); //@t
				var_0_object->AddReply(4516, 4907, 4920); //@t
				return 0;
			}
			if(var_30_string == 4907) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4504); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4505, 4909, 4908); //@t
				return 0;
			}
			if(var_30_string == 4909) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4507, 4911, 4910); //@t
				var_0_object->AddReply(4514, 4911, 4917); //@t
				return 0;
			}
			if(var_30_string == 4911) {
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4509, 4913, 4912); //@t
				var_0_object->AddReply(4513, 4913, 4916); //@t
				return 0;
			}
			if(var_30_string == 4913) {
				object var_376_object; object var_377_object;
				var_376_object = var_1_object;
				var_377_object = var_0_object;
				func_4438();
				object var_380_object; object var_381_object;
				var_380_object = var_1_object;
				var_381_object = var_0_object;
				func_4282();
				object var_384_object; object var_385_object;
				var_384_object = var_1_object;
				var_385_object = var_0_object;
				func_4585();
				object var_388_object; object var_389_object;
				var_388_object = var_1_object;
				var_389_object = var_0_object;
				func_4537();
				object var_392_object; object var_393_object;
				var_392_object = var_1_object;
				var_393_object = var_0_object;
				func_4573();
				func_622(var_31_bool, "Neutral");
				var_0_object->SetMessage(4510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4512, -1, 4915); //@t
				var_0_object->AddReply(4497, -1, 4900); //@t
				return 0;
			}
			var_3_string = true;
			bool var_404_bool;
			func_4256(var_404_bool);
			if(var_404_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x27f";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4174();
			if(var_31_bool == 5094) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4561();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_4466();
				object var_58_object = var_1_object;
				func_4450(var_0_object);
			}
			if(var_31_bool == 5095) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_4561();
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_4466();
				object var_90_object = var_1_object;
				func_4450(var_0_object);
			}
			if(var_31_bool == 5096) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_4561();
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_4466();
				object var_98_object = var_1_object;
				func_4450(var_0_object);
			}
			if(var_31_bool == 5051) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_4555();
			}
			if(var_31_bool == 5082) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_4555();
			}
			if(var_31_bool == 5079) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_4555();
			}
			if(var_31_bool == 5078) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_4555();
			}
			if(var_31_bool == 5074) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_4555();
			}
			if(var_31_bool == 5075) {
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_4555();
			}
			if(var_31_bool == 5111) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_4258();
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_4482();
				object var_147_object; object var_148_object;
				var_147_object = var_1_object;
				var_148_object = var_0_object;
				func_4513();
			}
			if(var_31_bool == 5116) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_4258();
				object var_155_object; object var_156_object;
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_4482();
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_4513();
			}
			if(var_31_bool == 5113) {
				object var_161_object; object var_162_object;
				var_161_object = var_1_object;
				var_162_object = var_0_object;
				func_4258();
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_4482();
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_4513();
			}
			if(var_31_bool == 5320) {
				object var_169_object; object var_170_object;
				var_169_object = var_1_object;
				var_170_object = var_0_object;
				func_4543();
			}
			if(var_31_bool == 6967) {
				object var_175_object; object var_176_object;
				var_175_object = var_1_object;
				var_176_object = var_0_object;
				func_4288();
			}
			if(var_31_bool == 6968) {
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_object;
				func_4288();
			}
			if(var_31_bool == 6977) {
				object var_185_object; object var_186_object;
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_4294();
			}
			if(var_30_string == 5040) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4610); //@t
				var_0_object->ClearReplies(); //@t
				bool var_207_bool;
				func_4837(var_1_object);
				if(var_207_bool != 0)
					var_0_object->AddReply(4612, 5058, 5042); //@t
				bool var_218_bool;
				func_4813(var_1_object);
				if(var_218_bool != 0)
					var_0_object->AddReply(4611, 5056, 5041); //@t
				bool var_227_bool;
				func_4873(var_1_object);
				if(var_227_bool != 0)
					var_0_object->AddReply(4613, 5097, 5043); //@t
				bool var_236_bool = false;
				bool var_237_bool;
				func_4825(var_1_object);
				if(var_237_bool != 0) {
					bool var_243_bool;
					func_4681(var_1_object);
					if(var_243_bool != 0)
						var_236_bool = true;
				}
				if(var_236_bool != 0)
					var_0_object->AddReply(4846, 5319, 5318); //@t
				bool var_252_bool = false;
				bool var_253_bool;
				func_4897(var_1_object);
				if(var_253_bool != 0) {
					bool var_259_bool;
					func_4693(var_1_object);
					if(var_259_bool != 0)
						var_252_bool = true;
				}
				if(var_252_bool != 0)
					var_0_object->AddReply(6299, 6952, 6951); //@t
				bool var_268_bool = false;
				bool var_269_bool;
				func_4705(var_1_object);
				if(var_269_bool != 0) {
					bool var_275_bool;
					func_4945(var_1_object);
					if(var_275_bool != 0)
						var_268_bool = true;
				}
				if(var_268_bool != 0)
					var_0_object->AddReply(6314, 6970, 6969); //@t
				var_0_object->AddReply(4614, -1, 5044); //@t
				return 0;
			}
			if(var_30_string == 6970) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6316, 6972, 6971); //@t
				return 0;
			}
			if(var_30_string == 6972) {
				object var_296_object; object var_297_object;
				var_296_object = var_1_object;
				var_297_object = var_0_object;
				func_4663();
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6317); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6318, 6974, 6973); //@t
				return 0;
			}
			if(var_30_string == 6974) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6319); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6320, 6976, 6975); //@t
				return 0;
			}
			if(var_30_string == 6976) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6321); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6322, 5040, 6977); //@t
				return 0;
			}
			if(var_30_string == 6952) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6301, 6956, 6953); //@t
				var_0_object->AddReply(6302, 6956, 6954); //@t
				var_0_object->AddReply(6303, 6956, 6955); //@t
				return 0;
			}
			if(var_30_string == 6956) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6305, 6963, 6959); //@t
				var_0_object->AddReply(6306, 6961, 6960); //@t
				return 0;
			}
			if(var_30_string == 6961) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6308, 6963, 6962); //@t
				return 0;
			}
			if(var_30_string == 6963) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6310, 6965, 6964); //@t
				return 0;
			}
			if(var_30_string == 6965) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6312, 5040, 6967); //@t
				var_0_object->AddReply(6313, 5040, 6968); //@t
				return 0;
			}
			if(var_30_string == 5319) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6295, 6948, 6947); //@t
				return 0;
			}
			if(var_30_string == 6948) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6297, 6950, 6949); //@t
				var_0_object->AddReply(6323, 6950, 6978); //@t
				return 0;
			}
			if(var_30_string == 6950) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(6298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4848, 5040, 5320); //@t
				return 0;
			}
			if(var_30_string == 5097) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4661); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4662, 5100, 5098); //@t
				var_0_object->AddReply(4663, 5100, 5099); //@t
				return 0;
			}
			if(var_30_string == 5100) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4665, 5103, 5102); //@t
				var_0_object->AddReply(4667, 5105, 5104); //@t
				return 0;
			}
			if(var_30_string == 5105) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4668); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4669, 5103, 5106); //@t
				return 0;
			}
			if(var_30_string == 5103) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4666); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4670, 5108, 5107); //@t
				var_0_object->AddReply(4675, 5040, 5113); //@t
				return 0;
			}
			if(var_30_string == 5108) {
				object var_429_object; object var_430_object;
				var_429_object = var_1_object;
				var_430_object = var_0_object;
				func_4264();
				object var_433_object; object var_434_object;
				var_433_object = var_1_object;
				var_434_object = var_0_object;
				func_4398();
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4671); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4672, 5110, 5109); //@t
				var_0_object->AddReply(4676, 5110, 5114); //@t
				return 0;
			}
			if(var_30_string == 5110) {
				object var_447_object; object var_448_object;
				var_447_object = var_1_object;
				var_448_object = var_0_object;
				func_4270();
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4673); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4674, 5040, 5111); //@t
				var_0_object->AddReply(4677, 5040, 5116); //@t
				return 0;
			}
			if(var_30_string == 5056) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7659, 8453, 8452); //@t
				return 0;
			}
			if(var_30_string == 8453) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(7660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7661, 8458, 8454); //@t
				var_0_object->AddReply(7662, 8458, 8455); //@t
				return 0;
			}
			if(var_30_string == 8458) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(7664); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7665, 8456, 8459); //@t
				return 0;
			}
			if(var_30_string == 8456) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(7663); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4625, 5045, 5057); //@t
				var_0_object->AddReply(4635, 5069, 5068); //@t
				return 0;
			}
			if(var_30_string == 5069) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4636); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4637, 5072, 5070); //@t
				var_0_object->AddReply(4638, 5072, 5071); //@t
				return 0;
			}
			if(var_30_string == 5072) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4639); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4642, 5077, 5076); //@t
				var_0_object->AddReply(4640, 5040, 5074); //@t
				var_0_object->AddReply(4641, 5040, 5075); //@t
				return 0;
			}
			if(var_30_string == 5077) {
				object var_518_object; object var_519_object;
				var_518_object = var_1_object;
				var_519_object = var_0_object;
				func_4657();
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4643); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4646, 5081, 5080); //@t
				var_0_object->AddReply(4645, 5040, 5079); //@t
				var_0_object->AddReply(4644, 5040, 5078); //@t
				return 0;
			}
			if(var_30_string == 5081) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4647); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4648, 5040, 5082); //@t
				return 0;
			}
			if(var_30_string == 5045) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4615); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4616, 5047, 5046); //@t
				var_0_object->AddReply(4623, 5047, 5054); //@t
				return 0;
			}
			if(var_30_string == 5047) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4617); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4618, 5049, 5048); //@t
				var_0_object->AddReply(4622, 5065, 5052); //@t
				return 0;
			}
			if(var_30_string == 5065) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4633); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4634, 5049, 5066); //@t
				return 0;
			}
			if(var_30_string == 5049) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4619); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4621, 5040, 5051); //@t
				return 0;
			}
			if(var_30_string == 5058) {
				object var_576_object; object var_577_object;
				var_576_object = var_1_object;
				var_577_object = var_0_object;
				func_4591();
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4626); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4627, 5086, 5059); //@t
				var_0_object->AddReply(4628, 5061, 5060); //@t
				return 0;
			}
			if(var_30_string == 5061) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4629); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4630, 5086, 5062); //@t
				return 0;
			}
			if(var_30_string == 5086) {
				object var_597_object; object var_598_object;
				var_597_object = var_1_object;
				var_598_object = var_0_object;
				func_4276();
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4653, 5089, 5088); //@t
				var_0_object->AddReply(4655, 5089, 5090); //@t
				return 0;
			}
			if(var_30_string == 5089) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4656, 5093, 5092); //@t
				var_0_object->AddReply(4660, -1, 5096); //@t
				return 0;
			}
			if(var_30_string == 5093) {
				func_1469(var_31_bool, "Neutral");
				var_0_object->SetMessage(4657); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(4658, -1, 5094); //@t
				var_0_object->AddReply(4659, -1, 5095); //@t
				return 0;
			}
			var_3_string = true;
			bool var_629_bool;
			func_4256(var_629_bool);
			if(var_629_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5ce";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4174();
			if(var_31_bool == 8026) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4322();
				object var_40_object; object var_41_object;
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_4352();
				object var_107_object = var_1_object;
				func_4597(var_0_object);
			}
			if(var_31_bool == 8027) {
				object var_135_object; object var_136_object;
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_4322();
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				func_4352();
			}
			if(var_31_bool == 8028) {
				object var_141_object; object var_142_object;
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_4322();
			}
			if(var_31_bool == 8018) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_4322();
			}
			if(var_31_bool == 8009) {
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_4322();
			}
			if(var_31_bool == 8037) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_4328();
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_4613();
				object var_167_object = var_1_object;
				func_4629(var_0_object);
			}
			if(var_31_bool == 8033) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_4328();
			}
			if(var_31_bool == 8042) {
				object var_180_object; object var_181_object;
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_4334();
			}
			if(var_31_bool == 8045) {
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_4340();
			}
			if(var_31_bool == 8046) {
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_4340();
			}
			if(var_31_bool == 12591) {
				object var_196_object; object var_197_object;
				var_196_object = var_1_object;
				var_197_object = var_0_object;
				func_4352();
				object var_198_object = var_1_object;
				func_4597(var_0_object);
			}
			if(var_30_string == 7559) {
				bool var_202_bool;
				func_4729(var_1_object);
				if(var_202_bool != 0) {
					func_2785(var_31_bool, "Neutral");
					var_0_object->SetMessage(6853); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6854, 7890, 7560); //@t
					var_0_object->AddReply(7262, 7890, 8004); //@t
					return 0;
				}
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(6855); //@t
				var_0_object->ClearReplies(); //@t
				bool var_234_bool = false;
				bool var_235_bool;
				func_4741(var_1_object);
				if(var_235_bool != 0) {
					bool var_241_bool;
					func_4789(var_1_object);
					if(var_241_bool != 0)
						var_234_bool = true;
				}
				if(var_234_bool != 0)
					var_0_object->AddReply(6856, 7563, 7562); //@t
				bool var_250_bool = false;
				bool var_251_bool;
				func_4753(var_1_object);
				if(var_251_bool != 0) {
					bool var_257_bool;
					func_4801(var_1_object);
					if(var_257_bool != 0)
						var_250_bool = true;
				}
				if(var_250_bool != 0)
					var_0_object->AddReply(6859, 7566, 7565); //@t
				bool var_266_bool = false;
				bool var_267_bool;
				func_4765(var_1_object);
				if(var_267_bool != 0) {
					bool var_273_bool;
					func_4777(var_1_object);
					if(var_273_bool != 0)
						var_266_bool = true;
				}
				if(var_266_bool != 0)
					var_0_object->AddReply(6861, 7568, 7567); //@t
				bool var_282_bool;
				func_4849(var_1_object);
				if(var_282_bool != 0)
					var_0_object->AddReply(11392, 12590, 12589); //@t
				var_0_object->AddReply(7528, -1, 8310); //@t
				return 0;
			}
			if(var_30_string == 12590) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(11393); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11394, -1, 12591); //@t
				return 0;
			}
			if(var_30_string == 7568) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(6862); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7296, 8044, 8043); //@t
				return 0;
			}
			if(var_30_string == 8044) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7298, -1, 8045); //@t
				var_0_object->AddReply(7299, -1, 8046); //@t
				return 0;
			}
			if(var_30_string == 7566) {
				object var_320_object; object var_321_object;
				var_320_object = var_1_object;
				var_321_object = var_0_object;
				func_4316();
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(6860); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7295, -1, 8042); //@t
				return 0;
			}
			if(var_30_string == 7563) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(6857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6858, 8034, 7564); //@t
				var_0_object->AddReply(7287, -1, 8033); //@t
				return 0;
			}
			if(var_30_string == 8034) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7289, 8036, 8035); //@t
				var_0_object->AddReply(7292, 8039, 8038); //@t
				return 0;
			}
			if(var_30_string == 8039) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7294, 8036, 8040); //@t
				return 0;
			}
			if(var_30_string == 8036) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7291, -1, 8037); //@t
				return 0;
			}
			if(var_30_string == 7890) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7162); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7264, 8010, 8007); //@t
				var_0_object->AddReply(7265, 8010, 8008); //@t
				var_0_object->AddReply(7266, -1, 8009); //@t
				return 0;
			}
			if(var_30_string == 8010) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7267); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7268, 8015, 8012); //@t
				var_0_object->AddReply(7269, 8014, 8013); //@t
				return 0;
			}
			if(var_30_string == 8014) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7272, 8019, 8016); //@t
				var_0_object->AddReply(7273, 8015, 8017); //@t
				var_0_object->AddReply(7274, -1, 8018); //@t
				return 0;
			}
			if(var_30_string == 8019) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7275); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7276, 8015, 8020); //@t
				return 0;
			}
			if(var_30_string == 8015) {
				object var_408_object; object var_409_object;
				var_408_object = var_1_object;
				var_409_object = var_0_object;
				func_4507();
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7271); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7277, 8023, 8022); //@t
				var_0_object->AddReply(7284, 8030, 8029); //@t
				return 0;
			}
			if(var_30_string == 8030) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7286, 8025, 8031); //@t
				return 0;
			}
			if(var_30_string == 8023) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7279, 8025, 8024); //@t
				return 0;
			}
			if(var_30_string == 8025) {
				func_2785(var_31_bool, "Neutral");
				var_0_object->SetMessage(7280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7281, -1, 8026); //@t
				var_0_object->AddReply(7282, -1, 8027); //@t
				var_0_object->AddReply(7283, -1, 8028); //@t
				return 0;
			}
			var_3_string = true;
			bool var_447_bool;
			func_4256(var_447_bool);
			if(var_447_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf2";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool)
	{
		if(1 != 0) {
			func_4174();
			if(var_31_bool == 10840) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4645();
			}
			if(var_30_string == 10839) {
				func_3527(var_31_bool, "Neutral");
				var_0_object->SetMessage(9840); //@t
				var_0_object->ClearReplies(); //@t
				bool var_58_bool;
				func_4909(var_1_object);
				if(var_58_bool != 0)
					var_0_object->AddReply(9841, 10821, 10840); //@t
				var_0_object->AddReply(11259, -1, 12449); //@t
				return 0;
			}
			if(var_30_string == 10821) {
				func_3527(var_31_bool, "Neutral");
				var_0_object->SetMessage(9824); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9825, 10823, 10822); //@t
				var_0_object->AddReply(9829, 10828, 10827); //@t
				var_0_object->AddReply(9836, 10835, 10834); //@t
				return 0;
			}
			if(var_30_string == 10835) {
				func_3527(var_31_bool, "Neutral");
				var_0_object->SetMessage(9837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9839, 10828, 10837); //@t
				var_0_object->AddReply(9838, -1, 10836); //@t
				return 0;
			}
			if(var_30_string == 10828) {
				func_3527(var_31_bool, "Neutral");
				var_0_object->SetMessage(9830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9831, -1, 10829); //@t
				var_0_object->AddReply(9832, 10831, 10830); //@t
				return 0;
			}
			if(var_30_string == 10831) {
				func_3527(var_31_bool, "Neutral");
				var_0_object->SetMessage(9833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9834, -1, 10832); //@t
				var_0_object->AddReply(9835, -1, 10833); //@t
				return 0;
			}
			if(var_30_string == 10823) {
				func_3527(var_31_bool, "Neutral");
				var_0_object->SetMessage(9826); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9827, 10828, 10824); //@t
				var_0_object->AddReply(9828, -1, 10826); //@t
				return 0;
			}
			var_3_string = true;
			bool var_125_bool;
			func_4256(var_125_bool);
			if(var_125_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdd8";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int)
	{
		if(1 != 0) {
			func_4174();
			if(var_31_int == 12447) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_4651();
			}
			if(var_30_int == 12445) {
				func_3853(var_31_int, "Neutral");
				var_0_object->SetMessage(11255); //@t
				var_0_object->ClearReplies(); //@t
				bool var_58_bool = false;
				bool var_59_bool;
				func_4933(var_1_object);
				if(var_59_bool != 0) {
					bool var_67_bool;
					func_4921(var_1_object);
					if(var_67_bool != 0)
						var_58_bool = true;
				}
				if(var_58_bool != 0)
					var_0_object->AddReply(11257, 12448, 12447); //@t
				var_0_object->AddReply(11256, -1, 12446); //@t
				return 0;
			}
			if(var_30_int == 12448) {
				func_3853(var_31_int, "Neutral");
				var_0_object->SetMessage(11258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11267, 12458, 12457); //@t
				var_0_object->AddReply(11260, 12451, 12450); //@t
				return 0;
			}
			if(var_30_int == 12451) {
				func_3853(var_31_int, "Neutral");
				var_0_object->SetMessage(11261); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11262, 12453, 12452); //@t
				return 0;
			}
			if(var_30_int == 12453) {
				func_3853(var_31_int, "Neutral");
				var_0_object->SetMessage(11263); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11264, 12455, 12454); //@t
				return 0;
			}
			if(var_30_int == 12455) {
				func_3853(var_31_int, "Neutral");
				var_0_object->SetMessage(11265); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11266, 12458, 12456); //@t
				return 0;
			}
			if(var_30_int == 12458) {
				func_3853(var_31_int, "Neutral");
				var_0_object->SetMessage(11268); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11269, 12463, 12459); //@t
				var_0_object->AddReply(11270, 12461, 12460); //@t
				return 0;
			}
			if(var_30_int == 12461) {
				func_3853(var_31_int, "Neutral");
				var_0_object->SetMessage(11271); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11273, 12463, 12464); //@t
				var_0_object->AddReply(11274, -1, 12465); //@t
				return 0;
			}
			if(var_30_int == 12463) {
				func_3853(var_31_int, "Neutral");
				var_0_object->SetMessage(11272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(11275, -1, 12467); //@t
				var_0_object->AddReply(11276, -1, 12468); //@t
				return 0;
			}
			var_3_string = true;
			bool var_140_bool;
			func_4256(var_140_bool);
			if(var_140_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf1e";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_4096(bool var_57_bool, object var_58_object)
{
	cvector var_68_cvector;
	var_58_object->GetPosition(var_68_cvector);
	float var_67_float;
	var_58_object->GetEyesHeight(var_67_float);
	var_75_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_75_float + var_67_float);
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	@GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (var_76_float + var_67_float);
	cvector var_70_cvector = var_68_cvector - var_69_cvector;
	var_77_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_79_float = sqrt(var_70_cvector | var_70_cvector);
	var_70_cvector /= var_79_float;
	cvector var_71_cvector = -var_70_cvector;
	cvector var_82_cvector;
	func_4181(var_82_cvector, (var_71_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_72_cvector = ((var_70_cvector * 70) + (var_82_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_74_bool;
	@IsOverrideActive(var_74_bool);
	if(var_74_bool != 0)
		var_57_bool = false;
	@StopWorld();
	@CameraTransit((var_69_cvector + var_72_cvector), var_71_cvector);
	var_95_float = GetByIndex(var_72_cvector, 0);
	var_96_float = GetByIndex(var_72_cvector, 2);
	@Rotate(var_95_float, var_96_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_57_bool = true;
}


void func_4352(void)
{
	@SetVariable("d2q02", 1);
	object var_46_object;
	func_4999(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	float var_57_float;
	func_4223(var_57_float);
	var_43_object->AddMark("d2q02EvaGotoAndrei", "pt_map_andrei", 0, 15272, var_57_float);
	float var_64_float;
	func_4223(var_64_float);
	var_43_object->AddMark("d2q02EvaGotoAndreiSelf", "pt_map_eva", 0, 15278, var_64_float);
	func_5066();
	func_5082();
	object var_99_object;
	func_4196(var_99_object, "quest_d2_02");
}
EMIT "Stack[-1] = 0";


void func_4613(void)
{
	object var_161_object;
	func_4999(var_161_object);
	object var_160_object;
	var_161_object = var_160_object;
	float var_166_float;
	func_4223(var_166_float);
	var_160_object->AddMark("d2q02EvaGotoMaria", "pt_map_maria", 0, 15274, var_166_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4873(bool var_227_bool)
{
	int var_229_int;
	func_4191(var_229_int, "ood1Eva3");
	if(var_229_int == 0) {
		var_227_bool = true;
		return 0;
	}
	var_227_bool = false;
}


// @pe
void func_3853(object var_2_object, string var_42_string)
{
	bool var_43_bool;
	func_4256(var_43_bool);
	if(!var_43_bool) //@nz
		return 0;
	if(var_42_string == var_2_object)
		return 0;
	string var_46_string;
	func_4156(var_46_string);
	var_2_object = var_46_string;
}


void func_2577(object var_0_object, int var_315_int, object var_316_object)
{
	var_0_object = var_316_object;
	bool var_326_bool; object var_327_object;
	var_316_object = var_327_object;
	func_4096(var_326_bool, var_327_object);
	if(!var_326_bool) { //@nz
		var_315_int = -2;
		return 8;
	}
	object var_322_object;
	@CreateDialog(var_322_object);
	int var_329_int;
	func_4252(var_329_int);
	var_322_object->SetNPCName(var_329_int);
	string var_330_string;
	func_4254(var_330_string);
	var_322_object->SetPhoto(var_330_string);
	int var_331_int;
	func_5049(var_331_int);
	var_322_object->SetPlayerName(var_331_int);
	bool var_323_bool;
	@IsOverrideActive(var_323_bool);
	if(var_323_bool != 0) {
		var_315_int = -2;
		return 8;
	}
	@DoDialog(var_322_object);
	object var_333_object; object var_334_object;
	var_316_object = var_333_object;
	var_322_object = var_334_object;
	TaskCall(9);
	func_2640(var_335_object, var_336_object, var_337_string, var_338_bool, var_333_object, var_334_object);
	TaskReturn();
	bool var_325_bool;
	var_322_object->IsDialogEnd(var_325_bool);
	
	for(;;) {
		var_428_bool = !var_325_bool; //@nz
		if(var_428_bool == 0) goto Label_2629;
		@sync();
		var_322_object->IsDialogEnd(var_325_bool);
	}
	
Label_2629:
	object var_429_object;
	var_316_object = var_429_object;
	func_4152();
	@StopDialog(var_322_object);
	var_322_object->GetReturnValue(-1);
	int var_324_int = var_315_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4629(object var_168_object)
{
	object var_172_object;
	func_4999(var_172_object);
	object var_169_object;
	var_172_object = var_169_object;
	func_5016(var_169_object, "pt_map_maria", (float)2);
	object var_173_object;
	func_4999(var_173_object);
	var_168_object->ShowMap(var_173_object);
}


// @pe
void func_4885(bool var_45_bool)
{
	int var_47_int;
	func_4191(var_47_int, "ood6Eva1");
	if(var_47_int == 0) {
		var_45_bool = true;
		return 0;
	}
	var_45_bool = false;
}


// @pe
void func_4897(bool var_253_bool)
{
	int var_255_int;
	func_4191(var_255_int, "KnowJulia");
	if(var_255_int == 1)
		var_253_bool = true;
	var_253_bool = false;
}


// @pe
void func_4645(void)
{
	@SetVariable("ood3Eva1", 1);
}


// @pe
void func_4391(void)
{
	func_4207("icot_eva@door1", false);
}


// @pe
void func_4651(void)
{
	@SetVariable("ood4Eva1", 1);
}


// @pe
void func_4909(bool var_58_bool)
{
	int var_60_int;
	func_4191(var_60_int, "ood3Eva1");
	if(var_60_int == 0) {
		var_58_bool = true;
		return 0;
	}
	var_58_bool = false;
}


// @pe
void func_4398(void)
{
	@SetVariable("KnowDubilschikov", 1);
}


// @pe
void func_4657(void)
{
	@SetVariable("KnowStamatins", 1);
}


void func_49(object var_0_object, int var_549_int, object var_550_object)
{
	var_0_object = var_550_object;
	bool var_560_bool; object var_561_object;
	var_550_object = var_561_object;
	func_4096(var_560_bool, var_561_object);
	if(!var_560_bool) { //@nz
		var_549_int = -2;
		return 8;
	}
	object var_556_object;
	@CreateDialog(var_556_object);
	int var_563_int;
	func_4252(var_563_int);
	var_556_object->SetNPCName(var_563_int);
	string var_564_string;
	func_4254(var_564_string);
	var_556_object->SetPhoto(var_564_string);
	int var_565_int;
	func_5049(var_565_int);
	var_556_object->SetPlayerName(var_565_int);
	bool var_557_bool;
	@IsOverrideActive(var_557_bool);
	if(var_557_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	@DoDialog(var_556_object);
	object var_567_object; object var_568_object;
	var_550_object = var_567_object;
	var_556_object = var_568_object;
	TaskCall(3);
	func_112(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object);
	TaskReturn();
	bool var_559_bool;
	var_556_object->IsDialogEnd(var_559_bool);
	
	for(;;) {
		var_616_bool = !var_559_bool; //@nz
		if(var_616_bool == 0) goto Label_101;
		@sync();
		var_556_object->IsDialogEnd(var_559_bool);
	}
	
Label_101:
	object var_617_object;
	var_550_object = var_617_object;
	func_4152();
	@StopDialog(var_556_object);
	var_556_object->GetReturnValue(-1);
	int var_558_int = var_549_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1329(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_212_object, object var_213_object)
{
	var_0_object = var_213_object;
	var_1_object = var_212_object;
	var_3_object = false;
	if(1 != 0) {
		func_1469(var_213_object, "Neutral");
		var_0_object->SetMessage(4610); //@t
		var_0_object->ClearReplies(); //@t
		bool var_225_bool;
		func_4837(var_1_object);
		if(var_225_bool != 0)
			var_0_object->AddReply(4612, 5058, 5042); //@t
		bool var_234_bool;
		func_4813(var_1_object);
		if(var_234_bool != 0)
			var_0_object->AddReply(4611, 5056, 5041); //@t
		bool var_243_bool;
		func_4873(var_1_object);
		if(var_243_bool != 0)
			var_0_object->AddReply(4613, 5097, 5043); //@t
		bool var_252_bool = false;
		bool var_253_bool;
		func_4825(var_1_object);
		if(var_253_bool != 0) {
			bool var_259_bool;
			func_4681(var_1_object);
			if(var_259_bool != 0)
				var_252_bool = true;
		}
		if(var_252_bool != 0)
			var_0_object->AddReply(4846, 5319, 5318); //@t
		bool var_268_bool = false;
		bool var_269_bool;
		func_4897(var_1_object);
		if(var_269_bool != 0) {
			bool var_275_bool;
			func_4693(var_1_object);
			if(var_275_bool != 0)
				var_268_bool = true;
		}
		if(var_268_bool != 0)
			var_0_object->AddReply(6299, 6952, 6951); //@t
		bool var_284_bool = false;
		bool var_285_bool;
		func_4705(var_1_object);
		if(var_285_bool != 0) {
			bool var_291_bool;
			func_4945(var_1_object);
			if(var_291_bool != 0)
				var_284_bool = true;
		}
		if(var_284_bool != 0)
			var_0_object->AddReply(6314, 6970, 6969); //@t
		var_0_object->AddReply(4614, -1, 5044); //@t
		goto Label_1439;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x535";
	}
Label_1439:
	bool var_303_bool;
	func_4256(var_303_bool);
	if(var_303_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4156(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1468;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1468:
		return 0;

	}
	
}


void func_4404(void)
{
	object var_56_object;
	func_4999(var_56_object);
	object var_55_object;
	var_56_object = var_55_object;
	float var_67_float;
	func_4223(var_67_float);
	var_55_object->AddMark("d1q01EvaGotoSimon", "pt_map_georg", 1, 7778, var_67_float);
	float var_74_float;
	func_4223(var_74_float);
	var_55_object->AddMark("d1EvaGotoMaria", "pt_map_maria", 3, 8628, var_74_float);
	float var_79_float;
	func_4223(var_79_float);
	var_55_object->AddMark("d1EvaInfo", "pt_map_eva", 3, 8630, var_79_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4663(void)
{
	@SetVariable("KnowMnogogrannik", 1);
}


// @pe
void func_4152(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_4921(bool var_67_bool)
{
	int var_69_int;
	func_4191(var_69_int, "d4q02");
	if(var_69_int == 0) {
		var_67_bool = true;
		return 0;
	}
	var_67_bool = false;
}


void func_4156(string var_34_string)
{
	@Trace("playing " + var_34_string);
	float var_37_float;
	float var_38_float;
	@lshGetAnimTimes(var_34_string, var_37_float, var_38_float);
	@lshPlayAnimation(var_37_float, var_38_float);
	@Trace("start: " + var_37_float);
	@Trace("end: " + var_38_float);
}


// @pe
void func_4669(bool var_128_bool)
{
	int var_130_int;
	func_4191(var_130_int, "ood1EvaIntro1");
	if(var_130_int == 0) {
		var_128_bool = true;
		return 0;
	}
	var_128_bool = false;
}


// @pe
void func_4933(bool var_59_bool)
{
	int var_61_int;
	func_4191(var_61_int, "ood4Eva1");
	if(var_61_int == 0) {
		var_59_bool = true;
		return 0;
	}
	var_59_bool = false;
}


// @pe
void func_4681(bool var_243_bool)
{
	int var_245_int;
	func_4191(var_245_int, "d1q01FirstGeorgVisit");
	if(var_245_int == 1)
		var_243_bool = true;
	var_243_bool = false;
}


void func_3401(object var_0_object, int var_432_int, object var_433_object)
{
	var_0_object = var_433_object;
	bool var_443_bool; object var_444_object;
	var_433_object = var_444_object;
	func_4096(var_443_bool, var_444_object);
	if(!var_443_bool) { //@nz
		var_432_int = -2;
		return 8;
	}
	object var_439_object;
	@CreateDialog(var_439_object);
	int var_446_int;
	func_4252(var_446_int);
	var_439_object->SetNPCName(var_446_int);
	string var_447_string;
	func_4254(var_447_string);
	var_439_object->SetPhoto(var_447_string);
	int var_448_int;
	func_5049(var_448_int);
	var_439_object->SetPlayerName(var_448_int);
	bool var_440_bool;
	@IsOverrideActive(var_440_bool);
	if(var_440_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	@DoDialog(var_439_object);
	object var_450_object; object var_451_object;
	var_433_object = var_450_object;
	var_439_object = var_451_object;
	TaskCall(11);
	func_3464(var_452_object, var_453_object, var_454_string, var_455_bool, var_450_object, var_451_object);
	TaskReturn();
	bool var_442_bool;
	var_439_object->IsDialogEnd(var_442_bool);
	
	for(;;) {
		var_483_bool = !var_442_bool; //@nz
		if(var_483_bool == 0) goto Label_3453;
		@sync();
		var_439_object->IsDialogEnd(var_442_bool);
	}
	
Label_3453:
	object var_484_object;
	var_433_object = var_484_object;
	func_4152();
	@StopDialog(var_439_object);
	var_439_object->GetReturnValue(-1);
	int var_441_int = var_432_int;
}
EMIT "Stack[-4] = 0";


void func_4174(void)
{
	bool var_33_bool;
	func_4256(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_2640(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_333_object, object var_334_object)
{
	var_0_object = var_334_object;
	var_1_object = var_333_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_340_bool;
		func_4729(var_1_object);
		if(var_340_bool != 0) {
			func_2785(var_334_object, "Neutral");
			var_0_object->SetMessage(6853); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(6854, 7890, 7560); //@t
			var_0_object->AddReply(7262, 7890, 8004); //@t
		} else {
					func_2785(var_334_object, "Neutral");
					var_0_object->SetMessage(6855); //@t
					var_0_object->ClearReplies(); //@t
					bool var_368_bool = false;
					bool var_369_bool;
					func_4741(var_1_object);
					if(var_369_bool != 0) {
						bool var_375_bool;
						func_4789(var_1_object);
						if(var_375_bool != 0)
							var_368_bool = true;
					}
					if(var_368_bool != 0)
						var_0_object->AddReply(6856, 7563, 7562); //@t
					bool var_384_bool = false;
					bool var_385_bool;
					func_4753(var_1_object);
					if(var_385_bool != 0) {
						bool var_391_bool;
						func_4801(var_1_object);
						if(var_391_bool != 0)
							var_384_bool = true;
					}
					if(var_384_bool != 0)
						var_0_object->AddReply(6859, 7566, 7565); //@t
					bool var_400_bool = false;
					bool var_401_bool;
					func_4765(var_1_object);
					if(var_401_bool != 0) {
						bool var_407_bool;
						func_4777(var_1_object);
						if(var_407_bool != 0)
							var_400_bool = true;
					}
					if(var_400_bool != 0)
						var_0_object->AddReply(6861, 7568, 7567); //@t
					bool var_416_bool;
					func_4849(var_1_object);
					if(var_416_bool != 0)
						var_0_object->AddReply(11392, 12590, 12589); //@t
					var_0_object->AddReply(7528, -1, 8310); //@t
		}
	}
	for(;;) {
		bool var_358_bool;
		func_4256(var_358_bool);
		if(var_358_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4156(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2784;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2784:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xa54";


// @pe
void func_4945(bool var_275_bool)
{
	int var_277_int;
	func_4191(var_277_int, "KnowStamatins");
	if(var_277_int == 1)
		var_275_bool = true;
	var_275_bool = false;
}


// @pe
void func_4693(bool var_259_bool)
{
	int var_261_int;
	func_4191(var_261_int, "ood1Eva5");
	if(var_261_int == 0) {
		var_259_bool = true;
		return 0;
	}
	var_259_bool = false;
}


void func_4181(cvector var_82_cvector, cvector var_83_cvector)
{
	float var_86_float = sqrt(var_83_cvector | var_83_cvector);
	if(var_86_float < 0.000001)
		var_82_cvector = [0.0, 0.0, 0.0];
	var_82_cvector = var_83_cvector / var_86_float;
}


// @pe
void func_4438(void)
{
	@SetVariable("KnowGorny", 1);
}


// @pe
void func_4444(void)
{
	@SetVariable("KnowSobor", 1);
}


void func_4957(object var_80_object)
{
	object var_82_object;
	@GetDiaryRoot(var_82_object);
	if(!var_82_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_80_object = false;
	}
	var_82_object = var_80_object;
}
EMIT "Stack[-1] = 0";


void func_4191(int var_61_int, string var_62_string)
{
	int var_64_int;
	@GetVariable(var_62_string, var_64_int);
	var_64_int = var_61_int;
}


// @pe
void func_4705(bool var_269_bool)
{
	int var_271_int;
	func_4191(var_271_int, "ood1Eva6");
	if(var_271_int == 0) {
		var_269_bool = true;
		return 0;
	}
	var_269_bool = false;
}


// @pe
void func_4450(object var_59_object)
{
	object var_63_object;
	func_4999(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	func_5016(var_60_object, "pt_map_theater", (float)2);
	object var_83_object;
	func_4999(var_83_object);
	var_59_object->ShowMap(var_83_object);
}


void func_4196(object var_99_object, string var_100_string)
{
	object var_103_object;
	@GetMainOutdoorScene(var_103_object);
	object var_104_object;
	@AddBlankActor(var_104_object, var_103_object, var_100_string, (var_100_string + ".bin"));
	var_104_object = var_99_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4970(bool var_71_bool, object var_72_object, int var_73_int)
{
	object var_80_object;
	func_4957(var_80_object);
	object var_77_object;
	var_80_object = var_77_object;
	object var_78_object;
	var_77_object->Find(var_73_int, var_78_object);
	if(!var_78_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_73_int);
		var_71_bool = false;
	}
	var_78_object->AddChild(var_72_object);
	@SetVariable("player_diary", 1);
	int var_79_int;
	var_72_object->GetCategory(var_79_int);
	@SetDiarySection(var_79_int);
	var_71_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_4717(bool var_165_bool)
{
	int var_167_int;
	func_4191(var_167_int, "ood1EvaIntro2");
	if(var_167_int == 0) {
		var_165_bool = true;
		return 0;
	}
	var_165_bool = false;
}


// @pe
void func_622(object var_2_object, string var_140_string)
{
	bool var_141_bool;
	func_4256(var_141_bool);
	if(!var_141_bool) //@nz
		return 0;
	if(var_140_string == var_2_object)
		return 0;
	string var_144_string;
	func_4156(var_144_string);
	var_2_object = var_144_string;
}


void func_4207(string var_38_string, bool var_39_bool)
{
	object var_41_object;
	@FindActor(var_41_object, var_38_string);
	if(!var_41_object) //@nz
		@Trace(("Door " + var_38_string) + " not found");
	var_41_object->SetProperty("locked", var_39_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_567_object, object var_568_object)
{
	var_0_object = var_568_object;
	var_1_object = var_567_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_574_bool = false;
		bool var_575_bool;
		func_4861(var_1_object);
		if(var_575_bool != 0) {
			bool var_581_bool;
			func_4885(var_1_object);
			if(var_581_bool != 0)
				var_574_bool = true;
		}
		if(var_574_bool != 0) {
			object var_587_object; object var_588_object;
			var_587_object = var_1_object;
			var_588_object = var_0_object;
			func_4579();
			func_204(var_568_object, "Neutral");
			var_0_object->SetMessage(3926); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(3927, 4276, 4275); //@t
			var_0_object->AddReply(3929, 4278, 4277); //@t
		} else {
					func_204(var_568_object, "Neutral");
					var_0_object->SetMessage(13718); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13719, -1, 14985); //@t
		}
	}
	for(;;) {
		bool var_603_bool;
		func_4256(var_603_bool);
		if(var_603_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4156(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_203;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_203:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x74";


void func_4466(void)
{
	object var_44_object;
	func_4999(var_44_object);
	object var_43_object;
	var_44_object = var_43_object;
	float var_55_float;
	func_4223(var_55_float);
	var_43_object->AddMark("d1q01EvaAboutMark", "pt_map_theater", 1, 8636, var_55_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4729(bool var_202_bool)
{
	int var_204_int;
	func_4191(var_204_int, "ood2Eva1");
	if(var_204_int == 0) {
		var_202_bool = true;
		return 0;
	}
	var_202_bool = false;
}


void func_4223(float var_57_float)
{
	float var_59_float;
	@GetGameTime(var_59_float);
	var_59_float = var_57_float;
}


void func_4482(void)
{
	object var_136_object;
	func_4999(var_136_object);
	object var_135_object;
	var_136_object = var_135_object;
	float var_141_float;
	func_4223(var_141_float);
	var_135_object->AddMark("d1EvaAboutKapella", "pt_map_kapella", 3, 8637, var_141_float);
	float var_146_float;
	func_4223(var_146_float);
	var_135_object->AddMark("d1EvaAboutKaterina", "pt_map_katerina", 3, 8639, var_146_float);
}
EMIT "Stack[-1] = 0";


void func_4228(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


// @pe
void func_4741(bool var_235_bool)
{
	int var_237_int;
	func_4191(var_237_int, "ood2Eva2");
	if(var_237_int == 0) {
		var_235_bool = true;
		return 0;
	}
	var_235_bool = false;
}


void func_3718(object var_0_object, int var_487_int, object var_488_object)
{
	var_0_object = var_488_object;
	bool var_498_bool; object var_499_object;
	var_488_object = var_499_object;
	func_4096(var_498_bool, var_499_object);
	if(!var_498_bool) { //@nz
		var_487_int = -2;
		return 8;
	}
	object var_494_object;
	@CreateDialog(var_494_object);
	int var_501_int;
	func_4252(var_501_int);
	var_494_object->SetNPCName(var_501_int);
	string var_502_string;
	func_4254(var_502_string);
	var_494_object->SetPhoto(var_502_string);
	int var_503_int;
	func_5049(var_503_int);
	var_494_object->SetPlayerName(var_503_int);
	bool var_495_bool;
	@IsOverrideActive(var_495_bool);
	if(var_495_bool != 0) {
		var_487_int = -2;
		return 8;
	}
	@DoDialog(var_494_object);
	object var_505_object; object var_506_object;
	var_488_object = var_505_object;
	var_494_object = var_506_object;
	TaskCall(13);
	func_3781(var_507_object, var_508_object, var_509_string, var_510_bool, var_505_object, var_506_object);
	TaskReturn();
	bool var_497_bool;
	var_494_object->IsDialogEnd(var_497_bool);
	
	for(;;) {
		var_545_bool = !var_497_bool; //@nz
		if(var_545_bool == 0) goto Label_3770;
		@sync();
		var_494_object->IsDialogEnd(var_497_bool);
	}
	
Label_3770:
	object var_546_object;
	var_488_object = var_546_object;
	func_4152();
	@StopDialog(var_494_object);
	var_494_object->GetReturnValue(-1);
	int var_496_int = var_487_int;
}
EMIT "Stack[-4] = 0";


void func_4999(object var_46_object)
{
	object var_49_object; object var_50_object;
	@GetMainOutdoorScene(var_49_object);
	if(var_49_object == null) {
		@Trace("Can't find main outdoor scene");
		var_50_object = null;
		var_50_object = var_46_object;
	}
	var_49_object->GetMap(var_50_object);
	var_50_object = var_46_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3464(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_450_object, object var_451_object)
{
	var_0_object = var_451_object;
	var_3_object = false;
	if(1 != 0) {
		func_3527(var_451_object, "Neutral");
		var_0_object->SetMessage(9840); //@t
		var_0_object->ClearReplies(); //@t
		bool var_463_bool;
		func_4909(var_450_object);
		if(var_463_bool != 0)
			var_0_object->AddReply(9841, 10821, 10840); //@t
		var_0_object->AddReply(11259, -1, 12449); //@t
		goto Label_3497;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd8c";
	}
Label_3497:
	bool var_475_bool;
	func_4256(var_475_bool);
	if(var_475_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4156(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3526;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3526:
		return 0;

	}
	
}


// @pe
void func_4237(bool var_32_bool, int var_33_int)
{
	int var_34_int;
	func_4228(var_34_int);
	var_32_bool = var_34_int == var_33_int;
}


// @pe
void func_4753(bool var_251_bool)
{
	int var_253_int;
	func_4191(var_253_int, "ood2Eva3");
	if(var_253_int == 0) {
		var_251_bool = true;
		return 0;
	}
	var_251_bool = false;
}


void func_4243(bool var_618_bool)
{
	func_4156("No");
	bool var_620_bool;
	@lshWaitForAnimEnd(var_620_bool);
	var_620_bool = var_618_bool;
}


void func_5016(object var_109_object, string var_110_string, float var_111_float)
{
	object var_119_object;
	@GetMainOutdoorScene(var_119_object);
	if(var_119_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_117_cvector;
	cvector var_118_cvector;
	bool var_120_bool;
	var_119_object->GetLocator(var_110_string, var_120_bool, var_117_cvector, var_118_cvector);
	if(!var_120_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_110_string) + " doesnt exist");
	var_119_object->GetMap(var_109_object);
	if(var_109_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_130_float = GetByIndex(var_117_cvector, 0);
	var_131_float = GetByIndex(var_117_cvector, 2);
	var_109_object->SetMapParams(var_130_float, var_131_float, var_111_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4507(void)
{
	@SetVariable("KnowStation", 1);
}


void func_4252(int var_98_int)
{
	var_98_int = 2858;
}


// @pe
void func_4765(bool var_267_bool)
{
	int var_269_int;
	func_4191(var_269_int, "ood2Eva4");
	if(var_269_int == 0) {
		var_267_bool = true;
		return 0;
	}
	var_267_bool = false;
}


void func_4254(string var_99_string)
{
	var_99_string = "ui/NPC_Eva.png";
}


void func_4256(bool var_33_bool)
{
	var_33_bool = true;
}


// @pe
void func_4513(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_4258(void)
{
	@SetVariable("ood1Eva3", 1);
}


void func_421(object var_0_object, int var_46_int, object var_47_object)
{
	var_0_object = var_47_object;
	bool var_57_bool; object var_58_object;
	var_47_object = var_58_object;
	func_4096(var_57_bool, var_58_object);
	if(!var_57_bool) { //@nz
		var_46_int = -2;
		return 8;
	}
	object var_53_object;
	@CreateDialog(var_53_object);
	int var_98_int;
	func_4252(var_98_int);
	var_53_object->SetNPCName(var_98_int);
	string var_99_string;
	func_4254(var_99_string);
	var_53_object->SetPhoto(var_99_string);
	int var_100_int;
	func_5049(var_100_int);
	var_53_object->SetPlayerName(var_100_int);
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	@DoDialog(var_53_object);
	object var_109_object; object var_110_object;
	var_47_object = var_109_object;
	var_53_object = var_110_object;
	TaskCall(5);
	func_484(var_111_object, var_112_object, var_113_string, var_114_bool, var_109_object, var_110_object);
	TaskReturn();
	bool var_56_bool;
	var_53_object->IsDialogEnd(var_56_bool);
	
	for(;;) {
		var_192_bool = !var_56_bool; //@nz
		if(var_192_bool == 0) goto Label_473;
		@sync();
		var_53_object->IsDialogEnd(var_56_bool);
	}
	
Label_473:
	object var_193_object;
	var_47_object = var_193_object;
	func_4152();
	@StopDialog(var_53_object);
	var_53_object->GetReturnValue(-1);
	int var_55_int = var_46_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4519(void)
{
	@SetVariable("ood1EvaIntro1", 1);
}


// @pe
void func_4264(void)
{
	@SetVariable("KnowKaterina", 1);
}


// @pe
void func_4777(bool var_273_bool)
{
	int var_275_int;
	func_4191(var_275_int, "d2q02");
	if(var_275_int == 1000)
		var_273_bool = true;
	var_273_bool = false;
}


// @pe
void func_4525(void)
{
	@SetVariable("KnowJulia", 1);
}


// @pe
void func_4270(void)
{
	@SetVariable("KnowKapella", 1);
}


// @pe
void func_4531(void)
{
	@SetVariable("KnowNevod", 1);
}


// @pe
void func_4276(void)
{
	@SetVariable("KnowTheater", 1);
}


// @pe
void func_4789(bool var_241_bool)
{
	int var_243_int;
	func_4191(var_243_int, "d2q02");
	if(var_243_int == 3)
		var_241_bool = true;
	var_241_bool = false;
}


void func_5049(int var_100_int)
{
	int var_102_int;
	@GetVariable("player", var_102_int);
	if(var_102_int == 0) {
		var_100_int = 200001;
		return 2;
	EMIT "GOTO 0x13c8";
	}
	if(var_102_int == 1) {
		var_100_int = 200002;
		return 2;
	}
	var_100_int = 200003;
}


// @pe
void func_4282(void)
{
	@SetVariable("KnowSquareMost", 1);
}


// @pe
void func_4537(void)
{
	@SetVariable("KnowViktor", 1);
}


// @pe
void func_1469(object var_2_object, string var_191_string)
{
	bool var_192_bool;
	func_4256(var_192_bool);
	if(!var_192_bool) //@nz
		return 0;
	if(var_191_string == var_2_object)
		return 0;
	string var_195_string;
	func_4156(var_195_string);
	var_2_object = var_195_string;
}


// @pe
void func_4543(void)
{
	@SetVariable("ood1Eva4", 1);
}


// @pe
void func_4288(void)
{
	@SetVariable("ood1Eva5", 1);
}


// @pe
void func_4801(bool var_257_bool)
{
	int var_259_int;
	func_4191(var_259_int, "d2q02");
	if(var_259_int == 5)
		var_257_bool = true;
	var_257_bool = false;
}


// @pe
void func_3781(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_505_object, object var_506_object)
{
	var_0_object = var_506_object;
	var_1_object = var_505_object;
	var_3_object = false;
	if(1 != 0) {
		func_3853(var_506_object, "Neutral");
		var_0_object->SetMessage(11255); //@t
		var_0_object->ClearReplies(); //@t
		bool var_518_bool = false;
		bool var_519_bool;
		func_4933(var_1_object);
		if(var_519_bool != 0) {
			bool var_525_bool;
			func_4921(var_1_object);
			if(var_525_bool != 0)
				var_518_bool = true;
		}
		if(var_518_bool != 0)
			var_0_object->AddReply(11257, 12448, 12447); //@t
		var_0_object->AddReply(11256, -1, 12446); //@t
		goto Label_3823;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xec9";
	}
Label_3823:
	bool var_537_bool;
	func_4256(var_537_bool);
	if(var_537_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4156(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3852;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3852:
		return 0;

	}
	
}


// @pe
void func_4294(void)
{
	@SetVariable("ood1Eva6", 1);
}


// @pe
void func_4549(void)
{
	@SetVariable("ood1EvaIntro2", 1);
}


// @pe
void func_3527(object var_2_object, string var_42_string)
{
	bool var_43_bool;
	func_4256(var_43_bool);
	if(!var_43_bool) //@nz
		return 0;
	if(var_42_string == var_2_object)
		return 0;
	string var_46_string;
	func_4156(var_46_string);
	var_2_object = var_46_string;
}


void func_5066(void)
{
	@Trace("Adding diary entry");
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 11, 2, 3095);
	bool var_71_bool; object var_72_object;
	var_66_object = var_72_object;
	func_4970(var_71_bool, var_72_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4555(void)
{
	@SetVariable("ood1Eva1", 1);
}


// @pe
void func_204(object var_2_object, string var_55_string)
{
	bool var_56_bool;
	func_4256(var_56_bool);
	if(!var_56_bool) //@nz
		return 0;
	if(var_55_string == var_2_object)
		return 0;
	string var_59_string;
	func_4156(var_59_string);
	var_2_object = var_59_string;
}


// @pe
void func_4300(object var_81_object)
{
	object var_85_object;
	func_4999(var_85_object);
	object var_82_object;
	var_85_object = var_82_object;
	func_5016(var_82_object, "pt_map_georg", (float)2);
	object var_105_object;
	func_4999(var_105_object);
	var_81_object->ShowMap(var_105_object);
}


// @pe
void func_4813(bool var_218_bool)
{
	int var_220_int;
	func_4191(var_220_int, "ood1Eva1");
	if(var_220_int == 0) {
		var_218_bool = true;
		return 0;
	}
	var_218_bool = false;
}


// @pe
void func_4561(void)
{
	@SetVariable("ood1Eva2", 1);
}


// @pe
void func_4567(void)
{
	@SetVariable("KnowEva", 1);
}


// @pe
void func_4825(bool var_237_bool)
{
	int var_239_int;
	func_4191(var_239_int, "ood1Eva4");
	if(var_239_int == 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


void func_5082(void)
{
	@Trace("Adding diary entry");
	object var_91_object;
	@CreateDiaryEntry(var_91_object, 57, 2, 12139);
	bool var_96_bool; object var_97_object;
	var_91_object = var_97_object;
	func_4970(var_96_bool, var_97_object, 11);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4316(void)
{
	@SetVariable("KnowUzly", 1);
}


// @pe
void func_4573(void)
{
	@SetVariable("KnowGeorg", 1);
}


// @pe
void func_2785(object var_2_object, string var_210_string)
{
	bool var_211_bool;
	func_4256(var_211_bool);
	if(!var_211_bool) //@nz
		return 0;
	if(var_210_string == var_2_object)
		return 0;
	string var_214_string;
	func_4156(var_214_string);
	var_2_object = var_214_string;
}


// @pe
void func_4322(void)
{
	@SetVariable("ood2Eva1", 1);
}


// @pe
void func_4579(void)
{
	@SetVariable("ood6Eva1", 1);
}


// @pe
void func_484(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_109_object, object var_110_object)
{
	var_0_object = var_110_object;
	var_1_object = var_109_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_116_bool;
		func_4669(var_1_object);
		if(var_116_bool != 0) {
			object var_122_object; object var_123_object;
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_4567();
			func_622(var_110_object, "Neutral");
			var_0_object->SetMessage(4496); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(4501, 4905, 4904); //@t
			var_0_object->AddReply(4517, 4923, 4922); //@t
			var_0_object->AddReply(4521, 4923, 4928); //@t
		} else {
					bool var_159_bool;
					func_4717(var_1_object);
					if(var_159_bool == 0) goto Label_560;
					object var_165_object; object var_166_object;
					var_165_object = var_1_object;
					var_166_object = var_0_object;
					func_4567();
					func_622(var_110_object, "Neutral");
					var_0_object->SetMessage(4590); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(4591, 5013, 5012); //@t
					var_0_object->AddReply(4607, 5015, 5032); //@t
					var_0_object->AddReply(4608, 5015, 5034); //@t
		}
	}
Label_592:
	for(;;) {
		bool var_151_bool;
		func_4256(var_151_bool);
		if(var_151_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4156(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_621;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_621:
			return 0;

		}

	}
	
Label_560:
	object var_178_object; object var_179_object;
	var_178_object = var_1_object;
	var_179_object = var_0_object;
	func_4444();
	object var_182_object; object var_183_object;
	var_182_object = var_1_object;
	var_183_object = var_0_object;
	func_4567();
	func_622(var_110_object, "Neutral");
	var_0_object->SetMessage(4568); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(4569, 4989, 4988); //@t
	var_0_object->AddReply(4586, 5007, 5006); //@t
	goto Label_592;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1e8";


// @pe
void func_4837(bool var_207_bool)
{
	int var_209_int;
	func_4191(var_209_int, "ood1Eva2");
	if(var_209_int == 0) {
		var_207_bool = true;
		return 0;
	}
	var_207_bool = false;
}


// @pe
void func_4328(void)
{
	@SetVariable("ood2Eva2", 1);
}


// @pe
void func_4585(void)
{
	@SetVariable("KnowMaria", 1);
}


void func_5098(void)
{
}


// @pe
void func_5099(object var_31_object)
{
	bool var_32_bool;
	func_4237(var_32_bool, 1);
	if(var_32_bool != 0) {
		int var_40_int;
		func_4191(var_40_int, "d1q01");
		if(var_40_int == 0) {
			int var_46_int; object var_47_object;
			var_31_object = var_47_object;
			TaskCall(4);
			func_421(var_48_object, var_46_int, var_47_object);
			TaskReturn();
			return 0;
		}
		int var_194_int; object var_195_object;
		var_31_object = var_195_object;
		TaskCall(6);
		func_1266(var_196_object, var_194_int, var_195_object);
		TaskReturn();
		return 0;
	}
	bool var_313_bool;
	func_4237(var_313_bool, 2);
	if(var_313_bool != 0) {
		int var_315_int; object var_316_object;
		var_31_object = var_316_object;
		TaskCall(8);
		func_2577(var_317_object, var_315_int, var_316_object);
		TaskReturn();
		return 0;
	}
	bool var_430_bool;
	func_4237(var_430_bool, 3);
	if(var_430_bool != 0) {
		int var_432_int; object var_433_object;
		var_31_object = var_433_object;
		TaskCall(10);
		func_3401(var_434_object, var_432_int, var_433_object);
		TaskReturn();
		return 0;
	}
	bool var_485_bool;
	func_4237(var_485_bool, 4);
	if(var_485_bool != 0) {
		int var_487_int; object var_488_object;
		var_31_object = var_488_object;
		TaskCall(12);
		func_3718(var_489_object, var_487_int, var_488_object);
		TaskReturn();
		return 0;
	}
	bool var_547_bool;
	func_4237(var_547_bool, 6);
	if(var_547_bool != 0) {
		int var_549_int; object var_550_object;
		var_31_object = var_550_object;
		TaskCall(2);
		func_49(var_551_object, var_549_int, var_550_object);
		TaskReturn();
		return 0;
	}
	bool var_618_bool;
	func_4243(var_618_bool);
}


// @pe
void func_4334(void)
{
	@SetVariable("ood2Eva3", 1);
}


void func_4079(bool var_31_bool, object var_32_object)
{
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_41_float = GetByIndex(var_39_cvector, 0);
	var_42_float = GetByIndex(var_39_cvector, 2);
	bool var_40_bool;
	@Rotate(var_41_float, var_42_float, var_40_bool);
	var_40_bool = var_31_bool;
}


// @pe
void func_4591(void)
{
	@SetVariable("KnowMark", 1);
}


// @pe
void func_4849(bool var_282_bool)
{
	int var_284_int;
	func_4191(var_284_int, "d2q02");
	if(var_284_int == 0) {
		var_282_bool = true;
		return 0;
	}
	var_282_bool = false;
}


void func_1266(object var_0_object, int var_194_int, object var_195_object)
{
	var_0_object = var_195_object;
	bool var_205_bool; object var_206_object;
	var_195_object = var_206_object;
	func_4096(var_205_bool, var_206_object);
	if(!var_205_bool) { //@nz
		var_194_int = -2;
		return 8;
	}
	object var_201_object;
	@CreateDialog(var_201_object);
	int var_208_int;
	func_4252(var_208_int);
	var_201_object->SetNPCName(var_208_int);
	string var_209_string;
	func_4254(var_209_string);
	var_201_object->SetPhoto(var_209_string);
	int var_210_int;
	func_5049(var_210_int);
	var_201_object->SetPlayerName(var_210_int);
	bool var_202_bool;
	@IsOverrideActive(var_202_bool);
	if(var_202_bool != 0) {
		var_194_int = -2;
		return 8;
	}
	@DoDialog(var_201_object);
	object var_212_object; object var_213_object;
	var_195_object = var_212_object;
	var_201_object = var_213_object;
	TaskCall(7);
	func_1329(var_214_object, var_215_object, var_216_string, var_217_bool, var_212_object, var_213_object);
	TaskReturn();
	bool var_204_bool;
	var_201_object->IsDialogEnd(var_204_bool);
	
	for(;;) {
		var_311_bool = !var_204_bool; //@nz
		if(var_311_bool == 0) goto Label_1318;
		@sync();
		var_201_object->IsDialogEnd(var_204_bool);
	}
	
Label_1318:
	object var_312_object;
	var_195_object = var_312_object;
	func_4152();
	@StopDialog(var_201_object);
	var_201_object->GetReturnValue(-1);
	int var_203_int = var_194_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4340(void)
{
	@SetVariable("ood2Eva4", 1);
}


// @pe
void func_4597(object var_108_object)
{
	object var_112_object;
	func_4999(var_112_object);
	object var_109_object;
	var_112_object = var_109_object;
	func_5016(var_109_object, "pt_map_andrei", (float)2);
	object var_132_object;
	func_4999(var_132_object);
	var_108_object->ShowMap(var_132_object);
}


// @pe
void func_4346(void)
{
	@SetVariable("KnowRebro", 1);
}


void func_4091(bool var_30_bool)
{
	bool var_32_bool;
	@IsLoaded(var_32_bool);
	var_32_bool = var_30_bool;
}


// @pe
void func_4861(bool var_37_bool)
{
	int var_39_int;
	func_4191(var_39_int, "d6q01");
	if(var_39_int == 1)
		var_37_bool = true;
	var_37_bool = false;
}


