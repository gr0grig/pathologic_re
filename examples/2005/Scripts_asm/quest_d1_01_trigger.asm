GlobalVarCount = 0

Strings:
	W:cs_d1q01_morlok
	W:cs_play_all_trigger.bin
	W:cs_d1q01_worker
	W:d1q01_light
	W:light_fire.xml
	W:pt_d1q01_fire
	W:scripted
	W:play
	W:player
	W:space
	W:cs_d1q01.mot
	W:quest_d1_01
	W:cutscene_end
	W:cleanup
	W:restore
	W:noaccess
	A:HasProperty
	A:GetProperty
	A:SetProperty
	A:RemoveProperty
	A:GetLocator
	W:Locator 
	W: doesn't exist
// @pool_raw:630073005f00640031007100300031005f006d006f0072006c006f006b000000630073005f0070006c00610079005f0061006c006c005f0074007200690067006700650072002e00620069006e000000630073005f00640031007100300031005f0077006f0072006b00650072000000640031007100300031005f006c00690067006800740000006c0069006700680074005f0066006900720065002e0078006d006c000000700074005f00640031007100300031005f006600690072006500000073006300720069007000740065006400000070006c0061007900000070006c0061007900650072000000730070006100630065000000630073005f00640031007100300031002e006d006f0074000000710075006500730074005f00640031005f003000310000006300750074007300630065006e0065005f0065006e006400000063006c00650061006e0075007000000072006500730074006f007200650000006e006f00610063006300650073007300000048617350726f70657274790047657450726f70657274790053657450726f70657274790052656d6f766550726f7065727479004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e00270074002000650078006900730074000000

