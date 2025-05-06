GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	restore
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png
	Late1
	klara2_positioner
	remove_klara
	klara2_svita_positioner
	place_svita
	klara_stay
	branch
	day
	K2S_Klara2
	k2system_klara_day
	k2system_klara_state
	mt_klara2

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetProperty (2 args)

RunOp = 0x3bf
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1b4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x355 Vars = (int, int)
	GTASK_6 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x3c7 Vars = (string)
		EVENT_6 Op = 0x3db Vars = ()
		EVENT_5 Op = 0x3e8 Vars = ()
		EVENT_7 Op = 0x431 Vars = (int)
		EVENT_45 Op = 0x473 Vars = (bool)
		EVENT_0 Op = 0x47f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x508

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x65b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x659

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x65d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x65f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x6cd

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x61c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x55d

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x54c

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 538516)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 538517)
0x61: Push((int) 40400)
0x62: Push((int) 40395)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 538518)
0x66: Push((int) 40397)
0x67: Push((int) 40396)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x661

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x5e7

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x661

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x5f7

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x615

0xa6: Pop(0)
0xa7: Push((int) 40394)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 538516)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 538517)
0xb4: Push((int) 40400)
0xb5: Push((int) 40395)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 538518)
0xb9: Push((int) 40397)
0xba: Push((int) 40396)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 40397)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 538519)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 538520)
0xcb: Push((int) 40404)
0xcc: Push((int) 40398)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 538521)
0xd0: Push((int) 40404)
0xd1: Push((int) 40399)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 40400)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral"
0xda: Call2 0x8b

0xdb: Pop(1)
0xdc: Push((int) 538522)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 538523)
0xe2: Push((int) 40404)
0xe3: Push((int) 40401)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 538524)
0xe7: Push((int) 40397)
0xe8: Push((int) 40402)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Push((int) 40404)
0xed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xef: PushEmpty(string)
0xf0: Stack[-1] = "Neutral"
0xf1: Call2 0x8b

0xf2: Pop(1)
0xf3: Push((int) 538525)
0xf4: @@ SetMessage(Stack[-1])
0xf5: Pop(1)
0xf6: @@ ClearReplies()
0xf7: Pop(0)
0xf8: Push((int) 538526)
0xf9: Push((int) -1)
0xfa: Push((int) 40407)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Push((int) 538527)
0xfe: Push((int) -1)
0xff: Push((int) 40408)
0x100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101: Pop(3)
0x102: Return(); Pop(0)

0x103: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x104: PushEmpty(bool)
0x105: Call2 0x661

0x106: Pop(0)
0x107: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x108: @ lshStopAnimation()
0x109: Pop(0)
0x10a: GOTO 0x10d

0x10b: @ StopAnimation()
0x10c: Pop(0)
0x10d: Return(); Pop(0)

0x10e: GOTO 0xa2

0x10f: Return(); Pop(0)

0x110: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x111: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x112: PushEmpty(bool, object, float)
0x113: Stack[-2] = Stack[-12]
0x114: Stack[-1] = (float) 70.0
0x115: Call2 0x508

0x116: Pop(2)
0x117: Pop(1); Push((bool) Stack[-1] == 0)
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: Stack[-10] = (int) -2
0x11a: Return(); Pop(8)

0x11b: @ CreateDialog(Stack[-4])
0x11c: Pop(0)
0x11d: PushEmpty(int)
0x11e: Call2 0x65b

0x11f: Pop(0)
0x120: @@ SetNPCName(Stack[-1])
0x121: Pop(1)
0x122: PushEmpty(int)
0x123: Call2 0x659

0x124: Pop(0)
0x125: @@ SetNPCDescription(Stack[-1])
0x126: Pop(1)
0x127: PushEmpty(string)
0x128: Call2 0x65d

