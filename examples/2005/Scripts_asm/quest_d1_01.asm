GlobalVarCount = 0

Strings:
	W:d1q01_trigger
	W:d1q01_trigger.xml
	W:warehouse_rubin
	W:norubin
	W:place_masks
	W:pt_d1q01_birdmask
	W:pers_birdmask
	W:d1q01_birdmask.xml
	W:pt_d1q01_whitemask
	W:pers_whitemask
	W:d1q01_whitemask.xml
	W:remove_masks
	A:Remove
	W:cutscene_end
	W:pt_d1q01_morlok
	W:pers_morlok
	W:d1q01_morlok.xml
	W:pt_d1q01_worker
	W:pers_worker
	W:d1q01_worker.xml
	W:remove_cutscene
	W:attack
	W:place_patrol
	W:pt_d1q01_patrol1
	W:pers_patrool
	W:d1q01_patrol.xml
	W:pt_d1q01_patrol2
	W:place_morlok_run
	W:pt_d1q01_morlok_run_path
	W:d1q01_morlok_run.xml
	W:place_rubin
	W:cot_viktor
	W:pt_d1q01_rubin
	W:NPC_Rubin
	W:d1q01_rubin.xml
	W:cleanup
	W:d1q01
	W:fail
	W:completed
	W:icot_eva@door1
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:AddStationaryActor
	W:Door 
	W: not found
	W:locked
	A:SetProperty
// @pool_raw:640031007100300031005f0074007200690067006700650072000000640031007100300031005f0074007200690067006700650072002e0078006d006c000000770061007200650068006f007500730065005f0072007500620069006e0000006e006f0072007500620069006e00000070006c006100630065005f006d00610073006b0073000000700074005f00640031007100300031005f0062006900720064006d00610073006b00000070006500720073005f0062006900720064006d00610073006b000000640031007100300031005f0062006900720064006d00610073006b002e0078006d006c000000700074005f00640031007100300031005f00770068006900740065006d00610073006b00000070006500720073005f00770068006900740065006d00610073006b000000640031007100300031005f00770068006900740065006d00610073006b002e0078006d006c000000720065006d006f00760065005f006d00610073006b007300000052656d6f7665006300750074007300630065006e0065005f0065006e0064000000700074005f00640031007100300031005f006d006f0072006c006f006b00000070006500720073005f006d006f0072006c006f006b000000640031007100300031005f006d006f0072006c006f006b002e0078006d006c000000700074005f00640031007100300031005f0077006f0072006b0065007200000070006500720073005f0077006f0072006b00650072000000640031007100300031005f0077006f0072006b00650072002e0078006d006c000000720065006d006f00760065005f006300750074007300630065006e0065000000610074007400610063006b00000070006c006100630065005f0070006100740072006f006c000000700074005f00640031007100300031005f0070006100740072006f006c003100000070006500720073005f0070006100740072006f006f006c000000640031007100300031005f0070006100740072006f006c002e0078006d006c000000700074005f00640031007100300031005f0070006100740072006f006c003200000070006c006100630065005f006d006f0072006c006f006b005f00720075006e000000700074005f00640031007100300031005f006d006f0072006c006f006b005f00720075006e005f0070006100740068000000640031007100300031005f006d006f0072006c006f006b005f00720075006e002e0078006d006c00000070006c006100630065005f0072007500620069006e00000063006f0074005f00760069006b0074006f0072000000700074005f00640031007100300031005f0072007500620069006e0000004e00500043005f0052007500620069006e000000640031007100300031005f0072007500620069006e002e0078006d006c00000063006c00650061006e007500700000006400310071003000310000006600610069006c00000063006f006d0070006c0065007400650064000000690063006f0074005f00650076006100400064006f006f007200310000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000041646453746174696f6e6172794163746f720044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f706572747900