Import:
	GetMainOutdoorScene (1 args)
	AddScriptedActor (5 args)
	CameraSwitchToNormal (0 args)
	IsPlayerActor (2 args)
	Trigger (2 args)
	FindActor (2 args)
	RegisterKeyCallback (1 args)
	CameraPlay (1 args)
	CameraWaitForPlayFinish (0 args)
	UnregisterKeyCallback (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	IsLoaded (1 args)
	self (1 args)
	AddActor (6 args)
	Trace (1 args)
	AddActorByType (6 args)
	SetSepia (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (bool, object, object, object, object, bool) Params = 0
		EVENT_24 Op = 0x21 Vars = (int)
		EVENT_23 Op = 0x25 Vars = (object)
		EVENT_32 Op = 0x5e Vars = ()
		EVENT_26 Op = 0x73 Vars = (string)
		EVENT_6 Op = 0x8f Vars = ()


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: Push("cs_d1q01_morlok") // @poff=0
0x4: Push("cs_play_all_trigger.bin") // @poff=32
0x5: Push([0.0, 0.0, 0.0])
0x6: @ AddScriptedActor(Stack[-1]T, Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x7: Pop(3)
0x8: Push("cs_d1q01_worker") // @poff=80
0x9: Push("cs_play_all_trigger.bin") // @poff=32
0xa: Push([0.0, 0.0, 0.0])
0xb: @ AddScriptedActor(Stack[-2]T, Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0xc: Pop(3)
0xd: PushEmpty(object, object, string, string)
0xe: Stack[-5] = Stack[-3]
0xf: Stack[-2] = "d1q01_light" // @poff=112
0x10: Stack[-1] = "light_fire.xml" // @poff=136
0x11: Call2 0xd2

0x12: Stack[3 + Tasks[-1].StackPointer] = Stack[-4]
0x13: Pop(4)
0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-6] = Stack[-4]
0x16: Stack[-3] = "pt_d1q01_fire" // @poff=166
0x17: Stack[-2] = "scripted" // @poff=194
0x18: Stack[-1] = "fire.xml" // @poff=148
0x19: Call2 0xda

0x1a: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x1b: Pop(5)
0x1c: PushEmpty()
0x1d: Call2 0x6f

0x1e: Pop(0)
0x1f: Return(); Pop(2)

0x20: Stack[-1] = 0
0x21: PushEmpty()
0x22: @ CameraSwitchToNormal()
0x23: Pop(0)
0x24: Return(); Pop(0)

0x25: PushEmpty(bool, object, bool, object)
0x26: Push( Stack[5 + Tasks[-1].StackPointer] )
0x27: IF (Stack[-1] == 0) GOTO 0x29; Pop(1)

0x28: Return(); Pop(4)

0x29: @ IsPlayerActor(Stack[-5], Stack[-2])
0x2a: Pop(0)
0x2b: Pop(0); Push((bool) Stack[-2] == 0)
0x2c: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2d: Return(); Pop(4)

0x2e: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x2f: Push("play") // @poff=212
0x30: @ Trigger(Stack[-1]T, Stack[-1])
0x31: Pop(1)
0x32: Push("play") // @poff=212
0x33: @ Trigger(Stack[-2]T, Stack[-1])
0x34: Pop(1)
0x35: Push("player") // @poff=222
0x36: @ FindActor(Stack[-2], Stack[-1])
0x37: Pop(1)
0x38: PushEmpty()
0x39: Call2 0xf8

0x3a: Pop(0)
0x3b: PushEmpty(object)
0x3c: Stack[-2] = Stack[-1]
0x3d: Call2 0xa1

0x3e: Pop(1)
0x3f: Push("space") // @poff=236
0x40: @ RegisterKeyCallback(Stack[-1])
0x41: Pop(1)
0x42: Push("cs_d1q01.mot") // @poff=248
0x43: @ CameraPlay(Stack[-1])
0x44: Pop(1)
0x45: @ CameraWaitForPlayFinish()
0x46: Pop(0)
0x47: Push("space") // @poff=236
0x48: @ UnregisterKeyCallback(Stack[-1])
0x49: Pop(1)
0x4a: PushEmpty(object)
0x4b: Stack[-2] = Stack[-1]
0x4c: Call2 0xb8

0x4d: Pop(1)
0x4e: PushEmpty()
0x4f: Call2 0xfd

0x50: Pop(0)
0x51: @ RemoveActor(Stack[-1]T)
0x52: Pop(0)
0x53: @ RemoveActor(Stack[-2]T)
0x54: Pop(0)
0x55: @ CameraSwitchToNormal()
0x56: Pop(0)
0x57: PushEmpty(bool, string, string)
0x58: Stack[-2] = "quest_d1_01" // @poff=274
0x59: Stack[-1] = "cutscene_end" // @poff=298
0x5a: Call2 0xec

0x5b: Pop(3)
0x5c: Return(); Pop(4)

0x5d: Stack[-1] = 0
0x5e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x5f: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x60: @ RemoveActor(Stack[-1]T)
0x61: Pop(0)
0x62: Push( Stack[2 + Tasks[-1].StackPointer] )
0x63: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x64: @ RemoveActor(Stack[-2]T)
0x65: Pop(0)
0x66: Push( Stack[3 + Tasks[-1].StackPointer] )
0x67: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x68: @ RemoveActor(Stack[-3]T)
0x69: Pop(0)
0x6a: Push( Stack[4 + Tasks[-1].StackPointer] )
0x6b: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6c: @ RemoveActor(Stack[-4]T)
0x6d: Pop(0)
0x6e: Return(); Pop(0)

0x6f: @ Hold()
0x70: Pop(0)
0x71: GOTO 0x6f

0x72: Return(); Pop(0)

0x73: PushEmpty(bool, bool)
0x74: Push("cleanup") // @poff=324
0x75: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x76: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x77: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x78: @ IsLoaded(Stack[-1])
0x79: Pop(0)
0x7a: PushEmpty(bool)
0x7b: Stack[-1] = (bool) 0
0x7c: Pop(0); Push((bool) Stack[-2] == 0)
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: PushEmpty(bool)
0x7f: Call2 0x9f

0x80: Pop(0)
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: Stack[-1] = (bool) 1
0x83: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x84: PushEmpty(object)
0x85: Call2 0xcc

0x86: Pop(0)
0x87: @ RemoveActor(Stack[-1])
0x88: Pop(1)
0x89: GOTO 0x8e

0x8a: Push("restore") // @poff=340
0x8b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8e: Return(); Pop(2)

0x8f: PushEmpty(bool)
0x90: Stack[-1] = (bool) 0
0x91: Push( Stack[0 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x93: PushEmpty(bool)
0x94: Call2 0x9f

0x95: Pop(0)
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[-1] = (bool) 1
0x98: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x99: PushEmpty(object)
0x9a: Call2 0xcc

0x9b: Pop(0)
0x9c: @ RemoveActor(Stack[-1])
0x9d: Pop(1)
0x9e: Return(); Pop(0)

0x9f: Stack[-1] = (bool) 1
0xa0: Return(); Pop(0)

0xa1: PushEmpty(bool, int, bool, int)
0xa2: Pop(0); Push((bool) Stack[-5] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0xa4: Return(); Pop(4)

0xa5: Push("noaccess") // @poff=356
0xa6: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=374
0xa7: Pop(1)
0xa8: Push(Stack[-2])
0xa9: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xaa: Push("noaccess") // @poff=356
0xab: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=386
0xac: Pop(1)
0xad: Push("noaccess") // @poff=356
0xae: Push((int) 1)
0xaf: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb0: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=398
0xb1: Pop(2)
0xb2: GOTO 0xb7

0xb3: Push("noaccess") // @poff=356
0xb4: Push((int) 1)
0xb5: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=398
0xb6: Pop(2)
0xb7: Return(); Pop(4)

0xb8: PushEmpty(int, int)
0xb9: Pop(0); Push((bool) Stack[-3] == 0)
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Return(); Pop(2)

0xbc: Push("noaccess") // @poff=356
0xbd: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=386
0xbe: Pop(1)
0xbf: Push((int) 1)
0xc0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc2: Push("noaccess") // @poff=356
0xc3: Push((int) 1)
0xc4: Pop(1); Push(Stack[-3] - Stack[-1]);
0xc5: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=398
0xc6: Pop(2)
0xc7: GOTO 0xcb

0xc8: Push("noaccess") // @poff=356
0xc9: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=410
0xca: Pop(1)
0xcb: Return(); Pop(2)

0xcc: PushEmpty(object, object)
0xcd: @ self(Stack[-1])
0xce: Pop(0)
0xcf: Stack[-1] = Stack[-3]
0xd0: Return(); Pop(2)

0xd1: Stack[-1] = 0
0xd2: PushEmpty(object, object)
0xd3: Push([0.0, 0.0, 0.0])
0xd4: Push([0.0, 0.0, 1.0])
0xd5: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0xd6: Pop(2)
0xd7: Stack[-1] = Stack[-6]
0xd8: Return(); Pop(2)

0xd9: Stack[-1] = 0
0xda: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xdb: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=425
0xdc: Pop(0)
0xdd: Pop(0); Push((bool) Stack[-4] == 0)
0xde: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xdf: Push("Locator ") // @poff=436
0xe0: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe1: Push(" doesn't exist") // @poff=454
0xe2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe3: @ Trace(Stack[-1])
0xe4: Pop(1)
0xe5: Stack[-1] = 0
0xe6: GOTO 0xe9

0xe7: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xe8: Pop(0)
0xe9: Stack[-1] = Stack[-13]
0xea: Return(); Pop(8)

0xeb: Stack[-1] = 0
0xec: PushEmpty(object, object)
0xed: @ FindActor(Stack[-1], Stack[-4])
0xee: Pop(0)
0xef: Pop(0); PushNull((bool) Stack[-1] == 0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xf1: Stack[-5] = (bool) 0
0xf2: Return(); Pop(2)

0xf3: @ Trigger(Stack[-1], Stack[-3])
0xf4: Pop(0)
0xf5: Stack[-5] = (bool) 1
0xf6: Return(); Pop(2)

0xf7: Stack[-1] = 0
0xf8: Push((float)0.5)
0xf9: Push((float)0.8859999775886536)
0xfa: @ SetSepia(Stack[-2], Stack[-1])
0xfb: Pop(2)
0xfc: Return(); Pop(0)

0xfd: Push((int) 0)
0xfe: Push((int) 0)
0xff: @ SetSepia(Stack[-2], Stack[-1])
0x100: Pop(2)
0x101: Return(); Pop(0)