0x129: Pop(0)
0x12a: @@ SetPhoto(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty(string)
0x12d: Call2 0x65f

0x12e: Pop(0)
0x12f: @@ SetPhoto2(Stack[-1])
0x130: Pop(1)
0x131: PushEmpty(int)
0x132: Call2 0x6cd

0x133: Pop(0)
0x134: @@ SetPlayerName(Stack[-1])
0x135: Pop(1)
0x136: Stack[-2] = (int) -1
0x137: @ IsOverrideActive(Stack[-3])
0x138: Pop(0)
0x139: Push(Stack[-3])
0x13a: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13b: Stack[-10] = (int) -2
0x13c: Return(); Pop(8)

0x13d: @ DoDialog(Stack[-4])
0x13e: Pop(0)
0x13f: PushEmpty(object, object)
0x140: Stack[-2] = Stack[-11]
0x141: Stack[-1] = Stack[-6]
0x142: Push(-2, 4); TaskCall(3)
0x143: Call2 0x15a

0x144: Pop(-2, 4); TaskReturn
0x145: Pop(2)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: Pop(0); Push((bool) Stack[-1] == 0)
0x149: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14a: @ sync()
0x14b: Pop(0)
0x14c: @@ IsDialogEnd(Stack[-1])
0x14d: Pop(0)
0x14e: GOTO 0x148

0x14f: PushEmpty(object)
0x150: Stack[-1] = Stack[-10]
0x151: Call2 0x54c

0x152: Pop(1)
0x153: @ StopDialog(Stack[-4])
0x154: Pop(0)
0x155: @@ GetReturnValue(Stack[-2])
0x156: Pop(0)
0x157: Stack[-10] = Stack[-2]
0x158: Return(); Pop(8)

0x159: Stack[-4] = 0
0x15a: PushEmpty()
0x15b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x15c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x15d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x15e: Push((int) 1)
0x15f: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral"
0x162: Call2 0x19e

0x163: Pop(1)
0x164: Push((int) 538529)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: PushEmpty(bool, object)
0x16a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Call2 0x693

0x16c: Pop(1)
0x16d: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x16e: Push((int) 538538)
0x16f: Push((int) 40420)
0x170: Push((int) 40419)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Push((int) 538535)
0x174: Push((int) -1)
0x175: Push((int) 40416)
0x176: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x177: Pop(3)
0x178: Push((int) 538536)
0x179: Push((int) -1)
0x17a: Push((int) 40417)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: GOTO 0x180

0x17e: Return(); Pop(0)

0x17f: GOTO 0x15e

0x180: PushEmpty(bool)
0x181: Call2 0x661

0x182: Pop(0)
0x183: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x184: @ lshWaitForAnimEnd()
0x185: Pop(0)
0x186: Push( Stack[3 + Tasks[-1].StackPointer] )
0x187: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x188: GOTO 0x18e

0x189: PushEmpty(string)
0x18a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x18b: Call2 0x5e7

0x18c: Pop(1)
0x18d: GOTO 0x184

0x18e: GOTO 0x19d

0x18f: Push("all")
0x190: Push("idle")
0x191: @ PlayAnimation(Stack[-2], Stack[-1])
0x192: Pop(2)
0x193: @ WaitForAnimEnd()
0x194: Pop(0)
0x195: Push( Stack[3 + Tasks[-1].StackPointer] )
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: GOTO 0x19d

0x198: Push("all")
0x199: Push("idle")
0x19a: @ PlayAnimation(Stack[-2], Stack[-1])
0x19b: Pop(2)
0x19c: GOTO 0x193

0x19d: Return(); Pop(0)

0x19e: PushEmpty()
0x19f: PushEmpty(bool)
0x1a0: Call2 0x661

0x1a1: Pop(0)
0x1a2: Pop(1); Push((bool) Stack[-1] == 0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a4: Return(); Pop(0)

0x1a5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Return(); Pop(0)

0x1a8: PushEmpty(string, bool)
0x1a9: Stack[-2] = Stack[-3]
0x1aa: Push("")
0x1ab: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ad: Stack[-1] = (bool) 0
0x1ae: GOTO 0x1b0

0x1af: Stack[-1] = (bool) 1
0x1b0: Call2 0x5f7

0x1b1: Pop(2)
0x1b2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1b3: Return(); Pop(0)

0x1b4: PushEmpty()
0x1b5: Push((int) 1)
0x1b6: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x1b7: PushEmpty()
0x1b8: Call2 0x615

0x1b9: Pop(0)
0x1ba: Push((int) 40419)
0x1bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bd: PushEmpty(object, object)
0x1be: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c0: Call2 0x669

0x1c1: Pop(2)
0x1c2: Push((int) 40477)
0x1c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c5: PushEmpty(object, object)
0x1c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c8: Call2 0x66f

0x1c9: Pop(2)
0x1ca: PushEmpty(object, object)
0x1cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cd: Call2 0x676

0x1ce: Pop(2)
0x1cf: Push((int) 40478)
0x1d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d2: PushEmpty(object, object)
0x1d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d5: Call2 0x66f

0x1d6: Pop(2)
0x1d7: PushEmpty(object, object)
0x1d8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1da: Call2 0x676

0x1db: Pop(2)
0x1dc: Push((int) 40479)
0x1dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1df: PushEmpty(object, object)
0x1e0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e2: Call2 0x676

0x1e3: Pop(2)
0x1e4: PushEmpty(object, object)
0x1e5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e7: Call2 0x67d

0x1e8: Pop(2)
0x1e9: PushEmpty(object, object)
0x1ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ec: Call2 0x684

0x1ed: Pop(2)
0x1ee: Push((int) 40476)
0x1ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f1: PushEmpty(object, object)
0x1f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f4: Call2 0x66f

0x1f5: Pop(2)
0x1f6: PushEmpty(object, object)
0x1f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f9: Call2 0x676

0x1fa: Pop(2)
0x1fb: Push((int) 40410)
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x1fe: PushEmpty(string)
0x1ff: Stack[-1] = "Neutral"
0x200: Call2 0x19e

0x201: Pop(1)
0x202: Push((int) 538529)
0x203: @@ SetMessage(Stack[-1])
0x204: Pop(1)
0x205: @@ ClearReplies()
0x206: Pop(0)
0x207: PushEmpty(bool, object)
0x208: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x209: Call2 0x693

0x20a: Pop(1)
0x20b: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20c: Push((int) 538538)
0x20d: Push((int) 40420)
0x20e: Push((int) 40419)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Push((int) 538535)
0x212: Push((int) -1)
0x213: Push((int) 40416)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 538536)
0x217: Push((int) -1)
0x218: Push((int) 40417)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: Push((int) 40420)
0x21d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x21f: PushEmpty(string)
0x220: Stack[-1] = "Neutral"
0x221: Call2 0x19e

0x222: Pop(1)
0x223: Push((int) 538539)
0x224: @@ SetMessage(Stack[-1])
0x225: Pop(1)
0x226: @@ ClearReplies()
0x227: Pop(0)
0x228: Push((int) 538540)
0x229: Push((int) 40426)
0x22a: Push((int) 40421)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Push((int) 538541)
0x22e: Push((int) 40424)
0x22f: Push((int) 40422)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Push((int) 538542)
0x233: Push((int) 40425)
0x234: Push((int) 40423)
0x235: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x236: Pop(3)
0x237: Return(); Pop(0)

0x238: Push((int) 40425)
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x23b: PushEmpty(string)
0x23c: Stack[-1] = "Neutral"
0x23d: Call2 0x19e

0x23e: Pop(1)
0x23f: Push((int) 538544)
0x240: @@ SetMessage(Stack[-1])
0x241: Pop(1)
0x242: @@ ClearReplies()
0x243: Pop(0)
0x244: Push((int) 538587)
0x245: Push((int) 40474)
0x246: Push((int) 40473)
0x247: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x248: Pop(3)
0x249: Push((int) 538589)
0x24a: Push((int) -1)
0x24b: Push((int) 40476)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Return(); Pop(0)

0x24f: Push((int) 40424)
0x250: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x251: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x252: PushEmpty(string)
0x253: Stack[-1] = "Neutral"
0x254: Call2 0x19e

0x255: Pop(1)
0x256: Push((int) 538543)
0x257: @@ SetMessage(Stack[-1])
0x258: Pop(1)
0x259: @@ ClearReplies()
0x25a: Pop(0)
0x25b: PushEmpty(bool)
0x25c: Stack[-1] = (bool) 0
0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25f: Call2 0x69d

0x260: Pop(1)
0x261: Pop(1); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x263: PushEmpty(bool, object)
0x264: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x265: Call2 0x6a7

0x266: Pop(1)
0x267: Pop(1); Push((bool) Stack[-1] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26b: Push((int) 538592)
0x26c: Push((int) -1)
0x26d: Push((int) 40479)
0x26e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26f: Pop(3)
0x270: Push((int) 538593)
0x271: Push((int) 40425)
0x272: Push((int) 40480)
0x273: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x274: Pop(3)
0x275: Return(); Pop(0)

0x276: Push((int) 40426)
0x277: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x278: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x279: PushEmpty(string)
0x27a: Stack[-1] = "Neutral"
0x27b: Call2 0x19e

0x27c: Pop(1)
0x27d: Push((int) 538545)
0x27e: @@ SetMessage(Stack[-1])
0x27f: Pop(1)
0x280: @@ ClearReplies()
0x281: Pop(0)
0x282: Push((int) 538585)
0x283: Push((int) 40424)
0x284: Push((int) 40470)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Push((int) 538586)
0x288: Push((int) 40474)
0x289: Push((int) 40471)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Return(); Pop(0)

0x28d: Push((int) 40474)
0x28e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x28f: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x290: PushEmpty(string)
0x291: Stack[-1] = "Neutral"
0x292: Call2 0x19e

0x293: Pop(1)
0x294: Push((int) 538588)
0x295: @@ SetMessage(Stack[-1])
0x296: Pop(1)
0x297: @@ ClearReplies()
0x298: Pop(0)
0x299: Push((int) 538590)
0x29a: Push((int) -1)
0x29b: Push((int) 40477)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: Push((int) 538591)
0x29f: Push((int) -1)
0x2a0: Push((int) 40478)
0x2a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a2: Pop(3)
0x2a3: Return(); Pop(0)

0x2a4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a5: PushEmpty(bool)
0x2a6: Call2 0x661

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2a9: @ lshStopAnimation()
0x2aa: Pop(0)
0x2ab: GOTO 0x2ae

0x2ac: @ StopAnimation()
0x2ad: Pop(0)
0x2ae: Return(); Pop(0)

0x2af: GOTO 0x1b5

0x2b0: Return(); Pop(0)

0x2b1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2b2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2b3: PushEmpty(bool, object, float)
0x2b4: Stack[-2] = Stack[-12]
0x2b5: Stack[-1] = (float) 70.0
0x2b6: Call2 0x508

0x2b7: Pop(2)
0x2b8: Pop(1); Push((bool) Stack[-1] == 0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2ba: Stack[-10] = (int) -2
0x2bb: Return(); Pop(8)

0x2bc: @ CreateDialog(Stack[-4])
0x2bd: Pop(0)
0x2be: PushEmpty(int)
0x2bf: Call2 0x65b

0x2c0: Pop(0)
0x2c1: @@ SetNPCName(Stack[-1])
0x2c2: Pop(1)
0x2c3: PushEmpty(int)
0x2c4: Call2 0x659

0x2c5: Pop(0)
0x2c6: @@ SetNPCDescription(Stack[-1])
0x2c7: Pop(1)
0x2c8: PushEmpty(string)
0x2c9: Call2 0x65d

0x2ca: Pop(0)
0x2cb: @@ SetPhoto(Stack[-1])
0x2cc: Pop(1)
0x2cd: PushEmpty(string)
0x2ce: Call2 0x65f

0x2cf: Pop(0)
0x2d0: @@ SetPhoto2(Stack[-1])
0x2d1: Pop(1)
0x2d2: PushEmpty(int)
0x2d3: Call2 0x6cd

0x2d4: Pop(0)
0x2d5: @@ SetPlayerName(Stack[-1])
0x2d6: Pop(1)
0x2d7: Stack[-2] = (int) -1
0x2d8: @ IsOverrideActive(Stack[-3])
0x2d9: Pop(0)
0x2da: Push(Stack[-3])
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-10] = (int) -2
0x2dd: Return(); Pop(8)

0x2de: @ DoDialog(Stack[-4])
0x2df: Pop(0)
0x2e0: PushEmpty(object, object)
0x2e1: Stack[-2] = Stack[-11]
0x2e2: Stack[-1] = Stack[-6]
0x2e3: Push(-2, 4); TaskCall(5)
0x2e4: Call2 0x2fb

0x2e5: Pop(-2, 4); TaskReturn
0x2e6: Pop(2)
0x2e7: @@ IsDialogEnd(Stack[-1])
0x2e8: Pop(0)
0x2e9: Pop(0); Push((bool) Stack[-1] == 0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2eb: @ sync()
0x2ec: Pop(0)
0x2ed: @@ IsDialogEnd(Stack[-1])
0x2ee: Pop(0)
0x2ef: GOTO 0x2e9

0x2f0: PushEmpty(object)
0x2f1: Stack[-1] = Stack[-10]
0x2f2: Call2 0x54c

0x2f3: Pop(1)
0x2f4: @ StopDialog(Stack[-4])
0x2f5: Pop(0)
0x2f6: @@ GetReturnValue(Stack[-2])
0x2f7: Pop(0)
0x2f8: Stack[-10] = Stack[-2]
0x2f9: Return(); Pop(8)

0x2fa: Stack[-4] = 0
0x2fb: PushEmpty()
0x2fc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2fd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2fe: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2ff: Push((int) 1)
0x300: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x301: PushEmpty(string)
0x302: Stack[-1] = "Neutral"
0x303: Call2 0x33f

0x304: Pop(1)
0x305: Push((int) 538575)
0x306: @@ SetMessage(Stack[-1])
0x307: Pop(1)
0x308: @@ ClearReplies()
0x309: Pop(0)
0x30a: PushEmpty(bool, object)
0x30b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Call2 0x689

0x30d: Pop(1)
0x30e: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30f: Push((int) 538576)
0x310: Push((int) 40462)
0x311: Push((int) 40461)
0x312: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x313: Pop(3)
0x314: Push((int) 538581)
0x315: Push((int) -1)
0x316: Push((int) 40466)
0x317: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(3)
0x319: Push((int) 538582)
0x31a: Push((int) -1)
0x31b: Push((int) 40467)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: GOTO 0x321

0x31f: Return(); Pop(0)

0x320: GOTO 0x2ff

0x321: PushEmpty(bool)
0x322: Call2 0x661

0x323: Pop(0)
0x324: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x325: @ lshWaitForAnimEnd()
0x326: Pop(0)
0x327: Push( Stack[3 + Tasks[-1].StackPointer] )
0x328: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x329: GOTO 0x32f

0x32a: PushEmpty(string)
0x32b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x32c: Call2 0x5e7

0x32d: Pop(1)
0x32e: GOTO 0x325

0x32f: GOTO 0x33e

0x330: Push("all")
0x331: Push("idle")
0x332: @ PlayAnimation(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: @ WaitForAnimEnd()
0x335: Pop(0)
0x336: Push( Stack[3 + Tasks[-1].StackPointer] )
0x337: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x338: GOTO 0x33e

0x339: Push("all")
0x33a: Push("idle")
0x33b: @ PlayAnimation(Stack[-2], Stack[-1])
0x33c: Pop(2)
0x33d: GOTO 0x334

0x33e: Return(); Pop(0)

0x33f: PushEmpty()
0x340: PushEmpty(bool)
0x341: Call2 0x661

0x342: Pop(0)
0x343: Pop(1); Push((bool) Stack[-1] == 0)
0x344: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x345: Return(); Pop(0)

0x346: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: Return(); Pop(0)

0x349: PushEmpty(string, bool)
0x34a: Stack[-2] = Stack[-3]
0x34b: Push("")
0x34c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-1] = (bool) 0
0x34f: GOTO 0x351

0x350: Stack[-1] = (bool) 1
0x351: Call2 0x5f7

0x352: Pop(2)
0x353: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x354: Return(); Pop(0)

0x355: PushEmpty()
0x356: Push((int) 1)
0x357: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x358: PushEmpty()
0x359: Call2 0x615

0x35a: Pop(0)
0x35b: Push((int) 40461)
0x35c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35d: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x35e: PushEmpty(object, object)
0x35f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x360: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x361: Call2 0x663

0x362: Pop(2)
0x363: Push((int) 40460)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral"
0x368: Call2 0x33f

0x369: Pop(1)
0x36a: Push((int) 538575)
0x36b: @@ SetMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ ClearReplies()
0x36e: Pop(0)
0x36f: PushEmpty(bool, object)
0x370: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x371: Call2 0x689

0x372: Pop(1)
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: Push((int) 538576)
0x375: Push((int) 40462)
0x376: Push((int) 40461)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Push((int) 538581)
0x37a: Push((int) -1)
0x37b: Push((int) 40466)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: Push((int) 538582)
0x37f: Push((int) -1)
0x380: Push((int) 40467)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Return(); Pop(0)

0x384: Push((int) 40462)
0x385: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x387: PushEmpty(string)
0x388: Stack[-1] = "Neutral"
0x389: Call2 0x33f

0x38a: Pop(1)
0x38b: Push((int) 538577)
0x38c: @@ SetMessage(Stack[-1])
0x38d: Pop(1)
0x38e: @@ ClearReplies()
0x38f: Pop(0)
0x390: Push((int) 538578)
0x391: Push((int) 40464)
0x392: Push((int) 40463)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Push((int) 538583)
0x396: Push((int) -1)
0x397: Push((int) 40468)
0x398: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(3)
0x39a: Return(); Pop(0)

0x39b: Push((int) 40464)
0x39c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x39e: PushEmpty(string)
0x39f: Stack[-1] = "Neutral"
0x3a0: Call2 0x33f

0x3a1: Pop(1)
0x3a2: Push((int) 538579)
0x3a3: @@ SetMessage(Stack[-1])
0x3a4: Pop(1)
0x3a5: @@ ClearReplies()
0x3a6: Pop(0)
0x3a7: Push((int) 538580)
0x3a8: Push((int) -1)
0x3a9: Push((int) 40465)
0x3aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ab: Pop(3)
0x3ac: Push((int) 538584)
0x3ad: Push((int) -1)
0x3ae: Push((int) 40469)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Return(); Pop(0)

0x3b2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3b3: PushEmpty(bool)
0x3b4: Call2 0x661

0x3b5: Pop(0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b7: @ lshStopAnimation()
0x3b8: Pop(0)
0x3b9: GOTO 0x3bc

0x3ba: @ StopAnimation()
0x3bb: Pop(0)
0x3bc: Return(); Pop(0)

0x3bd: GOTO 0x356

0x3be: Return(); Pop(0)

0x3bf: PushEmpty()
0x3c0: Call2 0x3c3

0x3c1: Pop(0)
0x3c2: Return(); Pop(0)

0x3c3: PushEmpty()
0x3c4: Call2 0x3ec

0x3c5: Pop(0)
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty(bool, bool)
0x3c8: Push("cleanup")
0x3c9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3cb: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x3cc: @ IsLoaded(Stack[-1])
0x3cd: Pop(0)
0x3ce: Pop(0); Push((bool) Stack[-1] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d0: PushEmpty(object)
0x3d1: Call2 0x61c

0x3d2: Pop(0)
0x3d3: @ RemoveActor(Stack[-1])
0x3d4: Pop(1)
0x3d5: GOTO 0x3da

0x3d6: Push("restore")
0x3d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3d9: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x3da: Return(); Pop(2)

0x3db: Push( Stack[1 + Tasks[-1].StackPointer] )
0x3dc: IF (Stack[-1] == 0) GOTO 0x3e4; Pop(1)

0x3dd: PushEmpty(object)
0x3de: Call2 0x61c

0x3df: Pop(0)
0x3e0: @ RemoveActor(Stack[-1])
0x3e1: Pop(1)
0x3e2: @ Hold()
0x3e3: Pop(0)
0x3e4: PushEmpty()
0x3e5: Call2 0x457

0x3e6: Pop(0)
0x3e7: Return(); Pop(0)

0x3e8: PushEmpty()
0x3e9: Call2 0x466

0x3ea: Pop(0)
0x3eb: Return(); Pop(0)

0x3ec: PushEmpty(bool)
0x3ed: Call2 0x503

0x3ee: Pop(0)
0x3ef: Pop(1); Push((bool) Stack[-1] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f1: @ Hold()
0x3f2: Pop(0)
0x3f3: @ GetDirection(Stack[-0])
0x3f4: Pop(0)
0x3f5: PushEmpty()
0x3f6: Call2 0x49c

0x3f7: Pop(0)
0x3f8: GOTO 0x3f5

0x3f9: Return(); Pop(0)

0x3fa: PushEmpty(object, object)
0x3fb: Push("player")
0x3fc: @ FindActor(Stack[-2], Stack[-1])
0x3fd: Pop(1)
0x3fe: Pop(0); Push((bool) Stack[-1] == 0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Stack[-3] = (bool) 0
0x401: Return(); Pop(2)

0x402: PushEmpty(bool, object)
0x403: Stack[-1] = Stack[-3]
0x404: Call2 0x4fa

0x405: Stack[-5] = Stack[-2]
0x406: Pop(2)
0x407: Return(); Pop(2)

0x408: Stack[-1] = 0
0x409: Push(CvectorIndex(Stack[-0], 0))
0x40a: Push(CvectorIndex(Stack[-0], 2))
0x40b: @ RotateAsync(Stack[-2], Stack[-1])
0x40c: Pop(2)
0x40d: Return(); Pop(0)

0x40e: PushEmpty(object, bool, object, bool)
0x40f: Push("player")
0x410: @ FindActor(Stack[-3], Stack[-1])
0x411: Pop(1)
0x412: Pop(0); Push((bool) Stack[-2] == 0)
0x413: IF (Stack[-1] == 0) GOTO 0x416; Pop(1)

0x414: Stack[-5] = (bool) 0
0x415: Return(); Pop(4)

0x416: PushEmpty(float, object)
0x417: Stack[-1] = Stack[-4]
0x418: Call2 0x4e8

0x419: Pop(1)
0x41a: Push((float)90000.0)
0x41b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Stack[-5] = (bool) 0
0x41e: Return(); Pop(4)

0x41f: @ CanSee(Stack[-1], Stack[-2])
0x420: Pop(0)
0x421: Stack[-5] = Stack[-1]
0x422: Return(); Pop(4)

0x423: Stack[-2] = 0
0x424: PushEmpty(float, float)
0x425: Push((int) 8)
0x426: Push((int) 16)
0x427: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x428: Pop(2)
0x429: Push((int) 10)
0x42a: @ SetTimer(Stack[-1], Stack[-2])
0x42b: Pop(1)
0x42c: Return(); Pop(2)

0x42d: Push((int) 10)
0x42e: @ KillTimer(Stack[-1])
0x42f: Pop(1)
0x430: Return(); Pop(0)

0x431: PushEmpty()
0x432: Push((int) 10)
0x433: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x435: PushEmpty()
0x436: Call2 0x42d

0x437: Pop(0)
0x438: PushEmpty(bool)
0x439: Stack[-1] = (bool) 0
0x43a: PushEmpty(bool)
0x43b: Call2 0x503

0x43c: Pop(0)
0x43d: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43e: PushEmpty(bool)
0x43f: Call2 0x40e

0x440: Pop(0)
0x441: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x442: Stack[-1] = (bool) 1
0x443: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x444: PushEmpty(bool)
0x445: Call2 0x3fa

0x446: Pop(0)
0x447: IF (Stack[-1] == 0) GOTO 0x44f; Pop(1)

0x448: PushEmpty(bool, object)
0x449: PushEmpty(object)
0x44a: Call2 0x61c

0x44b: Stack[-2] = Stack[-1]
0x44c: Pop(1)
0x44d: Call2 0x597

0x44e: Pop(2)
0x44f: GOTO 0x456

0x450: PushEmpty()
0x451: Call2 0x409

0x452: Pop(0)
0x453: PushEmpty()
0x454: Call2 0x424

0x455: Pop(0)
0x456: Return(); Pop(0)

0x457: PushEmpty()
0x458: Call2 0x4e3

0x459: Pop(0)
0x45a: PushEmpty()
0x45b: Call2 0x42d

0x45c: Pop(0)
0x45d: @ lshStopSpeech()
0x45e: Pop(0)
0x45f: @ lshStopAnimation()
0x460: Pop(0)
0x461: @ StopAsync()
0x462: Pop(0)
0x463: @ Hold()
0x464: Pop(0)
0x465: Return(); Pop(0)

0x466: @ StopGroup0()
0x467: Pop(0)
0x468: PushEmpty()
0x469: Call2 0x42d

0x46a: Pop(0)
0x46b: PushEmpty(string)
0x46c: Stack[-1] = "Neutral"
0x46d: Call2 0x5e7

0x46e: Pop(1)
0x46f: PushEmpty()
0x470: Call2 0x424

0x471: Pop(0)
0x472: Return(); Pop(0)

0x473: PushEmpty()
0x474: Push(Stack[-1])
0x475: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x476: PushEmpty()
0x477: Call2 0x424

0x478: Pop(0)
0x479: GOTO 0x47e

0x47a: PushEmpty(string)
0x47b: Stack[-1] = "Neutral"
0x47c: Call2 0x5e7

0x47d: Pop(1)
0x47e: Return(); Pop(0)

0x47f: PushEmpty(bool, bool)
0x480: @ IsOverrideActive(Stack[-1])
0x481: Pop(0)
0x482: Pop(0); Push((bool) Stack[-1] == 0)
0x483: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x484: EventDisable(0)
0x485: PushEmpty()
0x486: Call2 0x4e3

0x487: Pop(0)
0x488: PushEmpty(bool, object)
0x489: Stack[-1] = Stack[-5]
0x48a: Call2 0x4fa

0x48b: Pop(2)
0x48c: EventEnable(0)
0x48d: PushEmpty(object)
0x48e: Stack[-1] = Stack[-4]
0x48f: Call2 0x70a

0x490: Pop(1)
0x491: PushEmpty(string)
0x492: Stack[-1] = "Neutral"
0x493: Call2 0x5e7

0x494: Pop(1)
0x495: PushEmpty()
0x496: Call2 0x42d

0x497: Pop(0)
0x498: PushEmpty()
0x499: Call2 0x424

0x49a: Pop(0)
0x49b: Return(); Pop(2)

0x49c: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x49d: @ WaitForAnimEnd()
0x49e: Pop(0)
0x49f: PushEmpty(bool)
0x4a0: Call2 0x503

0x4a1: Pop(0)
0x4a2: Pop(1); Push((bool) Stack[-1] == 0)
0x4a3: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x4a4: Return(); Pop(12)

0x4a5: PushEmpty(int)
0x4a6: Call2 0x648

0x4a7: Stack[-7] = Stack[-1]
0x4a8: Pop(1)
0x4a9: Stack[-5] = (int) 0
0x4aa: PushEmpty(bool)
0x4ab: Stack[-1] = (bool) 0
0x4ac: Push((int) 5)
0x4ad: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4af: PushEmpty(bool)
0x4b0: Call2 0x503

0x4b1: Pop(0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: Stack[-1] = (bool) 1
0x4b4: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4b5: Pop(0); Push((bool) Stack[-6] == 0)
0x4b6: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b7: Push((int) 3)
0x4b8: @ Sleep(Stack[-1], Stack[-5])
0x4b9: Pop(1)
0x4ba: Pop(0); Push((bool) Stack[-4] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4bc: GOTO 0x4de

0x4bd: GOTO 0x4d3

0x4be: @ irand(Stack[-3], Stack[-6])
0x4bf: Pop(0)
0x4c0: Push((int) 5)
0x4c1: @ irand(Stack[-3], Stack[-1])
0x4c2: Pop(1)
0x4c3: Push((int) 0)
0x4c4: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: Stack[-3] = (int) 0
0x4c7: Push("all")
0x4c8: PushEmpty(string, int)
0x4c9: Stack[-1] = Stack[-6]
0x4ca: Call2 0x641

0x4cb: Pop(1)
0x4cc: @ PlayAnimation(Stack[-2], Stack[-1])
0x4cd: Pop(2)
0x4ce: @ WaitForAnimEnd(Stack[-1])
0x4cf: Pop(0)
0x4d0: Pop(0); Push((bool) Stack[-1] == 0)
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d2: GOTO 0x4de

0x4d3: PushEmpty(bool)
0x4d4: Call2 0x4e1

0x4d5: Pop(0)
0x4d6: Pop(1); Push((bool) Stack[-1] == 0)
0x4d7: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d8: GOTO 0x4de

0x4d9: @ ResetAAS()
0x4da: Pop(0)
0x4db: Push((int) 1)
0x4dc: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x4dd: GOTO 0x4aa

0x4de: @ ResetAAS()
0x4df: Pop(0)
0x4e0: Return(); Pop(12)

0x4e1: Stack[-1] = (bool) 1
0x4e2: Return(); Pop(0)

0x4e3: @ StopAnimation()
0x4e4: Pop(0)
0x4e5: @ StopGroup0()
0x4e6: Pop(0)
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x4e9: @ GetPosition(Stack[-3])
0x4ea: Pop(0)
0x4eb: @@ GetPosition(Stack[-2])
0x4ec: Pop(0)
0x4ed: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x4ee: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x4ef: Return(); Pop(6)

0x4f0: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x4f1: @ GetPosition(Stack[-3])
0x4f2: Pop(0)
0x4f3: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x4f4: Push(CvectorIndex(Stack[-2], 0))
0x4f5: Push(CvectorIndex(Stack[-3], 2))
0x4f6: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x4f7: Pop(2)
0x4f8: Stack[-8] = Stack[-1]
0x4f9: Return(); Pop(6)

0x4fa: PushEmpty(cvector, cvector)
0x4fb: @@ GetPosition(Stack[-1])
0x4fc: Pop(0)
0x4fd: PushEmpty(bool, cvector)
0x4fe: Stack[-1] = Stack[-3]
0x4ff: Call2 0x4f0

0x500: Stack[-6] = Stack[-2]
0x501: Pop(2)
0x502: Return(); Pop(2)

0x503: PushEmpty(bool, bool)
0x504: @ IsLoaded(Stack[-1])
0x505: Pop(0)
0x506: Stack[-3] = Stack[-1]
0x507: Return(); Pop(2)

0x508: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x509: @@ GetPosition(Stack[-8])
0x50a: Pop(0)
0x50b: @@ GetEyesHeight(Stack[-9])
0x50c: Pop(0)
0x50d: Push(CvectorIndex(Stack[-8], 1))
0x50e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x50f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x510: @ GetPosition(Stack[-7])
0x511: Pop(0)
0x512: @ GetEyesHeight(Stack[-9])
0x513: Pop(0)
0x514: Push(CvectorIndex(Stack[-7], 1))
0x515: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x516: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x517: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x518: Push(CvectorIndex(Stack[-6], 1))
0x519: Stack[-1] = (int) 0
0x51a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x51b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x51c: Pop(1); Push(Sqrt(Stack[-1]))
0x51d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x51e: Stack[-5] = -Stack[-6]; Pop(0);
0x51f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x520: PushEmpty(cvector, cvector)
0x521: Push(CVector(0.0, 1.0, 0.0))
0x522: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x523: Call2 0x622

0x524: Pop(1)
0x525: Push((int) 25)
0x526: Pop(2); Push(Stack[-2] * Stack[-1]);
0x527: Pop(2); Push(Stack[-2] + Stack[-1]);
0x528: Push(CVector(0.0, 10.0, 0.0))
0x529: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x52a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x52b: @ IsOverrideActive(Stack[-2])
0x52c: Pop(0)
0x52d: Push(Stack[-2])
0x52e: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x52f: Stack[-21] = (bool) 0
0x530: Return(); Pop(18)

0x531: @ StopWorld()
0x532: Pop(0)
0x533: @ CameraTransit(Stack[-3], Stack[-5])
0x534: Pop(0)
0x535: Push(CvectorIndex(Stack[-4], 0))
0x536: Push(CvectorIndex(Stack[-5], 2))
0x537: @ Rotate(Stack[-2], Stack[-1])
0x538: Pop(2)
0x539: PushEmpty(bool)
0x53a: Call2 0x661

0x53b: Pop(0)
0x53c: IF (Stack[-1] == 0) GOTO 0x53e; Pop(1)

0x53d: GOTO 0x546

0x53e: Push("head")
0x53f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x540: Pop(1)
0x541: Push(Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x543: Push("head")
0x544: @ LookAsyncCamera(Stack[-1])
0x545: Pop(1)
0x546: @ CameraWaitForPlayFinish()
0x547: Pop(0)
0x548: @ ResumeWorld()
0x549: Pop(0)
0x54a: Stack[-21] = (bool) 1
0x54b: Return(); Pop(18)

0x54c: PushEmpty(bool, bool)
0x54d: @ CameraSwitchToNormal()
0x54e: Pop(0)
0x54f: PushEmpty(bool)
0x550: Call2 0x661

0x551: Pop(0)
0x552: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x553: GOTO 0x55c

0x554: Push("head")
0x555: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x556: Pop(1)
0x557: Push(Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55c; Pop(1)

0x559: Push("head")
0x55a: @ UnlookAsync(Stack[-1])
0x55b: Pop(1)
0x55c: Return(); Pop(2)

0x55d: PushEmpty(int, int, int, int)
0x55e: Push("voice_common")
0x55f: @ GetVariable(Stack[-1], Stack[-3])
0x560: Pop(1)
0x561: Push(Stack[-2])
0x562: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x563: PushEmpty(bool, object)
0x564: Stack[-1] = Stack[-7]
0x565: Call2 0x597

0x566: Pop(1)
0x567: Pop(1); Push((bool) Stack[-1] == 0)
0x568: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x569: PushEmpty(bool, object)
0x56a: Stack[-1] = Stack[-7]
0x56b: Call2 0x5bc

0x56c: Pop(1)
0x56d: Pop(1); Push((bool) Stack[-1] == 0)
0x56e: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56f: Stack[-6] = (bool) 0
0x570: Return(); Pop(4)

0x571: Push((int) 2)
0x572: @ irand(Stack[-2], Stack[-1])
0x573: Pop(1)
0x574: Push(Stack[-1])
0x575: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x576: Push("voice_common")
0x577: Push((int) 1)
0x578: Pop(1); Push(Stack[-4] + Stack[-1]);
0x579: Push((int) 3)
0x57a: Pop(2); Push(Stack[-2] % Stack[-1]);
0x57b: @ SetVariable(Stack[-2], Stack[-1])
0x57c: Pop(2)
0x57d: GOTO 0x582

0x57e: Push("voice_common")
0x57f: Push((int) 0)
0x580: @ SetVariable(Stack[-2], Stack[-1])
0x581: Pop(2)
0x582: GOTO 0x595

0x583: PushEmpty(bool, object)
0x584: Stack[-1] = Stack[-7]
0x585: Call2 0x5bc

0x586: Pop(1)
0x587: Pop(1); Push((bool) Stack[-1] == 0)
0x588: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x589: PushEmpty(bool, object)
0x58a: Stack[-1] = Stack[-7]
0x58b: Call2 0x597

0x58c: Pop(1)
0x58d: Pop(1); Push((bool) Stack[-1] == 0)
0x58e: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58f: Stack[-6] = (bool) 0
0x590: Return(); Pop(4)

0x591: Push("voice_common")
0x592: Push((int) 1)
0x593: @ SetVariable(Stack[-2], Stack[-1])
0x594: Pop(2)
0x595: Stack[-6] = (bool) 1
0x596: Return(); Pop(4)

0x597: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x598: Stack[-5] = "c"
0x599: Stack[-4] = (int) 0
0x59a: Push((int) 1)
0x59b: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x59c: Push((int) 1)
0x59d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x59e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x59f: @@ HasProperty(Stack[-1], Stack[-4])
0x5a0: Pop(1)
0x5a1: Pop(0); Push((bool) Stack[-3] == 0)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a3: GOTO 0x5a7

0x5a4: Push((int) 1)
0x5a5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5a6: GOTO 0x59a

0x5a7: Pop(0); Push((bool) Stack[-4] == 0)
0x5a8: IF (Stack[-1] == 0) GOTO 0x5ab; Pop(1)

0x5a9: Stack[-12] = (bool) 0
0x5aa: Return(); Pop(10)

0x5ab: Stack[-2] = (int) 0
0x5ac: Push((int) 1)
0x5ad: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b1; Pop(1)

0x5af: @ irand(Stack[-2], Stack[-4])
0x5b0: Pop(0)
0x5b1: Push((int) 1)
0x5b2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5b3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5b4: @@ GetProperty(Stack[-1], Stack[-2])
0x5b5: Pop(1)
0x5b6: PushEmpty(bool, string)
0x5b7: Stack[-1] = Stack[-3]
0x5b8: Call2 0x606

0x5b9: Stack[-14] = Stack[-2]
0x5ba: Pop(2)
0x5bb: Return(); Pop(10)

0x5bc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x5bd: Push("d")
0x5be: PushEmpty(int)
0x5bf: Call2 0x638

0x5c0: Pop(0)
0x5c1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5c2: Push("m")
0x5c3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x5c4: Stack[-4] = (int) 0
0x5c5: Push((int) 1)
0x5c6: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5c7: Push((int) 1)
0x5c8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x5c9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5ca: @@ HasProperty(Stack[-1], Stack[-4])
0x5cb: Pop(1)
0x5cc: Pop(0); Push((bool) Stack[-3] == 0)
0x5cd: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ce: GOTO 0x5d2

0x5cf: Push((int) 1)
0x5d0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x5d1: GOTO 0x5c5

0x5d2: Pop(0); Push((bool) Stack[-4] == 0)
0x5d3: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d4: Stack[-12] = (bool) 0
0x5d5: Return(); Pop(10)

0x5d6: Stack[-2] = (int) 0
0x5d7: Push((int) 1)
0x5d8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5da: @ irand(Stack[-2], Stack[-4])
0x5db: Pop(0)
0x5dc: Push((int) 1)
0x5dd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x5de: Pop(1); Push(Stack[-6] + Stack[-1]);
0x5df: @@ GetProperty(Stack[-1], Stack[-2])
0x5e0: Pop(1)
0x5e1: PushEmpty(bool, string)
0x5e2: Stack[-1] = Stack[-3]
0x5e3: Call2 0x606

0x5e4: Stack[-14] = Stack[-2]
0x5e5: Pop(2)
0x5e6: Return(); Pop(10)

0x5e7: PushEmpty(bool, float, float, bool, float, float)
0x5e8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5e9: Pop(0)
0x5ea: Push(Stack[-3])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5ec: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5ed: Pop(0)
0x5ee: Push((bool) 0)
0x5ef: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5f0: Pop(1)
0x5f1: GOTO 0x5f6

0x5f2: Push("Can't find lsh animation : ")
0x5f3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5f4: @ Trace(Stack[-1])
0x5f5: Pop(1)
0x5f6: Return(); Pop(6)

0x5f7: PushEmpty(bool, float, float, bool, float, float)
0x5f8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5f9: Pop(0)
0x5fa: Push(Stack[-3])
0x5fb: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x5fc: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5fd: Pop(0)
0x5fe: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5ff: Pop(0)
0x600: GOTO 0x605

0x601: Push("Can't find lsh animation : ")
0x602: Pop(1); Push(Stack[-1] + Stack[-9]);
0x603: @ Trace(Stack[-1])
0x604: Pop(1)
0x605: Return(); Pop(6)

0x606: PushEmpty(bool, bool)
0x607: PushEmpty(bool)
0x608: Call2 0x661

0x609: Pop(0)
0x60a: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x60b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x60c: Pop(0)
0x60d: Push(Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x60f: @ lshPlaySpeech(Stack[-3])
0x610: Pop(0)
0x611: Stack[-4] = (bool) 1
0x612: Return(); Pop(2)

0x613: Stack[-4] = (bool) 0
0x614: Return(); Pop(2)

0x615: PushEmpty(bool)
0x616: Call2 0x661

0x617: Pop(0)
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: @ lshStopSpeech()
0x61a: Pop(0)
0x61b: Return(); Pop(0)

0x61c: PushEmpty(object, object)
0x61d: @ self(Stack[-1])
0x61e: Pop(0)
0x61f: Stack[-3] = Stack[-1]
0x620: Return(); Pop(2)

0x621: Stack[-1] = 0
0x622: PushEmpty(float, float)
0x623: Pop(0); Push(Stack[-3] | Stack[-3]);
0x624: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x625: Push((float)0.0)
0x626: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x628: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x629: Return(); Pop(2)

0x62a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x62b: Return(); Pop(2)

0x62c: PushEmpty(object, object)
0x62d: @ FindActor(Stack[-1], Stack[-4])
0x62e: Pop(0)
0x62f: Pop(0); Push((bool) Stack[-1] == 0)
0x630: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x631: Stack[-5] = (bool) 0
0x632: Return(); Pop(2)

0x633: @ Trigger(Stack[-1], Stack[-3])
0x634: Pop(0)
0x635: Stack[-5] = (bool) 1
0x636: Return(); Pop(2)

0x637: Stack[-1] = 0
0x638: PushEmpty(float, float)
0x639: @ GetGameTime(Stack[-1])
0x63a: Pop(0)
0x63b: Push((int) 1)
0x63c: PushEmpty(int)
0x63d: Push((int) 24)
0x63e: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x63f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x640: Return(); Pop(2)

0x641: PushEmpty(string, string)
0x642: Stack[-1] = "idle"
0x643: Push(Stack[-3])
0x644: IF (Stack[-1] == 0) GOTO 0x646; Pop(1)

0x645: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x646: Stack[-4] = Stack[-1]
0x647: Return(); Pop(2)

0x648: PushEmpty(int, bool, int, bool)
0x649: Stack[-2] = (int) 0
0x64a: Push("all")
0x64b: PushEmpty(string, int)
0x64c: Stack[-1] = Stack[-5]
0x64d: Call2 0x641

0x64e: Pop(1)
0x64f: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(2)
0x651: Pop(0); Push((bool) Stack[-1] == 0)
0x652: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x653: GOTO 0x657

0x654: Push((int) 1)
0x655: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x656: GOTO 0x64a

0x657: Stack[-5] = Stack[-2]
0x658: Return(); Pop(4)

0x659: Stack[-1] = (int) 515540
0x65a: Return(); Pop(0)

0x65b: Stack[-1] = (int) 502865
0x65c: Return(); Pop(0)

0x65d: Stack[-1] = "ui/NPC_Klara.png"
0x65e: Return(); Pop(0)

0x65f: Stack[-1] = "ui/NPC_Klara_b.png"
0x660: Return(); Pop(0)

0x661: Stack[-1] = (bool) 1
0x662: Return(); Pop(0)

0x663: PushEmpty()
0x664: PushEmpty(string)
0x665: Stack[-1] = "Late1"
0x666: Call2 0x6de

0x667: Pop(1)
0x668: Return(); Pop(0)

0x669: PushEmpty()
0x66a: PushEmpty(string)
0x66b: Stack[-1] = "1"
0x66c: Call2 0x6de

0x66d: Pop(1)
0x66e: Return(); Pop(0)

0x66f: PushEmpty()
0x670: PushEmpty(bool, string, string)
0x671: Stack[-2] = "klara2_positioner"
0x672: Stack[-1] = "remove_klara"
0x673: Call2 0x62c

0x674: Pop(3)
0x675: Return(); Pop(0)

0x676: PushEmpty()
0x677: PushEmpty(bool, string, string)
0x678: Stack[-2] = "klara2_svita_positioner"
0x679: Stack[-1] = "place_svita"
0x67a: Call2 0x62c

0x67b: Pop(3)
0x67c: Return(); Pop(0)

0x67d: PushEmpty()
0x67e: PushEmpty(bool, string, string)
0x67f: Stack[-2] = "klara2_positioner"
0x680: Stack[-1] = "klara_stay"
0x681: Call2 0x62c

0x682: Pop(3)
0x683: Return(); Pop(0)

0x684: PushEmpty()
0x685: PushEmpty()
0x686: Call2 0x705

0x687: Pop(0)
0x688: Return(); Pop(0)

0x689: PushEmpty()
0x68a: PushEmpty(bool, object)
0x68b: Stack[-1] = Stack[-3]
0x68c: Call2 0x6b1

0x68d: Pop(1)
0x68e: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68f: Stack[-2] = (bool) 1
0x690: Return(); Pop(0)

0x691: Stack[-2] = (bool) 0
0x692: Return(); Pop(0)

0x693: PushEmpty()
0x694: PushEmpty(bool, object)
0x695: Stack[-1] = Stack[-3]
0x696: Call2 0x6b8

0x697: Pop(1)
0x698: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x699: Stack[-2] = (bool) 1
0x69a: Return(); Pop(0)

0x69b: Stack[-2] = (bool) 0
0x69c: Return(); Pop(0)

0x69d: PushEmpty()
0x69e: PushEmpty(bool, object)
0x69f: Stack[-1] = Stack[-3]
0x6a0: Call2 0x6bf

0x6a1: Pop(1)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6a5; Pop(1)

0x6a3: Stack[-2] = (bool) 1
0x6a4: Return(); Pop(0)

0x6a5: Stack[-2] = (bool) 0
0x6a6: Return(); Pop(0)

0x6a7: PushEmpty()
0x6a8: PushEmpty(bool, object)
0x6a9: Stack[-1] = Stack[-3]
0x6aa: Call2 0x6c6

0x6ab: Pop(1)
0x6ac: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ad: Stack[-2] = (bool) 1
0x6ae: Return(); Pop(0)

0x6af: Stack[-2] = (bool) 0
0x6b0: Return(); Pop(0)

0x6b1: PushEmpty()
0x6b2: PushEmpty(bool, string)
0x6b3: Stack[-1] = "Late1"
0x6b4: Call2 0x6e9

0x6b5: Stack[-4] = Stack[-2]
0x6b6: Pop(2)
0x6b7: Return(); Pop(0)

0x6b8: PushEmpty()
0x6b9: PushEmpty(bool, string)
0x6ba: Stack[-1] = "1"
0x6bb: Call2 0x6e9

0x6bc: Stack[-4] = Stack[-2]
0x6bd: Pop(2)
0x6be: Return(); Pop(0)

0x6bf: PushEmpty()
0x6c0: PushEmpty(int)
0x6c1: Call2 0x638

0x6c2: Pop(0)
0x6c3: Push((int) 6)
0x6c4: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x6c5: Return(); Pop(0)

0x6c6: PushEmpty()
0x6c7: PushEmpty(int)
0x6c8: Call2 0x638

0x6c9: Pop(0)
0x6ca: Push((int) 7)
0x6cb: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x6cc: Return(); Pop(0)

0x6cd: PushEmpty(int, int)
0x6ce: Push("branch")
0x6cf: @ GetVariable(Stack[-1], Stack[-2])
0x6d0: Pop(1)
0x6d1: Push((int) 0)
0x6d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d3: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6d4: Stack[-3] = (int) 1
0x6d5: Return(); Pop(2)

0x6d6: GOTO 0x6dc

0x6d7: Push((int) 1)
0x6d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-3] = (int) 2
0x6db: Return(); Pop(2)

0x6dc: Stack[-3] = (int) 3
0x6dd: Return(); Pop(2)

0x6de: PushEmpty(int, int)
0x6df: Push("day")
0x6e0: @ GetProperty(Stack[-1], Stack[-2])
0x6e1: Pop(1)
0x6e2: Push("K2S_Klara2")
0x6e3: Pop(1); Push(Stack[-1] + Stack[-4]);
0x6e4: Pop(1); Push(Stack[-1] + Stack[-2]);
0x6e5: Push((int) 1)
0x6e6: @ SetVariable(Stack[-2], Stack[-1])
0x6e7: Pop(2)
0x6e8: Return(); Pop(2)

0x6e9: PushEmpty(int, int, int, int)
0x6ea: Push("day")
0x6eb: @ GetProperty(Stack[-1], Stack[-3])
0x6ec: Pop(1)
0x6ed: Push("K2S_Klara2")
0x6ee: Pop(1); Push(Stack[-1] + Stack[-6]);
0x6ef: Pop(1); Push(Stack[-1] + Stack[-3]);
0x6f0: @ GetVariable(Stack[-1], Stack[-2])
0x6f1: Pop(1)
0x6f2: Push((int) 0)
0x6f3: Stack[-7] = Stack[-2] == Stack[-1]; Pop(1);
0x6f4: Return(); Pop(4)

0x6f5: PushEmpty(int, int)
0x6f6: Push("k2system_klara_day")
0x6f7: @ GetVariable(Stack[-1], Stack[-2])
0x6f8: Pop(1)
0x6f9: Stack[-3] = Stack[-1]
0x6fa: Return(); Pop(2)

0x6fb: PushEmpty(int, int)
0x6fc: PushEmpty(int)
0x6fd: Call2 0x6f5

0x6fe: Stack[-2] = Stack[-1]
0x6ff: Pop(1)
0x700: Push("k2system_klara_state")
0x701: Pop(1); Push(Stack[-1] + Stack[-2]);
0x702: @ SetVariable(Stack[-1], Stack[-4])
0x703: Pop(1)
0x704: Return(); Pop(2)

0x705: PushEmpty(int)
0x706: Stack[-1] = (int) 1
0x707: Call2 0x6fb

0x708: Pop(1)
0x709: Return(); Pop(0)

0x70a: PushEmpty(int, int, int, int)
0x70b: Push("mt_klara2")
0x70c: @ GetVariable(Stack[-1], Stack[-3])
0x70d: Pop(1)
0x70e: Pop(0); Push((bool) Stack[-2] == 0)
0x70f: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x710: PushEmpty(int, object)
0x711: Stack[-1] = Stack[-7]
0x712: Push(-2, 1); TaskCall(0)
0x713: Call2 0x0

0x714: Pop(-2, 1); TaskReturn
0x715: Pop(2)
0x716: Push("mt_klara2")
0x717: Push((int) 1)
0x718: @ SetVariable(Stack[-2], Stack[-1])
0x719: Pop(2)
0x71a: Push("day")
0x71b: @ GetProperty(Stack[-1], Stack[-2])
0x71c: Pop(1)
0x71d: PushEmpty(int)
0x71e: Call2 0x638

0x71f: Pop(0)
0x720: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x721: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x722: PushEmpty(int, object)
0x723: Stack[-1] = Stack[-7]
0x724: Push(-2, 1); TaskCall(2)
0x725: Call2 0x110

0x726: Pop(-2, 1); TaskReturn
0x727: Pop(2)
0x728: GOTO 0x72f

0x729: PushEmpty(int, object)
0x72a: Stack[-1] = Stack[-7]
0x72b: Push(-2, 1); TaskCall(4)
0x72c: Call2 0x2b1

0x72d: Pop(-2, 1); TaskReturn
0x72e: Pop(2)
0x72f: Return(); Pop(4)