Import:
	GetMainOutdoorScene (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	Hold (0 args)
	Trace (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object, object, object, object, object, bool) Params = 0
		EVENT_26 Op = 0x15 Vars = (string)


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(object, object, string, string)
0x4: Stack[-5] = Stack[-3]
0x5: Stack[-2] = "d1q01_trigger" // @poff=0
0x6: Stack[-1] = "d1q01_trigger.xml" // @poff=28
0x7: Call2 0x111

0x8: Stack[2 + Tasks[-1].StackPointer] = Stack[-4]
0x9: Pop(4)
0xa: Push("warehouse_rubin") // @poff=64
0xb: @ GetSceneByName(Stack[-2], Stack[-1])
0xc: Pop(1)
0xd: Push("norubin") // @poff=96
0xe: @ Trigger(Stack[-2], Stack[-1])
0xf: Pop(1)
0x10: @ Hold()
0x11: Pop(0)
0x12: GOTO 0x10

0x13: Return(); Pop(2)

0x14: Stack[-1] = 0
0x15: PushEmpty(object, object, object, object, object, int, object, object, object, object, object, int)
0x16: @ Trace(Stack[-13])
0x17: Pop(0)
0x18: Push("place_masks") // @poff=112
0x19: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x1a: IF (Stack[-1] == 0) GOTO 0x2f; Pop(1)

0x1b: @ GetMainOutdoorScene(Stack[-6])
0x1c: Pop(0)
0x1d: PushEmpty(object, object, string, string, string)
0x1e: Stack[-11] = Stack[-4]
0x1f: Stack[-3] = "pt_d1q01_birdmask" // @poff=136
0x20: Stack[-2] = "pers_birdmask" // @poff=172
0x21: Stack[-1] = "d1q01_birdmask.xml" // @poff=200
0x22: Call2 0x12b

0x23: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x24: Pop(5)
0x25: PushEmpty(object, object, string, string, string)
0x26: Stack[-11] = Stack[-4]
0x27: Stack[-3] = "pt_d1q01_whitemask" // @poff=238
0x28: Stack[-2] = "pers_whitemask" // @poff=276
0x29: Stack[-1] = "d1q01_whitemask.xml" // @poff=306
0x2a: Call2 0x12b

0x2b: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x2c: Pop(5)
0x2d: Stack[-6] = 0
0x2e: GOTO 0xbb

0x2f: Push("remove_masks") // @poff=346
0x30: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x31: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x32: @@@ Remove(); Obj=0 // @poff=372
0x33: Pop(0)
0x34: @@@ Remove(); Obj=1 // @poff=372
0x35: Pop(0)
0x36: GOTO 0xbb

0x37: Push("cutscene_end") // @poff=379
0x38: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x39: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x3a: @ GetMainOutdoorScene(Stack[-5])
0x3b: Pop(0)
0x3c: PushEmpty(object, object, string, string, string)
0x3d: Stack[-10] = Stack[-4]
0x3e: Stack[-3] = "pt_d1q01_morlok" // @poff=405
0x3f: Stack[-2] = "pers_morlok" // @poff=437
0x40: Stack[-1] = "d1q01_morlok.xml" // @poff=461
0x41: Call2 0x119

0x42: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x43: Pop(5)
0x44: PushEmpty(object, object, string, string, string)
0x45: Stack[-10] = Stack[-4]
0x46: Stack[-3] = "pt_d1q01_worker" // @poff=495
0x47: Stack[-2] = "pers_worker" // @poff=527
0x48: Stack[-1] = "d1q01_worker.xml" // @poff=551
0x49: Call2 0x119

0x4a: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x4b: Pop(5)
0x4c: Push( Stack[8 + Tasks[-1].StackPointer] )
0x4d: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4e: PushEmpty()
0x4f: Call2 0xcc

0x50: Pop(0)
0x51: Stack[-5] = 0
0x52: GOTO 0xbb

0x53: Push("remove_cutscene") // @poff=585
0x54: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x55: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x56: PushEmpty()
0x57: Call2 0xcc

0x58: Pop(0)
0x59: GOTO 0xbb

0x5a: Push("attack") // @poff=617
0x5b: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x5d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5e: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x5f: Push("attack") // @poff=617
0x60: @ Trigger(Stack[-3]T, Stack[-1])
0x61: Pop(1)
0x62: Push( Stack[4 + Tasks[-1].StackPointer] )
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: Push("attack") // @poff=617
0x65: @ Trigger(Stack[-4]T, Stack[-1])
0x66: Pop(1)
0x67: GOTO 0xbb

0x68: Push("place_patrol") // @poff=631
0x69: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x6a: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x6b: @ GetMainOutdoorScene(Stack[-4])
0x6c: Pop(0)
0x6d: PushEmpty(object, object, string, string, string)
0x6e: Stack[-9] = Stack[-4]
0x6f: Stack[-3] = "pt_d1q01_patrol1" // @poff=657
0x70: Stack[-2] = "pers_patrool" // @poff=691
0x71: Stack[-1] = "d1q01_patrol.xml" // @poff=717
0x72: Call2 0x119

0x73: Stack[5 + Tasks[-1].StackPointer] = Stack[-5]
0x74: Pop(5)
0x75: PushEmpty(object, object, string, string, string)
0x76: Stack[-9] = Stack[-4]
0x77: Stack[-3] = "pt_d1q01_patrol2" // @poff=751
0x78: Stack[-2] = "pers_patrool" // @poff=691
0x79: Stack[-1] = "d1q01_patrol.xml" // @poff=717
0x7a: Call2 0x119

0x7b: Stack[6 + Tasks[-1].StackPointer] = Stack[-5]
0x7c: Pop(5)
0x7d: Stack[-4] = 0
0x7e: GOTO 0xbb

0x7f: Push("place_morlok_run") // @poff=785
0x80: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x81: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x82: @ GetMainOutdoorScene(Stack[-3])
0x83: Pop(0)
0x84: PushEmpty(object, object, string, string, string)
0x85: Stack[-8] = Stack[-4]
0x86: Stack[-3] = "pt_d1q01_morlok_run_path" // @poff=819
0x87: Stack[-2] = "pers_morlok" // @poff=437
0x88: Stack[-1] = "d1q01_morlok_run.xml" // @poff=869
0x89: Call2 0x119

0x8a: Pop(5)
0x8b: Stack[-3] = 0
0x8c: GOTO 0xbb

0x8d: Push("place_rubin") // @poff=911
0x8e: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x90: Push("cot_viktor") // @poff=935
0x91: @ GetSceneByName(Stack[-3], Stack[-1])
0x92: Pop(1)
0x93: PushEmpty(object, object, string, string, string)
0x94: Stack[-7] = Stack[-4]
0x95: Stack[-3] = "pt_d1q01_rubin" // @poff=957
0x96: Stack[-2] = "NPC_Rubin" // @poff=987
0x97: Stack[-1] = "d1q01_rubin.xml" // @poff=1007
0x98: Call2 0x119

0x99: Stack[7 + Tasks[-1].StackPointer] = Stack[-5]
0x9a: Pop(5)
0x9b: Stack[-2] = 0
0x9c: GOTO 0xbb

0x9d: Push("cleanup") // @poff=1039
0x9e: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x9f: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xa0: Push("d1q01") // @poff=1055
0xa1: @ GetVariable(Stack[-1], Stack[-2])
0xa2: Pop(1)
0xa3: Push((int) 1000)
0xa4: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa5: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa6: PushEmpty()
0xa7: Call2 0xbc

0xa8: Pop(0)
0xa9: GOTO 0xad

0xaa: PushEmpty()
0xab: Call2 0xdd

0xac: Pop(0)
0xad: GOTO 0xbb

0xae: Push("fail") // @poff=1067
0xaf: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0xbc

0xb3: Pop(0)
0xb4: GOTO 0xbb

0xb5: Push("completed") // @poff=1077
0xb6: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0xc4

0xba: Pop(0)
0xbb: Return(); Pop(12)

0xbc: Push("d1q01") // @poff=1055
0xbd: Push((int) -1)
0xbe: @ SetVariable(Stack[-2], Stack[-1])
0xbf: Pop(2)
0xc0: PushEmpty()
0xc1: Call2 0xdd

0xc2: Pop(0)
0xc3: Return(); Pop(0)

0xc4: Push("d1q01") // @poff=1055
0xc5: Push((int) 1000)
0xc6: @ SetVariable(Stack[-2], Stack[-1])
0xc7: Pop(2)
0xc8: PushEmpty()
0xc9: Call2 0xdd

0xca: Pop(0)
0xcb: Return(); Pop(0)

0xcc: Push( Stack[2 + Tasks[-1].StackPointer] )
0xcd: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xce: Push("cleanup") // @poff=1039
0xcf: @ Trigger(Stack[-2]T, Stack[-1])
0xd0: Pop(1)
0xd1: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd2: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd3: Push("cleanup") // @poff=1039
0xd4: @ Trigger(Stack[-3]T, Stack[-1])
0xd5: Pop(1)
0xd6: Push( Stack[4 + Tasks[-1].StackPointer] )
0xd7: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xd8: Push("cleanup") // @poff=1039
0xd9: @ Trigger(Stack[-4]T, Stack[-1])
0xda: Pop(1)
0xdb: Stack[8 + Tasks[-1].StackPointer] = (bool)1
0xdc: Return(); Pop(0)

0xdd: PushEmpty(object, object)
0xde: EventDisable(26)
0xdf: PushEmpty()
0xe0: Call2 0xcc

0xe1: Pop(0)
0xe2: Push( Stack[0 + Tasks[-1].StackPointer] )
0xe3: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe4: @@@ Remove(); Obj=0 // @poff=372
0xe5: Pop(0)
0xe6: Push( Stack[1 + Tasks[-1].StackPointer] )
0xe7: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe8: @@@ Remove(); Obj=1 // @poff=372
0xe9: Pop(0)
0xea: Push( Stack[5 + Tasks[-1].StackPointer] )
0xeb: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xec: Push("cleanup") // @poff=1039
0xed: @ Trigger(Stack[-5]T, Stack[-1])
0xee: Pop(1)
0xef: Push( Stack[5 + Tasks[-1].StackPointer] )
0xf0: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf1: Push("cleanup") // @poff=1039
0xf2: @ Trigger(Stack[-6]T, Stack[-1])
0xf3: Pop(1)
0xf4: Push( Stack[7 + Tasks[-1].StackPointer] )
0xf5: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf6: Push("cleanup") // @poff=1039
0xf7: @ Trigger(Stack[-7]T, Stack[-1])
0xf8: Pop(1)
0xf9: Push("warehouse_rubin") // @poff=64
0xfa: @ GetSceneByName(Stack[-2], Stack[-1])
0xfb: Pop(1)
0xfc: Push("rubin") // @poff=84
0xfd: @ Trigger(Stack[-2], Stack[-1])
0xfe: Pop(1)
0xff: PushEmpty(string, bool)
0x100: Stack[-2] = "icot_eva@door1" // @poff=1097
0x101: Stack[-1] = (bool) 0
0x102: Call2 0x13d

0x103: Pop(2)
0x104: PushEmpty(object)
0x105: Call2 0x10b

0x106: Pop(0)
0x107: @ RemoveActor(Stack[-1])
0x108: Pop(1)
0x109: Return(); Pop(2)

0x10a: Stack[-1] = 0
0x10b: PushEmpty(object, object)
0x10c: @ self(Stack[-1])
0x10d: Pop(0)
0x10e: Stack[-1] = Stack[-3]
0x10f: Return(); Pop(2)

0x110: Stack[-1] = 0
0x111: PushEmpty(object, object)
0x112: Push([0.0, 0.0, 0.0])
0x113: Push([0.0, 0.0, 1.0])
0x114: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0x115: Pop(2)
0x116: Stack[-1] = Stack[-6]
0x117: Return(); Pop(2)

0x118: Stack[-1] = 0
0x119: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x11a: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=1127
0x11b: Pop(0)
0x11c: Pop(0); Push((bool) Stack[-4] == 0)
0x11d: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x11e: Push("Locator ") // @poff=1138
0x11f: Pop(1); Push(Stack[-1] + Stack[-12]);
0x120: Push(" doesn't exist") // @poff=1156
0x121: Pop(2); Push(Stack[-2] + Stack[-1]);
0x122: @ Trace(Stack[-1])
0x123: Pop(1)
0x124: Stack[-1] = 0
0x125: GOTO 0x128

0x126: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x127: Pop(0)
0x128: Stack[-1] = Stack[-13]
0x129: Return(); Pop(8)

0x12a: Stack[-1] = 0
0x12b: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x12c: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=1127
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-4] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x130: Push("Locator ") // @poff=1138
0x131: Pop(1); Push(Stack[-1] + Stack[-12]);
0x132: Push(" doesn't exist") // @poff=1156
0x133: Pop(2); Push(Stack[-2] + Stack[-1]);
0x134: @ Trace(Stack[-1])
0x135: Pop(1)
0x136: Stack[-1] = 0
0x137: GOTO 0x13a

0x138: @@ AddStationaryActor(Stack[-1], Stack[-3], Stack[-2], Stack[-10], Stack[-9]); Obj=12 // @poff=1186
0x139: Pop(0)
0x13a: Stack[-1] = Stack[-13]
0x13b: Return(); Pop(8)

0x13c: Stack[-1] = 0
0x13d: PushEmpty(object, object)
0x13e: @ FindActor(Stack[-1], Stack[-4])
0x13f: Pop(0)
0x140: Pop(0); Push((bool) Stack[-1] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x142: Push("Door ") // @poff=1205
0x143: Pop(1); Push(Stack[-1] + Stack[-5]);
0x144: Push(" not found") // @poff=1217
0x145: Pop(2); Push(Stack[-2] + Stack[-1]);
0x146: @ Trace(Stack[-1])
0x147: Pop(1)
0x148: GOTO 0x14c

0x149: Push("locked") // @poff=1239
0x14a: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=1253
0x14b: Pop(1)
0x14c: Return(); Pop(2)

0x14d: Stack[-1] = 0
