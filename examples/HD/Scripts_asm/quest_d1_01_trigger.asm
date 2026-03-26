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
	sync (0 args)
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
		EVENT_32 Op = 0x60 Vars = ()
		EVENT_26 Op = 0x75 Vars = (string)
		EVENT_6 Op = 0x91 Vars = ()


0x0: PushEmpty(object, object)
0x1: @ GetMainOutdoorScene(Stack[-1])
0x2: Pop(0)
0x3: Push("cs_d1q01_morlok") // @poff=0
0x4: Push("cs_play_all_trigger.bin") // @poff=32
0x5: Push(CVector(0.0, 0.0, 0.0))
0x6: @ AddScriptedActor(Stack[-1]T, Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0x7: Pop(3)
0x8: Push("cs_d1q01_worker") // @poff=80
0x9: Push("cs_play_all_trigger.bin") // @poff=32
0xa: Push(CVector(0.0, 0.0, 0.0))
0xb: @ AddScriptedActor(Stack[-2]T, Stack[-3], Stack[-2], Stack[-4], Stack[-1])
0xc: Pop(3)
0xd: PushEmpty(object, object, string, string)
0xe: Stack[-5] = Stack[-3]
0xf: Stack[-2] = "d1q01_light" // @poff=112
0x10: Stack[-1] = "light_fire.xml" // @poff=136
0x11: Call2 0xd4

0x12: Stack[3 + Tasks[-1].StackPointer] = Stack[-4]
0x13: Pop(4)
0x14: PushEmpty(object, object, string, string, string)
0x15: Stack[-6] = Stack[-4]
0x16: Stack[-3] = "pt_d1q01_fire" // @poff=166
0x17: Stack[-2] = "scripted" // @poff=194
0x18: Stack[-1] = "fire.xml" // @poff=148
0x19: Call2 0xdc

0x1a: Stack[4 + Tasks[-1].StackPointer] = Stack[-5]
0x1b: Pop(5)
0x1c: PushEmpty()
0x1d: Call2 0x71

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
0x39: Call2 0xfa

0x3a: Pop(0)
0x3b: PushEmpty(object)
0x3c: Stack[-2] = Stack[-1]
0x3d: Call2 0xa3

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
0x4c: Call2 0xba

0x4d: Pop(1)
0x4e: PushEmpty()
0x4f: Call2 0xff

0x50: Pop(0)
0x51: @ CameraSwitchToNormal()
0x52: Pop(0)
0x53: PushEmpty(bool, string, string)
0x54: Stack[-2] = "quest_d1_01" // @poff=274
0x55: Stack[-1] = "cutscene_end" // @poff=298
0x56: Call2 0xee

0x57: Pop(3)
0x58: @ sync()
0x59: Pop(0)
0x5a: @ RemoveActor(Stack[-1]T)
0x5b: Pop(0)
0x5c: @ RemoveActor(Stack[-2]T)
0x5d: Pop(0)
0x5e: Return(); Pop(4)

0x5f: Stack[-1] = 0
0x60: Push( Stack[1 + Tasks[-1].StackPointer] )
0x61: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x62: @ RemoveActor(Stack[-1]T)
0x63: Pop(0)
0x64: Push( Stack[2 + Tasks[-1].StackPointer] )
0x65: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x66: @ RemoveActor(Stack[-2]T)
0x67: Pop(0)
0x68: Push( Stack[3 + Tasks[-1].StackPointer] )
0x69: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x6a: @ RemoveActor(Stack[-3]T)
0x6b: Pop(0)
0x6c: Push( Stack[4 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6e: @ RemoveActor(Stack[-4]T)
0x6f: Pop(0)
0x70: Return(); Pop(0)

0x71: @ Hold()
0x72: Pop(0)
0x73: GOTO 0x71

0x74: Return(); Pop(0)

0x75: PushEmpty(bool, bool)
0x76: Push("cleanup") // @poff=324
0x77: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x79: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7a: @ IsLoaded(Stack[-1])
0x7b: Pop(0)
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 0
0x7e: Pop(0); Push((bool) Stack[-2] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x80: PushEmpty(bool)
0x81: Call2 0xa1

0x82: Pop(0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 1
0x85: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x86: PushEmpty(object)
0x87: Call2 0xce

0x88: Pop(0)
0x89: @ RemoveActor(Stack[-1])
0x8a: Pop(1)
0x8b: GOTO 0x90

0x8c: Push("restore") // @poff=340
0x8d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x90: Return(); Pop(2)

0x91: PushEmpty(bool)
0x92: Stack[-1] = (bool) 0
0x93: Push( Stack[0 + Tasks[-1].StackPointer] )
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: PushEmpty(bool)
0x96: Call2 0xa1

0x97: Pop(0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 1
0x9a: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9b: PushEmpty(object)
0x9c: Call2 0xce

0x9d: Pop(0)
0x9e: @ RemoveActor(Stack[-1])
0x9f: Pop(1)
0xa0: Return(); Pop(0)

0xa1: Stack[-1] = (bool) 1
0xa2: Return(); Pop(0)

0xa3: PushEmpty(bool, int, bool, int)
0xa4: Pop(0); Push((bool) Stack[-5] == 0)
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(4)

0xa7: Push("noaccess") // @poff=356
0xa8: @@ HasProperty(Stack[-1], Stack[-3]); Obj=6 // @poff=374
0xa9: Pop(1)
0xaa: Push(Stack[-2])
0xab: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xac: Push("noaccess") // @poff=356
0xad: @@ GetProperty(Stack[-1], Stack[-2]); Obj=6 // @poff=386
0xae: Pop(1)
0xaf: Push("noaccess") // @poff=356
0xb0: Push((int) 1)
0xb1: Pop(1); Push(Stack[-3] + Stack[-1]);
0xb2: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=398
0xb3: Pop(2)
0xb4: GOTO 0xb9

0xb5: Push("noaccess") // @poff=356
0xb6: Push((int) 1)
0xb7: @@ SetProperty(Stack[-2], Stack[-1]); Obj=7 // @poff=398
0xb8: Pop(2)
0xb9: Return(); Pop(4)

0xba: PushEmpty(int, int)
0xbb: Pop(0); Push((bool) Stack[-3] == 0)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(2)

0xbe: Push("noaccess") // @poff=356
0xbf: @@ GetProperty(Stack[-1], Stack[-2]); Obj=4 // @poff=386
0xc0: Pop(1)
0xc1: Push((int) 1)
0xc2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc4: Push("noaccess") // @poff=356
0xc5: Push((int) 1)
0xc6: Pop(1); Push(Stack[-3] - Stack[-1]);
0xc7: @@ SetProperty(Stack[-2], Stack[-1]); Obj=5 // @poff=398
0xc8: Pop(2)
0xc9: GOTO 0xcd

0xca: Push("noaccess") // @poff=356
0xcb: @@ RemoveProperty(Stack[-1]); Obj=4 // @poff=410
0xcc: Pop(1)
0xcd: Return(); Pop(2)

0xce: PushEmpty(object, object)
0xcf: @ self(Stack[-1])
0xd0: Pop(0)
0xd1: Stack[-1] = Stack[-3]
0xd2: Return(); Pop(2)

0xd3: Stack[-1] = 0
0xd4: PushEmpty(object, object)
0xd5: Push(CVector(0.0, 0.0, 0.0))
0xd6: Push(CVector(0.0, 0.0, 1.0))
0xd7: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0xd8: Pop(2)
0xd9: Stack[-1] = Stack[-6]
0xda: Return(); Pop(2)

0xdb: Stack[-1] = 0
0xdc: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xdd: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=425
0xde: Pop(0)
0xdf: Pop(0); Push((bool) Stack[-4] == 0)
0xe0: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe1: Push("Locator ") // @poff=436
0xe2: Pop(1); Push(Stack[-1] + Stack[-12]);
0xe3: Push(" doesn't exist") // @poff=454
0xe4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe5: @ Trace(Stack[-1])
0xe6: Pop(1)
0xe7: Stack[-1] = 0
0xe8: GOTO 0xeb

0xe9: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xea: Pop(0)
0xeb: Stack[-1] = Stack[-13]
0xec: Return(); Pop(8)

0xed: Stack[-1] = 0
0xee: PushEmpty(object, object)
0xef: @ FindActor(Stack[-1], Stack[-4])
0xf0: Pop(0)
0xf1: Pop(0); PushNull((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf3: Stack[-5] = (bool) 0
0xf4: Return(); Pop(2)

0xf5: @ Trigger(Stack[-1], Stack[-3])
0xf6: Pop(0)
0xf7: Stack[-5] = (bool) 1
0xf8: Return(); Pop(2)

0xf9: Stack[-1] = 0
0xfa: Push((float)0.5)
0xfb: Push((float)0.8859999775886536)
0xfc: @ SetSepia(Stack[-2], Stack[-1])
0xfd: Pop(2)
0xfe: Return(); Pop(0)

0xff: Push((int) 0)
0x100: Push((int) 0)
0x101: @ SetSepia(Stack[-2], Stack[-1])
0x102: Pop(2)
0x103: Return(); Pop(0)

