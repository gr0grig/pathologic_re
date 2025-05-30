GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	Fear
	Rage
	Adoration
	Dream
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	Can't find lsh animation : 
	add
	money
	Money
	ui/NPC_Anna.png
	ui/NPC_Anna_b.png
	b5q01_1
	money10000 is given
	playsound
	givemoney
	oob6Anna1
	money3000 is given
	b5q01TalkToVera
	b5q01VeraDead
	branch

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
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)

RunOp = 0x61a
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3b9 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4f2 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5f0 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x666 Vars = (int)
		EVENT_6 Op = 0x68c Vars = ()
		EVENT_5 Op = 0x69b Vars = ()
		EVENT_45 Op = 0x6a8 Vars = (bool)
		EVENT_0 Op = 0x6b4 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x744

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8b7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8b5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8b9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8bb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x927

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
0x31: Call2 0x85a

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x79b

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
0x48: Call2 0x789

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
0x5b: Push((int) 517997)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 517998)
0x61: Push((int) 29658)
0x62: Push((int) 19131)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 528292)
0x66: Push((int) 29658)
0x67: Push((int) 29657)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x8bd

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x825

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
0x8d: Call2 0x8bd

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
0x9d: Call2 0x835

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x853

0xa6: Pop(0)
0xa7: Push((int) 19130)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 517997)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 517998)
0xb4: Push((int) 29658)
0xb5: Push((int) 19131)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 528292)
0xb9: Push((int) 29658)
0xba: Push((int) 29657)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 29658)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 528293)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 528294)
0xcb: Push((int) -1)
0xcc: Push((int) 29660)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 528295)
0xd0: Push((int) -1)
0xd1: Push((int) 29661)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd6: PushEmpty(bool)
0xd7: Call2 0x8bd

0xd8: Pop(0)
0xd9: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xda: @ lshStopAnimation()
0xdb: Pop(0)
0xdc: GOTO 0xdf

0xdd: @ StopAnimation()
0xde: Pop(0)
0xdf: Return(); Pop(0)

0xe0: GOTO 0xa2

0xe1: Return(); Pop(0)

0xe2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe4: PushEmpty(bool, object, float)
0xe5: Stack[-2] = Stack[-12]
0xe6: Stack[-1] = (float) 70.0
0xe7: Call2 0x744

0xe8: Pop(2)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xeb: Stack[-10] = (int) -2
0xec: Return(); Pop(8)

0xed: @ CreateDialog(Stack[-4])
0xee: Pop(0)
0xef: PushEmpty(int)
0xf0: Call2 0x8b7

0xf1: Pop(0)
0xf2: @@ SetNPCName(Stack[-1])
0xf3: Pop(1)
0xf4: PushEmpty(int)
0xf5: Call2 0x8b5

0xf6: Pop(0)
0xf7: @@ SetNPCDescription(Stack[-1])
0xf8: Pop(1)
0xf9: PushEmpty(string)
0xfa: Call2 0x8b9

0xfb: Pop(0)
0xfc: @@ SetPhoto(Stack[-1])
0xfd: Pop(1)
0xfe: PushEmpty(string)
0xff: Call2 0x8bb

0x100: Pop(0)
0x101: @@ SetPhoto2(Stack[-1])
0x102: Pop(1)
0x103: PushEmpty(int)
0x104: Call2 0x927

0x105: Pop(0)
0x106: @@ SetPlayerName(Stack[-1])
0x107: Pop(1)
0x108: Stack[-2] = (int) -1
0x109: @ IsOverrideActive(Stack[-3])
0x10a: Pop(0)
0x10b: Push(Stack[-3])
0x10c: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10d: Stack[-10] = (int) -2
0x10e: Return(); Pop(8)

0x10f: @ DoDialog(Stack[-4])
0x110: Pop(0)
0x111: PushEmpty(bool, object)
0x112: PushEmpty(object)
0x113: Call2 0x85a

0x114: Stack[-2] = Stack[-1]
0x115: Pop(1)
0x116: Call2 0x79b

0x117: Pop(2)
0x118: PushEmpty(object, object)
0x119: Stack[-2] = Stack[-11]
0x11a: Stack[-1] = Stack[-6]
0x11b: Push(-2, 4); TaskCall(3)
0x11c: Call2 0x133

0x11d: Pop(-2, 4); TaskReturn
0x11e: Pop(2)
0x11f: @@ IsDialogEnd(Stack[-1])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x123: @ sync()
0x124: Pop(0)
0x125: @@ IsDialogEnd(Stack[-1])
0x126: Pop(0)
0x127: GOTO 0x121

0x128: PushEmpty(object)
0x129: Stack[-1] = Stack[-10]
0x12a: Call2 0x789

0x12b: Pop(1)
0x12c: @ StopDialog(Stack[-4])
0x12d: Pop(0)
0x12e: @@ GetReturnValue(Stack[-2])
0x12f: Pop(0)
0x130: Stack[-10] = Stack[-2]
0x131: Return(); Pop(8)

0x132: Stack[-4] = 0
0x133: PushEmpty()
0x134: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x135: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x136: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x137: Push((int) 1)
0x138: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Fear"
0x13b: Call2 0x18e

0x13c: Pop(1)
0x13d: Push((int) 518646)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: PushEmpty(bool)
0x143: Stack[-1] = (bool) 0
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0x8f7

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x90f

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Stack[-1] = (bool) 1
0x14f: IF (Stack[-1] == 0) GOTO 0x155; Pop(1)

0x150: Push((int) 518647)
0x151: Push((int) 19740)
0x152: Push((int) 19739)
0x153: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x154: Pop(3)
0x155: PushEmpty(bool)
0x156: Stack[-1] = (bool) 0
0x157: PushEmpty(bool, object)
0x158: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x159: Call2 0x903

0x15a: Pop(1)
0x15b: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0x91b

0x15f: Pop(1)
0x160: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x161: Stack[-1] = (bool) 1
0x162: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x163: Push((int) 518651)
0x164: Push((int) 19744)
0x165: Push((int) 19743)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 518654)
0x169: Push((int) -1)
0x16a: Push((int) 19746)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: GOTO 0x170

0x16e: Return(); Pop(0)

0x16f: GOTO 0x137

0x170: PushEmpty(bool)
0x171: Call2 0x8bd

0x172: Pop(0)
0x173: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x174: @ lshWaitForAnimEnd()
0x175: Pop(0)
0x176: Push( Stack[3 + Tasks[-1].StackPointer] )
0x177: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x178: GOTO 0x17e

0x179: PushEmpty(string)
0x17a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17b: Call2 0x825

0x17c: Pop(1)
0x17d: GOTO 0x174

0x17e: GOTO 0x18d

0x17f: Push("all")
0x180: Push("idle")
0x181: @ PlayAnimation(Stack[-2], Stack[-1])
0x182: Pop(2)
0x183: @ WaitForAnimEnd()
0x184: Pop(0)
0x185: Push( Stack[3 + Tasks[-1].StackPointer] )
0x186: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0x187: GOTO 0x18d

0x188: Push("all")
0x189: Push("idle")
0x18a: @ PlayAnimation(Stack[-2], Stack[-1])
0x18b: Pop(2)
0x18c: GOTO 0x183

0x18d: Return(); Pop(0)

0x18e: PushEmpty()
0x18f: PushEmpty(bool)
0x190: Call2 0x8bd

0x191: Pop(0)
0x192: Pop(1); Push((bool) Stack[-1] == 0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Return(); Pop(0)

0x195: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x196: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x197: Return(); Pop(0)

0x198: PushEmpty(string, bool)
0x199: Stack[-2] = Stack[-3]
0x19a: Push("")
0x19b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x19c: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19d: Stack[-1] = (bool) 0
0x19e: GOTO 0x1a0

0x19f: Stack[-1] = (bool) 1
0x1a0: Call2 0x835

0x1a1: Pop(2)
0x1a2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push((int) 1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x853

0x1a9: Pop(0)
0x1aa: Push((int) 19739)
0x1ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: PushEmpty(object, object)
0x1ae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b0: Call2 0x8bf

0x1b1: Pop(2)
0x1b2: Push((int) 19745)
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b5: PushEmpty(object, object)
0x1b6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b8: Call2 0x8c5

0x1b9: Pop(2)
0x1ba: PushEmpty(object, object)
0x1bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bd: Call2 0x8cb

0x1be: Pop(2)
0x1bf: PushEmpty(object, object)
0x1c0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c2: Call2 0x8d5

0x1c3: Pop(2)
0x1c4: Push((int) 19824)
0x1c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c7: PushEmpty(object, object)
0x1c8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ca: Call2 0x8c5

0x1cb: Pop(2)
0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1cf: Call2 0x8e1

0x1d0: Pop(2)
0x1d1: PushEmpty(object, object)
0x1d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d4: Call2 0x8d5

0x1d5: Pop(2)
0x1d6: Push((int) 19738)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Fear"
0x1db: Call2 0x18e

0x1dc: Pop(1)
0x1dd: Push((int) 518646)
0x1de: @@ SetMessage(Stack[-1])
0x1df: Pop(1)
0x1e0: @@ ClearReplies()
0x1e1: Pop(0)
0x1e2: PushEmpty(bool)
0x1e3: Stack[-1] = (bool) 0
0x1e4: PushEmpty(bool, object)
0x1e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Call2 0x8f7

0x1e7: Pop(1)
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e9: PushEmpty(bool, object)
0x1ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1eb: Call2 0x90f

0x1ec: Pop(1)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: Stack[-1] = (bool) 1
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: Push((int) 518647)
0x1f1: Push((int) 19740)
0x1f2: Push((int) 19739)
0x1f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f4: Pop(3)
0x1f5: PushEmpty(bool)
0x1f6: Stack[-1] = (bool) 0
0x1f7: PushEmpty(bool, object)
0x1f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Call2 0x903

0x1fa: Pop(1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fc: PushEmpty(bool, object)
0x1fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fe: Call2 0x91b

0x1ff: Pop(1)
0x200: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x201: Stack[-1] = (bool) 1
0x202: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x203: Push((int) 518651)
0x204: Push((int) 19744)
0x205: Push((int) 19743)
0x206: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x207: Pop(3)
0x208: Push((int) 518654)
0x209: Push((int) -1)
0x20a: Push((int) 19746)
0x20b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20c: Pop(3)
0x20d: Return(); Pop(0)

0x20e: Push((int) 19744)
0x20f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x211: PushEmpty(string)
0x212: Stack[-1] = "Rage"
0x213: Call2 0x18e

0x214: Pop(1)
0x215: Push((int) 518652)
0x216: @@ SetMessage(Stack[-1])
0x217: Pop(1)
0x218: @@ ClearReplies()
0x219: Pop(0)
0x21a: Push((int) 518720)
0x21b: Push((int) 19815)
0x21c: Push((int) 19811)
0x21d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21e: Pop(3)
0x21f: Push((int) 518722)
0x220: Push((int) -1)
0x221: Push((int) 19813)
0x222: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x223: Pop(3)
0x224: Push((int) 518732)
0x225: Push((int) -1)
0x226: Push((int) 19824)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: Return(); Pop(0)

0x22a: Push((int) 19815)
0x22b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x22d: PushEmpty(string)
0x22e: Stack[-1] = "Rage"
0x22f: Call2 0x18e

0x230: Pop(1)
0x231: Push((int) 518724)
0x232: @@ SetMessage(Stack[-1])
0x233: Pop(1)
0x234: @@ ClearReplies()
0x235: Pop(0)
0x236: Push((int) 518725)
0x237: Push((int) 19817)
0x238: Push((int) 19816)
0x239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: Push((int) 518727)
0x23c: Push((int) 19819)
0x23d: Push((int) 19818)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Return(); Pop(0)

0x241: Push((int) 19819)
0x242: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x244: PushEmpty(string)
0x245: Stack[-1] = "Adoration"
0x246: Call2 0x18e

0x247: Pop(1)
0x248: Push((int) 518728)
0x249: @@ SetMessage(Stack[-1])
0x24a: Pop(1)
0x24b: @@ ClearReplies()
0x24c: Pop(0)
0x24d: Push((int) 518729)
0x24e: Push((int) 19817)
0x24f: Push((int) 19820)
0x250: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x251: Pop(3)
0x252: Return(); Pop(0)

0x253: Push((int) 19817)
0x254: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x255: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x256: PushEmpty(string)
0x257: Stack[-1] = "Adoration"
0x258: Call2 0x18e

0x259: Pop(1)
0x25a: Push((int) 518726)
0x25b: @@ SetMessage(Stack[-1])
0x25c: Pop(1)
0x25d: @@ ClearReplies()
0x25e: Pop(0)
0x25f: Push((int) 518730)
0x260: Push((int) -1)
0x261: Push((int) 19822)
0x262: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x263: Pop(3)
0x264: Push((int) 518653)
0x265: Push((int) -1)
0x266: Push((int) 19745)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: Return(); Pop(0)

0x26a: Push((int) 19740)
0x26b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26c: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x26d: PushEmpty(string)
0x26e: Stack[-1] = "Rage"
0x26f: Call2 0x18e

0x270: Pop(1)
0x271: Push((int) 518648)
0x272: @@ SetMessage(Stack[-1])
0x273: Pop(1)
0x274: @@ ClearReplies()
0x275: Pop(0)
0x276: Push((int) 518649)
0x277: Push((int) 19826)
0x278: Push((int) 19741)
0x279: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27a: Pop(3)
0x27b: Return(); Pop(0)

0x27c: Push((int) 19826)
0x27d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x27f: PushEmpty(string)
0x280: Stack[-1] = "Rage"
0x281: Call2 0x18e

0x282: Pop(1)
0x283: Push((int) 518734)
0x284: @@ SetMessage(Stack[-1])
0x285: Pop(1)
0x286: @@ ClearReplies()
0x287: Pop(0)
0x288: Push((int) 518735)
0x289: Push((int) 19830)
0x28a: Push((int) 19827)
0x28b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28c: Pop(3)
0x28d: Push((int) 518736)
0x28e: Push((int) 19829)
0x28f: Push((int) 19828)
0x290: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x291: Pop(3)
0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x294: Call2 0x903

0x295: Pop(1)
0x296: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x297: Push((int) 531552)
0x298: Push((int) 19744)
0x299: Push((int) 32915)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: Push((int) 19829)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a0: PushEmpty(string)
0x2a1: Stack[-1] = "Rage"
0x2a2: Call2 0x18e

0x2a3: Pop(1)
0x2a4: Push((int) 518737)
0x2a5: @@ SetMessage(Stack[-1])
0x2a6: Pop(1)
0x2a7: @@ ClearReplies()
0x2a8: Pop(0)
0x2a9: Push((int) 528296)
0x2aa: Push((int) 29663)
0x2ab: Push((int) 29662)
0x2ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ad: Pop(3)
0x2ae: Push((int) 518742)
0x2af: Push((int) -1)
0x2b0: Push((int) 19834)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 29663)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Dream"
0x2b9: Call2 0x18e

0x2ba: Pop(1)
0x2bb: Push((int) 528297)
0x2bc: @@ SetMessage(Stack[-1])
0x2bd: Pop(1)
0x2be: @@ ClearReplies()
0x2bf: Pop(0)
0x2c0: Push((int) 518741)
0x2c1: Push((int) 19835)
0x2c2: Push((int) 19833)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: Return(); Pop(0)

0x2c6: Push((int) 19835)
0x2c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Dream"
0x2cb: Call2 0x18e

0x2cc: Pop(1)
0x2cd: Push((int) 518743)
0x2ce: @@ SetMessage(Stack[-1])
0x2cf: Pop(1)
0x2d0: @@ ClearReplies()
0x2d1: Pop(0)
0x2d2: Push((int) 518744)
0x2d3: Push((int) 19837)
0x2d4: Push((int) 19836)
0x2d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d6: Pop(3)
0x2d7: Return(); Pop(0)

0x2d8: Push((int) 19837)
0x2d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2db: PushEmpty(string)
0x2dc: Stack[-1] = "Dream"
0x2dd: Call2 0x18e

0x2de: Pop(1)
0x2df: Push((int) 518745)
0x2e0: @@ SetMessage(Stack[-1])
0x2e1: Pop(1)
0x2e2: @@ ClearReplies()
0x2e3: Pop(0)
0x2e4: Push((int) 518746)
0x2e5: Push((int) -1)
0x2e6: Push((int) 19838)
0x2e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e8: Pop(3)
0x2e9: Push((int) 518747)
0x2ea: Push((int) -1)
0x2eb: Push((int) 19839)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: Push((int) 19830)
0x2f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x2f2: PushEmpty(string)
0x2f3: Stack[-1] = "Adoration"
0x2f4: Call2 0x18e

0x2f5: Pop(1)
0x2f6: Push((int) 518738)
0x2f7: @@ SetMessage(Stack[-1])
0x2f8: Pop(1)
0x2f9: @@ ClearReplies()
0x2fa: Pop(0)
0x2fb: Push((int) 518739)
0x2fc: Push((int) -1)
0x2fd: Push((int) 19831)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: Push((int) 518740)
0x301: Push((int) -1)
0x302: Push((int) 19832)
0x303: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x304: Pop(3)
0x305: Return(); Pop(0)

0x306: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x307: PushEmpty(bool)
0x308: Call2 0x8bd

0x309: Pop(0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30b: @ lshStopAnimation()
0x30c: Pop(0)
0x30d: GOTO 0x310

0x30e: @ StopAnimation()
0x30f: Pop(0)
0x310: Return(); Pop(0)

0x311: GOTO 0x1a5

0x312: Return(); Pop(0)

0x313: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x314: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x315: PushEmpty(bool, object, float)
0x316: Stack[-2] = Stack[-12]
0x317: Stack[-1] = (float) 70.0
0x318: Call2 0x744

0x319: Pop(2)
0x31a: Pop(1); Push((bool) Stack[-1] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: Stack[-10] = (int) -2
0x31d: Return(); Pop(8)

0x31e: @ CreateDialog(Stack[-4])
0x31f: Pop(0)
0x320: PushEmpty(int)
0x321: Call2 0x8b7

0x322: Pop(0)
0x323: @@ SetNPCName(Stack[-1])
0x324: Pop(1)
0x325: PushEmpty(int)
0x326: Call2 0x8b5

0x327: Pop(0)
0x328: @@ SetNPCDescription(Stack[-1])
0x329: Pop(1)
0x32a: PushEmpty(string)
0x32b: Call2 0x8b9

0x32c: Pop(0)
0x32d: @@ SetPhoto(Stack[-1])
0x32e: Pop(1)
0x32f: PushEmpty(string)
0x330: Call2 0x8bb

0x331: Pop(0)
0x332: @@ SetPhoto2(Stack[-1])
0x333: Pop(1)
0x334: PushEmpty(int)
0x335: Call2 0x927

0x336: Pop(0)
0x337: @@ SetPlayerName(Stack[-1])
0x338: Pop(1)
0x339: Stack[-2] = (int) -1
0x33a: @ IsOverrideActive(Stack[-3])
0x33b: Pop(0)
0x33c: Push(Stack[-3])
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: Stack[-10] = (int) -2
0x33f: Return(); Pop(8)

0x340: @ DoDialog(Stack[-4])
0x341: Pop(0)
0x342: PushEmpty(bool, object)
0x343: PushEmpty(object)
0x344: Call2 0x85a

0x345: Stack[-2] = Stack[-1]
0x346: Pop(1)
0x347: Call2 0x79b

0x348: Pop(2)
0x349: PushEmpty(object, object)
0x34a: Stack[-2] = Stack[-11]
0x34b: Stack[-1] = Stack[-6]
0x34c: Push(-2, 4); TaskCall(5)
0x34d: Call2 0x364

0x34e: Pop(-2, 4); TaskReturn
0x34f: Pop(2)
0x350: @@ IsDialogEnd(Stack[-1])
0x351: Pop(0)
0x352: Pop(0); Push((bool) Stack[-1] == 0)
0x353: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x354: @ sync()
0x355: Pop(0)
0x356: @@ IsDialogEnd(Stack[-1])
0x357: Pop(0)
0x358: GOTO 0x352

0x359: PushEmpty(object)
0x35a: Stack[-1] = Stack[-10]
0x35b: Call2 0x789

0x35c: Pop(1)
0x35d: @ StopDialog(Stack[-4])
0x35e: Pop(0)
0x35f: @@ GetReturnValue(Stack[-2])
0x360: Pop(0)
0x361: Stack[-10] = Stack[-2]
0x362: Return(); Pop(8)

0x363: Stack[-4] = 0
0x364: PushEmpty()
0x365: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x366: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x367: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x368: Push((int) 1)
0x369: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x36a: PushEmpty(string)
0x36b: Stack[-1] = "Neutral"
0x36c: Call2 0x3a3

0x36d: Pop(1)
0x36e: Push((int) 530857)
0x36f: @@ SetMessage(Stack[-1])
0x370: Pop(1)
0x371: @@ ClearReplies()
0x372: Pop(0)
0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x375: Call2 0x8eb

0x376: Pop(1)
0x377: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x378: Push((int) 530859)
0x379: Push((int) 32176)
0x37a: Push((int) 32175)
0x37b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37c: Pop(3)
0x37d: Push((int) 530858)
0x37e: Push((int) -1)
0x37f: Push((int) 32174)
0x380: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(3)
0x382: GOTO 0x385

0x383: Return(); Pop(0)

0x384: GOTO 0x368

0x385: PushEmpty(bool)
0x386: Call2 0x8bd

0x387: Pop(0)
0x388: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x389: @ lshWaitForAnimEnd()
0x38a: Pop(0)
0x38b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x393

0x38e: PushEmpty(string)
0x38f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x390: Call2 0x825

0x391: Pop(1)
0x392: GOTO 0x389

0x393: GOTO 0x3a2

0x394: Push("all")
0x395: Push("idle")
0x396: @ PlayAnimation(Stack[-2], Stack[-1])
0x397: Pop(2)
0x398: @ WaitForAnimEnd()
0x399: Pop(0)
0x39a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: GOTO 0x3a2

0x39d: Push("all")
0x39e: Push("idle")
0x39f: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a0: Pop(2)
0x3a1: GOTO 0x398

0x3a2: Return(); Pop(0)

0x3a3: PushEmpty()
0x3a4: PushEmpty(bool)
0x3a5: Call2 0x8bd

0x3a6: Pop(0)
0x3a7: Pop(1); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Return(); Pop(0)

0x3aa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Return(); Pop(0)

0x3ad: PushEmpty(string, bool)
0x3ae: Stack[-2] = Stack[-3]
0x3af: Push("")
0x3b0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: Stack[-1] = (bool) 0
0x3b3: GOTO 0x3b5

0x3b4: Stack[-1] = (bool) 1
0x3b5: Call2 0x835

0x3b6: Pop(2)
0x3b7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3b8: Return(); Pop(0)

0x3b9: PushEmpty()
0x3ba: Push((int) 1)
0x3bb: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x3bc: PushEmpty()
0x3bd: Call2 0x853

0x3be: Pop(0)
0x3bf: Push((int) 32175)
0x3c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c2: PushEmpty(object, object)
0x3c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3c5: Call2 0x8db

0x3c6: Pop(2)
0x3c7: Push((int) 32173)
0x3c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c9: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3ca: PushEmpty(string)
0x3cb: Stack[-1] = "Neutral"
0x3cc: Call2 0x3a3

0x3cd: Pop(1)
0x3ce: Push((int) 530857)
0x3cf: @@ SetMessage(Stack[-1])
0x3d0: Pop(1)
0x3d1: @@ ClearReplies()
0x3d2: Pop(0)
0x3d3: PushEmpty(bool, object)
0x3d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d5: Call2 0x8eb

0x3d6: Pop(1)
0x3d7: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3d8: Push((int) 530859)
0x3d9: Push((int) 32176)
0x3da: Push((int) 32175)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Push((int) 530858)
0x3de: Push((int) -1)
0x3df: Push((int) 32174)
0x3e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e1: Pop(3)
0x3e2: Return(); Pop(0)

0x3e3: Push((int) 32176)
0x3e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3e6: PushEmpty(string)
0x3e7: Stack[-1] = "Fear"
0x3e8: Call2 0x3a3

0x3e9: Pop(1)
0x3ea: Push((int) 530860)
0x3eb: @@ SetMessage(Stack[-1])
0x3ec: Pop(1)
0x3ed: @@ ClearReplies()
0x3ee: Pop(0)
0x3ef: Push((int) 530861)
0x3f0: Push((int) 32179)
0x3f1: Push((int) 32177)
0x3f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f3: Pop(3)
0x3f4: Push((int) 530862)
0x3f5: Push((int) 32185)
0x3f6: Push((int) 32178)
0x3f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f8: Pop(3)
0x3f9: Return(); Pop(0)

0x3fa: Push((int) 32179)
0x3fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x3fd: PushEmpty(string)
0x3fe: Stack[-1] = "Fear"
0x3ff: Call2 0x3a3

0x400: Pop(1)
0x401: Push((int) 530863)
0x402: @@ SetMessage(Stack[-1])
0x403: Pop(1)
0x404: @@ ClearReplies()
0x405: Pop(0)
0x406: Push((int) 530864)
0x407: Push((int) 32182)
0x408: Push((int) 32180)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: Push((int) 530865)
0x40c: Push((int) 32185)
0x40d: Push((int) 32181)
0x40e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40f: Pop(3)
0x410: Return(); Pop(0)

0x411: Push((int) 32182)
0x412: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x414: PushEmpty(string)
0x415: Stack[-1] = "Fear"
0x416: Call2 0x3a3

0x417: Pop(1)
0x418: Push((int) 530866)
0x419: @@ SetMessage(Stack[-1])
0x41a: Pop(1)
0x41b: @@ ClearReplies()
0x41c: Pop(0)
0x41d: Push((int) 530867)
0x41e: Push((int) 32185)
0x41f: Push((int) 32183)
0x420: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x421: Pop(3)
0x422: Push((int) 530868)
0x423: Push((int) 32185)
0x424: Push((int) 32184)
0x425: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x426: Pop(3)
0x427: Return(); Pop(0)

0x428: Push((int) 32185)
0x429: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x42b: PushEmpty(string)
0x42c: Stack[-1] = "Fear"
0x42d: Call2 0x3a3

0x42e: Pop(1)
0x42f: Push((int) 530870)
0x430: @@ SetMessage(Stack[-1])
0x431: Pop(1)
0x432: @@ ClearReplies()
0x433: Pop(0)
0x434: Push((int) 530871)
0x435: Push((int) -1)
0x436: Push((int) 32189)
0x437: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x438: Pop(3)
0x439: Push((int) 530872)
0x43a: Push((int) -1)
0x43b: Push((int) 32190)
0x43c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: Return(); Pop(0)

0x43f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x440: PushEmpty(bool)
0x441: Call2 0x8bd

0x442: Pop(0)
0x443: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x444: @ lshStopAnimation()
0x445: Pop(0)
0x446: GOTO 0x449

0x447: @ StopAnimation()
0x448: Pop(0)
0x449: Return(); Pop(0)

0x44a: GOTO 0x3ba

0x44b: Return(); Pop(0)

0x44c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x44d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x44e: PushEmpty(bool, object, float)
0x44f: Stack[-2] = Stack[-12]
0x450: Stack[-1] = (float) 70.0
0x451: Call2 0x744

0x452: Pop(2)
0x453: Pop(1); Push((bool) Stack[-1] == 0)
0x454: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x455: Stack[-10] = (int) -2
0x456: Return(); Pop(8)

0x457: @ CreateDialog(Stack[-4])
0x458: Pop(0)
0x459: PushEmpty(int)
0x45a: Call2 0x8b7

0x45b: Pop(0)
0x45c: @@ SetNPCName(Stack[-1])
0x45d: Pop(1)
0x45e: PushEmpty(int)
0x45f: Call2 0x8b5

0x460: Pop(0)
0x461: @@ SetNPCDescription(Stack[-1])
0x462: Pop(1)
0x463: PushEmpty(string)
0x464: Call2 0x8b9

0x465: Pop(0)
0x466: @@ SetPhoto(Stack[-1])
0x467: Pop(1)
0x468: PushEmpty(string)
0x469: Call2 0x8bb

0x46a: Pop(0)
0x46b: @@ SetPhoto2(Stack[-1])
0x46c: Pop(1)
0x46d: PushEmpty(int)
0x46e: Call2 0x927

0x46f: Pop(0)
0x470: @@ SetPlayerName(Stack[-1])
0x471: Pop(1)
0x472: Stack[-2] = (int) -1
0x473: @ IsOverrideActive(Stack[-3])
0x474: Pop(0)
0x475: Push(Stack[-3])
0x476: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x477: Stack[-10] = (int) -2
0x478: Return(); Pop(8)

0x479: @ DoDialog(Stack[-4])
0x47a: Pop(0)
0x47b: PushEmpty(bool, object)
0x47c: PushEmpty(object)
0x47d: Call2 0x85a

0x47e: Stack[-2] = Stack[-1]
0x47f: Pop(1)
0x480: Call2 0x79b

0x481: Pop(2)
0x482: PushEmpty(object, object)
0x483: Stack[-2] = Stack[-11]
0x484: Stack[-1] = Stack[-6]
0x485: Push(-2, 4); TaskCall(7)
0x486: Call2 0x49d

0x487: Pop(-2, 4); TaskReturn
0x488: Pop(2)
0x489: @@ IsDialogEnd(Stack[-1])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-1] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x492; Pop(1)

0x48d: @ sync()
0x48e: Pop(0)
0x48f: @@ IsDialogEnd(Stack[-1])
0x490: Pop(0)
0x491: GOTO 0x48b

0x492: PushEmpty(object)
0x493: Stack[-1] = Stack[-10]
0x494: Call2 0x789

0x495: Pop(1)
0x496: @ StopDialog(Stack[-4])
0x497: Pop(0)
0x498: @@ GetReturnValue(Stack[-2])
0x499: Pop(0)
0x49a: Stack[-10] = Stack[-2]
0x49b: Return(); Pop(8)

0x49c: Stack[-4] = 0
0x49d: PushEmpty()
0x49e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x49f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4a0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4a1: Push((int) 1)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4a3: PushEmpty(string)
0x4a4: Stack[-1] = "Neutral"
0x4a5: Call2 0x4dc

0x4a6: Pop(1)
0x4a7: Push((int) 535294)
0x4a8: @@ SetMessage(Stack[-1])
0x4a9: Pop(1)
0x4aa: @@ ClearReplies()
0x4ab: Pop(0)
0x4ac: Push((int) 535295)
0x4ad: Push((int) 36973)
0x4ae: Push((int) 36972)
0x4af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b0: Pop(3)
0x4b1: Push((int) 535302)
0x4b2: Push((int) -1)
0x4b3: Push((int) 36980)
0x4b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b5: Pop(3)
0x4b6: Push((int) 535303)
0x4b7: Push((int) -1)
0x4b8: Push((int) 36981)
0x4b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: GOTO 0x4be

0x4bc: Return(); Pop(0)

0x4bd: GOTO 0x4a1

0x4be: PushEmpty(bool)
0x4bf: Call2 0x8bd

0x4c0: Pop(0)
0x4c1: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4c2: @ lshWaitForAnimEnd()
0x4c3: Pop(0)
0x4c4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4c5: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4c6: GOTO 0x4cc

0x4c7: PushEmpty(string)
0x4c8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4c9: Call2 0x825

0x4ca: Pop(1)
0x4cb: GOTO 0x4c2

0x4cc: GOTO 0x4db

0x4cd: Push("all")
0x4ce: Push("idle")
0x4cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d0: Pop(2)
0x4d1: @ WaitForAnimEnd()
0x4d2: Pop(0)
0x4d3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: GOTO 0x4db

0x4d6: Push("all")
0x4d7: Push("idle")
0x4d8: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d9: Pop(2)
0x4da: GOTO 0x4d1

0x4db: Return(); Pop(0)

0x4dc: PushEmpty()
0x4dd: PushEmpty(bool)
0x4de: Call2 0x8bd

0x4df: Pop(0)
0x4e0: Pop(1); Push((bool) Stack[-1] == 0)
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4e2: Return(); Pop(0)

0x4e3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4e6; Pop(1)

0x4e5: Return(); Pop(0)

0x4e6: PushEmpty(string, bool)
0x4e7: Stack[-2] = Stack[-3]
0x4e8: Push("")
0x4e9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4eb: Stack[-1] = (bool) 0
0x4ec: GOTO 0x4ee

0x4ed: Stack[-1] = (bool) 1
0x4ee: Call2 0x835

0x4ef: Pop(2)
0x4f0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4f1: Return(); Pop(0)

0x4f2: PushEmpty()
0x4f3: Push((int) 1)
0x4f4: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x4f5: PushEmpty()
0x4f6: Call2 0x853

0x4f7: Pop(0)
0x4f8: Push((int) 36971)
0x4f9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fa: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x4fb: PushEmpty(string)
0x4fc: Stack[-1] = "Neutral"
0x4fd: Call2 0x4dc

0x4fe: Pop(1)
0x4ff: Push((int) 535294)
0x500: @@ SetMessage(Stack[-1])
0x501: Pop(1)
0x502: @@ ClearReplies()
0x503: Pop(0)
0x504: Push((int) 535295)
0x505: Push((int) 36973)
0x506: Push((int) 36972)
0x507: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x508: Pop(3)
0x509: Push((int) 535302)
0x50a: Push((int) -1)
0x50b: Push((int) 36980)
0x50c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50d: Pop(3)
0x50e: Push((int) 535303)
0x50f: Push((int) -1)
0x510: Push((int) 36981)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Return(); Pop(0)

0x514: Push((int) 36973)
0x515: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x517: PushEmpty(string)
0x518: Stack[-1] = "Neutral"
0x519: Call2 0x4dc

0x51a: Pop(1)
0x51b: Push((int) 535296)
0x51c: @@ SetMessage(Stack[-1])
0x51d: Pop(1)
0x51e: @@ ClearReplies()
0x51f: Pop(0)
0x520: Push((int) 535297)
0x521: Push((int) 36975)
0x522: Push((int) 36974)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: Push((int) 535301)
0x526: Push((int) 36975)
0x527: Push((int) 36978)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: Return(); Pop(0)

0x52b: Push((int) 36975)
0x52c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x52e: PushEmpty(string)
0x52f: Stack[-1] = "Neutral"
0x530: Call2 0x4dc

0x531: Pop(1)
0x532: Push((int) 535298)
0x533: @@ SetMessage(Stack[-1])
0x534: Pop(1)
0x535: @@ ClearReplies()
0x536: Pop(0)
0x537: Push((int) 535299)
0x538: Push((int) -1)
0x539: Push((int) 36976)
0x53a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53b: Pop(3)
0x53c: Push((int) 535300)
0x53d: Push((int) -1)
0x53e: Push((int) 36977)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: Return(); Pop(0)

0x542: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x543: PushEmpty(bool)
0x544: Call2 0x8bd

0x545: Pop(0)
0x546: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x547: @ lshStopAnimation()
0x548: Pop(0)
0x549: GOTO 0x54c

0x54a: @ StopAnimation()
0x54b: Pop(0)
0x54c: Return(); Pop(0)

0x54d: GOTO 0x4f3

0x54e: Return(); Pop(0)

0x54f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x550: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x551: PushEmpty(bool, object, float)
0x552: Stack[-2] = Stack[-12]
0x553: Stack[-1] = (float) 70.0
0x554: Call2 0x744

0x555: Pop(2)
0x556: Pop(1); Push((bool) Stack[-1] == 0)
0x557: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x558: Stack[-10] = (int) -2
0x559: Return(); Pop(8)

0x55a: @ CreateDialog(Stack[-4])
0x55b: Pop(0)
0x55c: PushEmpty(int)
0x55d: Call2 0x8b7

0x55e: Pop(0)
0x55f: @@ SetNPCName(Stack[-1])
0x560: Pop(1)
0x561: PushEmpty(int)
0x562: Call2 0x8b5

0x563: Pop(0)
0x564: @@ SetNPCDescription(Stack[-1])
0x565: Pop(1)
0x566: PushEmpty(string)
0x567: Call2 0x8b9

0x568: Pop(0)
0x569: @@ SetPhoto(Stack[-1])
0x56a: Pop(1)
0x56b: PushEmpty(string)
0x56c: Call2 0x8bb

0x56d: Pop(0)
0x56e: @@ SetPhoto2(Stack[-1])
0x56f: Pop(1)
0x570: PushEmpty(int)
0x571: Call2 0x927

0x572: Pop(0)
0x573: @@ SetPlayerName(Stack[-1])
0x574: Pop(1)
0x575: Stack[-2] = (int) -1
0x576: @ IsOverrideActive(Stack[-3])
0x577: Pop(0)
0x578: Push(Stack[-3])
0x579: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57a: Stack[-10] = (int) -2
0x57b: Return(); Pop(8)

0x57c: @ DoDialog(Stack[-4])
0x57d: Pop(0)
0x57e: PushEmpty(bool, object)
0x57f: PushEmpty(object)
0x580: Call2 0x85a

0x581: Stack[-2] = Stack[-1]
0x582: Pop(1)
0x583: Call2 0x79b

0x584: Pop(2)
0x585: PushEmpty(object, object)
0x586: Stack[-2] = Stack[-11]
0x587: Stack[-1] = Stack[-6]
0x588: Push(-2, 4); TaskCall(9)
0x589: Call2 0x5a0

0x58a: Pop(-2, 4); TaskReturn
0x58b: Pop(2)
0x58c: @@ IsDialogEnd(Stack[-1])
0x58d: Pop(0)
0x58e: Pop(0); Push((bool) Stack[-1] == 0)
0x58f: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x590: @ sync()
0x591: Pop(0)
0x592: @@ IsDialogEnd(Stack[-1])
0x593: Pop(0)
0x594: GOTO 0x58e

0x595: PushEmpty(object)
0x596: Stack[-1] = Stack[-10]
0x597: Call2 0x789

0x598: Pop(1)
0x599: @ StopDialog(Stack[-4])
0x59a: Pop(0)
0x59b: @@ GetReturnValue(Stack[-2])
0x59c: Pop(0)
0x59d: Stack[-10] = Stack[-2]
0x59e: Return(); Pop(8)

0x59f: Stack[-4] = 0
0x5a0: PushEmpty()
0x5a1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5a2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5a3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5a4: Push((int) 1)
0x5a5: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5a6: PushEmpty(string)
0x5a7: Stack[-1] = "Neutral"
0x5a8: Call2 0x5da

0x5a9: Pop(1)
0x5aa: Push((int) 540551)
0x5ab: @@ SetMessage(Stack[-1])
0x5ac: Pop(1)
0x5ad: @@ ClearReplies()
0x5ae: Pop(0)
0x5af: Push((int) 540552)
0x5b0: Push((int) -1)
0x5b1: Push((int) 42561)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: Push((int) 540795)
0x5b5: Push((int) -1)
0x5b6: Push((int) 42844)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: GOTO 0x5bc

0x5ba: Return(); Pop(0)

0x5bb: GOTO 0x5a4

0x5bc: PushEmpty(bool)
0x5bd: Call2 0x8bd

0x5be: Pop(0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c0: @ lshWaitForAnimEnd()
0x5c1: Pop(0)
0x5c2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c4: GOTO 0x5ca

0x5c5: PushEmpty(string)
0x5c6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5c7: Call2 0x825

0x5c8: Pop(1)
0x5c9: GOTO 0x5c0

0x5ca: GOTO 0x5d9

0x5cb: Push("all")
0x5cc: Push("idle")
0x5cd: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ce: Pop(2)
0x5cf: @ WaitForAnimEnd()
0x5d0: Pop(0)
0x5d1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d3: GOTO 0x5d9

0x5d4: Push("all")
0x5d5: Push("idle")
0x5d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d7: Pop(2)
0x5d8: GOTO 0x5cf

0x5d9: Return(); Pop(0)

0x5da: PushEmpty()
0x5db: PushEmpty(bool)
0x5dc: Call2 0x8bd

0x5dd: Pop(0)
0x5de: Pop(1); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5e0: Return(); Pop(0)

0x5e1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e3: Return(); Pop(0)

0x5e4: PushEmpty(string, bool)
0x5e5: Stack[-2] = Stack[-3]
0x5e6: Push("")
0x5e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e9: Stack[-1] = (bool) 0
0x5ea: GOTO 0x5ec

0x5eb: Stack[-1] = (bool) 1
0x5ec: Call2 0x835

0x5ed: Pop(2)
0x5ee: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5ef: Return(); Pop(0)

0x5f0: PushEmpty()
0x5f1: Push((int) 1)
0x5f2: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x5f3: PushEmpty()
0x5f4: Call2 0x853

0x5f5: Pop(0)
0x5f6: Push((int) 42560)
0x5f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x5f9: PushEmpty(string)
0x5fa: Stack[-1] = "Neutral"
0x5fb: Call2 0x5da

0x5fc: Pop(1)
0x5fd: Push((int) 540551)
0x5fe: @@ SetMessage(Stack[-1])
0x5ff: Pop(1)
0x600: @@ ClearReplies()
0x601: Pop(0)
0x602: Push((int) 540552)
0x603: Push((int) -1)
0x604: Push((int) 42561)
0x605: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x606: Pop(3)
0x607: Push((int) 540795)
0x608: Push((int) -1)
0x609: Push((int) 42844)
0x60a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(3)
0x60c: Return(); Pop(0)

0x60d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x60e: PushEmpty(bool)
0x60f: Call2 0x8bd

0x610: Pop(0)
0x611: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x612: @ lshStopAnimation()
0x613: Pop(0)
0x614: GOTO 0x617

0x615: @ StopAnimation()
0x616: Pop(0)
0x617: Return(); Pop(0)

0x618: GOTO 0x5f1

0x619: Return(); Pop(0)

0x61a: Push(GlobalVars[1])
0x61b: Stack[-1] = (bool) 0
0x61c: GlobalVars[1] = Stack[-1]; Pop(1)
0x61d: PushEmpty()
0x61e: Call2 0x621

0x61f: Pop(0)
0x620: Return(); Pop(0)

0x621: PushEmpty(bool)
0x622: Call2 0x73f

0x623: Pop(0)
0x624: Pop(1); Push((bool) Stack[-1] == 0)
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: @ Hold()
0x627: Pop(0)
0x628: @ GetDirection(Stack[-0])
0x629: Pop(0)
0x62a: PushEmpty()
0x62b: Call2 0x6d1

0x62c: Pop(0)
0x62d: GOTO 0x62a

0x62e: Return(); Pop(0)

0x62f: PushEmpty(object, object)
0x630: Push("player")
0x631: @ FindActor(Stack[-2], Stack[-1])
0x632: Pop(1)
0x633: Pop(0); Push((bool) Stack[-1] == 0)
0x634: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x635: Stack[-3] = (bool) 0
0x636: Return(); Pop(2)

0x637: PushEmpty(bool, object)
0x638: Stack[-1] = Stack[-3]
0x639: Call2 0x736

0x63a: Stack[-5] = Stack[-2]
0x63b: Pop(2)
0x63c: Return(); Pop(2)

0x63d: Stack[-1] = 0
0x63e: Push(CvectorIndex(Stack[-0], 0))
0x63f: Push(CvectorIndex(Stack[-0], 2))
0x640: @ RotateAsync(Stack[-2], Stack[-1])
0x641: Pop(2)
0x642: Return(); Pop(0)

0x643: PushEmpty(object, bool, object, bool)
0x644: Push("player")
0x645: @ FindActor(Stack[-3], Stack[-1])
0x646: Pop(1)
0x647: Pop(0); Push((bool) Stack[-2] == 0)
0x648: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x649: Stack[-5] = (bool) 0
0x64a: Return(); Pop(4)

0x64b: PushEmpty(float, object)
0x64c: Stack[-1] = Stack[-4]
0x64d: Call2 0x71d

0x64e: Pop(1)
0x64f: Push((float)90000.0)
0x650: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-5] = (bool) 0
0x653: Return(); Pop(4)

0x654: @ CanSee(Stack[-1], Stack[-2])
0x655: Pop(0)
0x656: Stack[-5] = Stack[-1]
0x657: Return(); Pop(4)

0x658: Stack[-2] = 0
0x659: PushEmpty(float, float)
0x65a: Push((int) 8)
0x65b: Push((int) 16)
0x65c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x65d: Pop(2)
0x65e: Push((int) 10)
0x65f: @ SetTimer(Stack[-1], Stack[-2])
0x660: Pop(1)
0x661: Return(); Pop(2)

0x662: Push((int) 10)
0x663: @ KillTimer(Stack[-1])
0x664: Pop(1)
0x665: Return(); Pop(0)

0x666: PushEmpty()
0x667: Push((int) 10)
0x668: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x66a: PushEmpty()
0x66b: Call2 0x662

0x66c: Pop(0)
0x66d: PushEmpty(bool)
0x66e: Stack[-1] = (bool) 0
0x66f: PushEmpty(bool)
0x670: Call2 0x73f

0x671: Pop(0)
0x672: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x673: PushEmpty(bool)
0x674: Call2 0x643

0x675: Pop(0)
0x676: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x677: Stack[-1] = (bool) 1
0x678: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x679: PushEmpty(bool)
0x67a: Call2 0x62f

0x67b: Pop(0)
0x67c: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x67d: PushEmpty(bool, object)
0x67e: PushEmpty(object)
0x67f: Call2 0x85a

0x680: Stack[-2] = Stack[-1]
0x681: Pop(1)
0x682: Call2 0x7d5

0x683: Pop(2)
0x684: GOTO 0x68b

0x685: PushEmpty()
0x686: Call2 0x63e

0x687: Pop(0)
0x688: PushEmpty()
0x689: Call2 0x659

0x68a: Pop(0)
0x68b: Return(); Pop(0)

0x68c: PushEmpty()
0x68d: Call2 0x718

0x68e: Pop(0)
0x68f: PushEmpty()
0x690: Call2 0x662

0x691: Pop(0)
0x692: @ lshStopSpeech()
0x693: Pop(0)
0x694: @ lshStopAnimation()
0x695: Pop(0)
0x696: @ StopAsync()
0x697: Pop(0)
0x698: @ Hold()
0x699: Pop(0)
0x69a: Return(); Pop(0)

0x69b: @ StopGroup0()
0x69c: Pop(0)
0x69d: PushEmpty()
0x69e: Call2 0x662

0x69f: Pop(0)
0x6a0: PushEmpty(string)
0x6a1: Stack[-1] = "Neutral"
0x6a2: Call2 0x825

0x6a3: Pop(1)
0x6a4: PushEmpty()
0x6a5: Call2 0x659

0x6a6: Pop(0)
0x6a7: Return(); Pop(0)

0x6a8: PushEmpty()
0x6a9: Push(Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ab: PushEmpty()
0x6ac: Call2 0x659

0x6ad: Pop(0)
0x6ae: GOTO 0x6b3

0x6af: PushEmpty(string)
0x6b0: Stack[-1] = "Neutral"
0x6b1: Call2 0x825

0x6b2: Pop(1)
0x6b3: Return(); Pop(0)

0x6b4: PushEmpty(bool, bool)
0x6b5: @ IsOverrideActive(Stack[-1])
0x6b6: Pop(0)
0x6b7: Pop(0); Push((bool) Stack[-1] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6b9: EventDisable(0)
0x6ba: PushEmpty()
0x6bb: Call2 0x718

0x6bc: Pop(0)
0x6bd: PushEmpty(bool, object)
0x6be: Stack[-1] = Stack[-5]
0x6bf: Call2 0x736

0x6c0: Pop(2)
0x6c1: EventEnable(0)
0x6c2: PushEmpty(object)
0x6c3: Stack[-1] = Stack[-4]
0x6c4: Call2 0x938

0x6c5: Pop(1)
0x6c6: PushEmpty(string)
0x6c7: Stack[-1] = "Neutral"
0x6c8: Call2 0x825

0x6c9: Pop(1)
0x6ca: PushEmpty()
0x6cb: Call2 0x662

0x6cc: Pop(0)
0x6cd: PushEmpty()
0x6ce: Call2 0x659

0x6cf: Pop(0)
0x6d0: Return(); Pop(2)

0x6d1: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6d2: @ WaitForAnimEnd()
0x6d3: Pop(0)
0x6d4: PushEmpty(bool)
0x6d5: Call2 0x73f

0x6d6: Pop(0)
0x6d7: Pop(1); Push((bool) Stack[-1] == 0)
0x6d8: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d9: Return(); Pop(12)

0x6da: PushEmpty(int)
0x6db: Call2 0x8a4

0x6dc: Stack[-7] = Stack[-1]
0x6dd: Pop(1)
0x6de: Stack[-5] = (int) 0
0x6df: PushEmpty(bool)
0x6e0: Stack[-1] = (bool) 0
0x6e1: Push((int) 5)
0x6e2: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e4: PushEmpty(bool)
0x6e5: Call2 0x73f

0x6e6: Pop(0)
0x6e7: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e8: Stack[-1] = (bool) 1
0x6e9: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x6ea: Pop(0); Push((bool) Stack[-6] == 0)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6ec: Push((int) 3)
0x6ed: @ Sleep(Stack[-1], Stack[-5])
0x6ee: Pop(1)
0x6ef: Pop(0); Push((bool) Stack[-4] == 0)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f1: GOTO 0x713

0x6f2: GOTO 0x708

0x6f3: @ irand(Stack[-3], Stack[-6])
0x6f4: Pop(0)
0x6f5: Push((int) 5)
0x6f6: @ irand(Stack[-3], Stack[-1])
0x6f7: Pop(1)
0x6f8: Push((int) 0)
0x6f9: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6fb: Stack[-3] = (int) 0
0x6fc: Push("all")
0x6fd: PushEmpty(string, int)
0x6fe: Stack[-1] = Stack[-6]
0x6ff: Call2 0x89d

0x700: Pop(1)
0x701: @ PlayAnimation(Stack[-2], Stack[-1])
0x702: Pop(2)
0x703: @ WaitForAnimEnd(Stack[-1])
0x704: Pop(0)
0x705: Pop(0); Push((bool) Stack[-1] == 0)
0x706: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x707: GOTO 0x713

0x708: PushEmpty(bool)
0x709: Call2 0x716

0x70a: Pop(0)
0x70b: Pop(1); Push((bool) Stack[-1] == 0)
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: GOTO 0x713

0x70e: @ ResetAAS()
0x70f: Pop(0)
0x710: Push((int) 1)
0x711: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x712: GOTO 0x6df

0x713: @ ResetAAS()
0x714: Pop(0)
0x715: Return(); Pop(12)

0x716: Stack[-1] = (bool) 1
0x717: Return(); Pop(0)

0x718: @ StopAnimation()
0x719: Pop(0)
0x71a: @ StopGroup0()
0x71b: Pop(0)
0x71c: Return(); Pop(0)

0x71d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x71e: @ GetPosition(Stack[-3])
0x71f: Pop(0)
0x720: @@ GetPosition(Stack[-2])
0x721: Pop(0)
0x722: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x723: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x724: Return(); Pop(6)

0x725: PushEmpty(int, int)
0x726: @@ GetProperty(Stack[-4], Stack[-1])
0x727: Pop(0)
0x728: Pop(0); Push(Stack[-1] + Stack[-3]);
0x729: @@ SetProperty(Stack[-5], Stack[-1])
0x72a: Pop(1)
0x72b: Return(); Pop(2)

0x72c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x72d: @ GetPosition(Stack[-3])
0x72e: Pop(0)
0x72f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x730: Push(CvectorIndex(Stack[-2], 0))
0x731: Push(CvectorIndex(Stack[-3], 2))
0x732: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x733: Pop(2)
0x734: Stack[-8] = Stack[-1]
0x735: Return(); Pop(6)

0x736: PushEmpty(cvector, cvector)
0x737: @@ GetPosition(Stack[-1])
0x738: Pop(0)
0x739: PushEmpty(bool, cvector)
0x73a: Stack[-1] = Stack[-3]
0x73b: Call2 0x72c

0x73c: Stack[-6] = Stack[-2]
0x73d: Pop(2)
0x73e: Return(); Pop(2)

0x73f: PushEmpty(bool, bool)
0x740: @ IsLoaded(Stack[-1])
0x741: Pop(0)
0x742: Stack[-3] = Stack[-1]
0x743: Return(); Pop(2)

0x744: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x745: @@ GetPosition(Stack[-8])
0x746: Pop(0)
0x747: @@ GetEyesHeight(Stack[-9])
0x748: Pop(0)
0x749: Push(CvectorIndex(Stack[-8], 1))
0x74a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x74b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x74c: @ GetPosition(Stack[-7])
0x74d: Pop(0)
0x74e: @ GetEyesHeight(Stack[-9])
0x74f: Pop(0)
0x750: Push(CvectorIndex(Stack[-7], 1))
0x751: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x752: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x753: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x754: Push(CvectorIndex(Stack[-6], 1))
0x755: Stack[-1] = (int) 0
0x756: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x757: Pop(0); Push(Stack[-6] | Stack[-6]);
0x758: Pop(1); Push(Sqrt(Stack[-1]))
0x759: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x75a: Stack[-5] = -Stack[-6]; Pop(0);
0x75b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x75c: PushEmpty(cvector, cvector)
0x75d: Push(CVector(0.0, 1.0, 0.0))
0x75e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x75f: Call2 0x860

0x760: Pop(1)
0x761: Push((int) 25)
0x762: Pop(2); Push(Stack[-2] * Stack[-1]);
0x763: Pop(2); Push(Stack[-2] + Stack[-1]);
0x764: Push(CVector(0.0, 10.0, 0.0))
0x765: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x766: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x767: @ IsOverrideActive(Stack[-2])
0x768: Pop(0)
0x769: Push(Stack[-2])
0x76a: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76b: Stack[-21] = (bool) 0
0x76c: Return(); Pop(18)

0x76d: @ StopWorld()
0x76e: Pop(0)
0x76f: Push((bool) 1)
0x770: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x771: Pop(1)
0x772: Push(CvectorIndex(Stack[-4], 0))
0x773: Push(CvectorIndex(Stack[-5], 2))
0x774: @ Rotate(Stack[-2], Stack[-1])
0x775: Pop(2)
0x776: PushEmpty(bool)
0x777: Call2 0x8bd

0x778: Pop(0)
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: GOTO 0x783

0x77b: Push("head")
0x77c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x77d: Pop(1)
0x77e: Push(Stack[-1])
0x77f: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x780: Push("head")
0x781: @ LookAsyncCamera(Stack[-1])
0x782: Pop(1)
0x783: @ CameraWaitForPlayFinish()
0x784: Pop(0)
0x785: @ ResumeWorld()
0x786: Pop(0)
0x787: Stack[-21] = (bool) 1
0x788: Return(); Pop(18)

0x789: PushEmpty(bool, bool)
0x78a: Push((bool) 1)
0x78b: @ CameraSwitchToNormal(Stack[-1])
0x78c: Pop(1)
0x78d: PushEmpty(bool)
0x78e: Call2 0x8bd

0x78f: Pop(0)
0x790: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x791: GOTO 0x79a

0x792: Push("head")
0x793: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x794: Pop(1)
0x795: Push(Stack[-1])
0x796: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x797: Push("head")
0x798: @ UnlookAsync(Stack[-1])
0x799: Pop(1)
0x79a: Return(); Pop(2)

0x79b: PushEmpty(int, int, int, int)
0x79c: Push("voice_common")
0x79d: @ GetVariable(Stack[-1], Stack[-3])
0x79e: Pop(1)
0x79f: Push(Stack[-2])
0x7a0: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7a1: PushEmpty(bool, object)
0x7a2: Stack[-1] = Stack[-7]
0x7a3: Call2 0x7d5

0x7a4: Pop(1)
0x7a5: Pop(1); Push((bool) Stack[-1] == 0)
0x7a6: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7a7: PushEmpty(bool, object)
0x7a8: Stack[-1] = Stack[-7]
0x7a9: Call2 0x7fa

0x7aa: Pop(1)
0x7ab: Pop(1); Push((bool) Stack[-1] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ad: Stack[-6] = (bool) 0
0x7ae: Return(); Pop(4)

0x7af: Push((int) 2)
0x7b0: @ irand(Stack[-2], Stack[-1])
0x7b1: Pop(1)
0x7b2: Push(Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7bc; Pop(1)

0x7b4: Push("voice_common")
0x7b5: Push((int) 1)
0x7b6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7b7: Push((int) 3)
0x7b8: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7b9: @ SetVariable(Stack[-2], Stack[-1])
0x7ba: Pop(2)
0x7bb: GOTO 0x7c0

0x7bc: Push("voice_common")
0x7bd: Push((int) 0)
0x7be: @ SetVariable(Stack[-2], Stack[-1])
0x7bf: Pop(2)
0x7c0: GOTO 0x7d3

0x7c1: PushEmpty(bool, object)
0x7c2: Stack[-1] = Stack[-7]
0x7c3: Call2 0x7fa

0x7c4: Pop(1)
0x7c5: Pop(1); Push((bool) Stack[-1] == 0)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7c7: PushEmpty(bool, object)
0x7c8: Stack[-1] = Stack[-7]
0x7c9: Call2 0x7d5

0x7ca: Pop(1)
0x7cb: Pop(1); Push((bool) Stack[-1] == 0)
0x7cc: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cd: Stack[-6] = (bool) 0
0x7ce: Return(); Pop(4)

0x7cf: Push("voice_common")
0x7d0: Push((int) 1)
0x7d1: @ SetVariable(Stack[-2], Stack[-1])
0x7d2: Pop(2)
0x7d3: Stack[-6] = (bool) 1
0x7d4: Return(); Pop(4)

0x7d5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7d6: Stack[-5] = "c"
0x7d7: Stack[-4] = (int) 0
0x7d8: Push((int) 1)
0x7d9: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7da: Push((int) 1)
0x7db: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7dc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7dd: @@ HasProperty(Stack[-1], Stack[-4])
0x7de: Pop(1)
0x7df: Pop(0); Push((bool) Stack[-3] == 0)
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7e1: GOTO 0x7e5

0x7e2: Push((int) 1)
0x7e3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7e4: GOTO 0x7d8

0x7e5: Pop(0); Push((bool) Stack[-4] == 0)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7e7: Stack[-12] = (bool) 0
0x7e8: Return(); Pop(10)

0x7e9: Stack[-2] = (int) 0
0x7ea: Push((int) 1)
0x7eb: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x7ec: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ed: @ irand(Stack[-2], Stack[-4])
0x7ee: Pop(0)
0x7ef: Push((int) 1)
0x7f0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7f1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7f2: @@ GetProperty(Stack[-1], Stack[-2])
0x7f3: Pop(1)
0x7f4: PushEmpty(bool, string)
0x7f5: Stack[-1] = Stack[-3]
0x7f6: Call2 0x844

0x7f7: Stack[-14] = Stack[-2]
0x7f8: Pop(2)
0x7f9: Return(); Pop(10)

0x7fa: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7fb: Push("d")
0x7fc: PushEmpty(int)
0x7fd: Call2 0x88e

0x7fe: Pop(0)
0x7ff: Pop(2); Push(Stack[-2] + Stack[-1]);
0x800: Push("m")
0x801: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x802: Stack[-4] = (int) 0
0x803: Push((int) 1)
0x804: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x805: Push((int) 1)
0x806: Pop(1); Push(Stack[-5] + Stack[-1]);
0x807: Pop(1); Push(Stack[-6] + Stack[-1]);
0x808: @@ HasProperty(Stack[-1], Stack[-4])
0x809: Pop(1)
0x80a: Pop(0); Push((bool) Stack[-3] == 0)
0x80b: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80c: GOTO 0x810

0x80d: Push((int) 1)
0x80e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x80f: GOTO 0x803

0x810: Pop(0); Push((bool) Stack[-4] == 0)
0x811: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x812: Stack[-12] = (bool) 0
0x813: Return(); Pop(10)

0x814: Stack[-2] = (int) 0
0x815: Push((int) 1)
0x816: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x817: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x818: @ irand(Stack[-2], Stack[-4])
0x819: Pop(0)
0x81a: Push((int) 1)
0x81b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x81c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x81d: @@ GetProperty(Stack[-1], Stack[-2])
0x81e: Pop(1)
0x81f: PushEmpty(bool, string)
0x820: Stack[-1] = Stack[-3]
0x821: Call2 0x844

0x822: Stack[-14] = Stack[-2]
0x823: Pop(2)
0x824: Return(); Pop(10)

0x825: PushEmpty(bool, float, float, bool, float, float)
0x826: @ lshHasAnimation(Stack[-3], Stack[-7])
0x827: Pop(0)
0x828: Push(Stack[-3])
0x829: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x82a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x82b: Pop(0)
0x82c: Push((bool) 0)
0x82d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x82e: Pop(1)
0x82f: GOTO 0x834

0x830: Push("Can't find lsh animation : ")
0x831: Pop(1); Push(Stack[-1] + Stack[-8]);
0x832: @ Trace(Stack[-1])
0x833: Pop(1)
0x834: Return(); Pop(6)

0x835: PushEmpty(bool, float, float, bool, float, float)
0x836: @ lshHasAnimation(Stack[-3], Stack[-8])
0x837: Pop(0)
0x838: Push(Stack[-3])
0x839: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x83b: Pop(0)
0x83c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x83d: Pop(0)
0x83e: GOTO 0x843

0x83f: Push("Can't find lsh animation : ")
0x840: Pop(1); Push(Stack[-1] + Stack[-9]);
0x841: @ Trace(Stack[-1])
0x842: Pop(1)
0x843: Return(); Pop(6)

0x844: PushEmpty(bool, bool)
0x845: PushEmpty(bool)
0x846: Call2 0x8bd

0x847: Pop(0)
0x848: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x849: @ lshHasSpeech(Stack[-1], Stack[-3])
0x84a: Pop(0)
0x84b: Push(Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84d: @ lshPlaySpeech(Stack[-3])
0x84e: Pop(0)
0x84f: Stack[-4] = (bool) 1
0x850: Return(); Pop(2)

0x851: Stack[-4] = (bool) 0
0x852: Return(); Pop(2)

0x853: PushEmpty(bool)
0x854: Call2 0x8bd

0x855: Pop(0)
0x856: IF (Stack[-1] == 0) GOTO 0x859; Pop(1)

0x857: @ lshStopSpeech()
0x858: Pop(0)
0x859: Return(); Pop(0)

0x85a: PushEmpty(object, object)
0x85b: @ self(Stack[-1])
0x85c: Pop(0)
0x85d: Stack[-3] = Stack[-1]
0x85e: Return(); Pop(2)

0x85f: Stack[-1] = 0
0x860: PushEmpty(float, float)
0x861: Pop(0); Push(Stack[-3] | Stack[-3]);
0x862: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x863: Push((float)0.0)
0x864: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x865: IF (Stack[-1] == 0) GOTO 0x868; Pop(1)

0x866: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x867: Return(); Pop(2)

0x868: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x869: Return(); Pop(2)

0x86a: PushEmpty(int, int)
0x86b: @ GetVariable(Stack[-3], Stack[-1])
0x86c: Pop(0)
0x86d: Stack[-4] = Stack[-1]
0x86e: Return(); Pop(2)

0x86f: PushEmpty(object, object)
0x870: @ CreateIntVector(Stack[-1])
0x871: Pop(0)
0x872: @@ add(Stack[-4])
0x873: Pop(0)
0x874: @@ add(Stack[-3])
0x875: Pop(0)
0x876: Push((int) 3)
0x877: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x878: Pop(1)
0x879: Return(); Pop(2)

0x87a: Stack[-1] = 0
0x87b: PushEmpty(int, int)
0x87c: PushEmpty(object, string, int)
0x87d: Stack[-3] = Stack[-7]
0x87e: Stack[-2] = "money"
0x87f: Stack[-1] = Stack[-6]
0x880: Call2 0x725

0x881: Pop(3)
0x882: Push((int) 0)
0x883: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x884: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x885: Push("Money")
0x886: @ GetInvItemByName(Stack[-2], Stack[-1])
0x887: Pop(1)
0x888: PushEmpty(int, int)
0x889: Stack[-2] = Stack[-3]
0x88a: Stack[-1] = Stack[-5]
0x88b: Call2 0x86f

0x88c: Pop(2)
0x88d: Return(); Pop(2)

0x88e: PushEmpty(float, float)
0x88f: @ GetGameTime(Stack[-1])
0x890: Pop(0)
0x891: Push((int) 1)
0x892: PushEmpty(int)
0x893: Push((int) 24)
0x894: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x895: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x896: Return(); Pop(2)

0x897: PushEmpty()
0x898: PushEmpty(int)
0x899: Call2 0x88e

0x89a: Pop(0)
0x89b: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x89c: Return(); Pop(0)

0x89d: PushEmpty(string, string)
0x89e: Stack[-1] = "idle"
0x89f: Push(Stack[-3])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a2; Pop(1)

0x8a1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8a2: Stack[-4] = Stack[-1]
0x8a3: Return(); Pop(2)

0x8a4: PushEmpty(int, bool, int, bool)
0x8a5: Stack[-2] = (int) 0
0x8a6: Push("all")
0x8a7: PushEmpty(string, int)
0x8a8: Stack[-1] = Stack[-5]
0x8a9: Call2 0x89d

0x8aa: Pop(1)
0x8ab: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8ac: Pop(2)
0x8ad: Pop(0); Push((bool) Stack[-1] == 0)
0x8ae: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8af: GOTO 0x8b3

0x8b0: Push((int) 1)
0x8b1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8b2: GOTO 0x8a6

0x8b3: Stack[-5] = Stack[-2]
0x8b4: Return(); Pop(4)

0x8b5: Stack[-1] = (int) 515530
0x8b6: Return(); Pop(0)

0x8b7: Stack[-1] = (int) 502856
0x8b8: Return(); Pop(0)

0x8b9: Stack[-1] = "ui/NPC_Anna.png"
0x8ba: Return(); Pop(0)

0x8bb: Stack[-1] = "ui/NPC_Anna_b.png"
0x8bc: Return(); Pop(0)

0x8bd: Stack[-1] = (bool) 1
0x8be: Return(); Pop(0)

0x8bf: PushEmpty()
0x8c0: Push("b5q01_1")
0x8c1: Push((int) 1)
0x8c2: @ SetVariable(Stack[-2], Stack[-1])
0x8c3: Pop(2)
0x8c4: Return(); Pop(0)

0x8c5: PushEmpty()
0x8c6: Push("b5q01_1")
0x8c7: Push((int) 1000)
0x8c8: @ SetVariable(Stack[-2], Stack[-1])
0x8c9: Pop(2)
0x8ca: Return(); Pop(0)

0x8cb: PushEmpty()
0x8cc: Push("money10000 is given")
0x8cd: @ Trace(Stack[-1])
0x8ce: Pop(1)
0x8cf: PushEmpty(object, int)
0x8d0: Stack[-2] = Stack[-4]
0x8d1: Stack[-1] = (int) 10000
0x8d2: Call2 0x87b

0x8d3: Pop(2)
0x8d4: Return(); Pop(0)

0x8d5: PushEmpty()
0x8d6: Push("playsound")
0x8d7: Push("givemoney")
0x8d8: @ TriggerWorld(Stack[-2], Stack[-1])
0x8d9: Pop(2)
0x8da: Return(); Pop(0)

0x8db: PushEmpty()
0x8dc: Push("oob6Anna1")
0x8dd: Push((int) 1)
0x8de: @ SetVariable(Stack[-2], Stack[-1])
0x8df: Pop(2)
0x8e0: Return(); Pop(0)

0x8e1: PushEmpty()
0x8e2: Push("money3000 is given")
0x8e3: @ Trace(Stack[-1])
0x8e4: Pop(1)
0x8e5: PushEmpty(object, int)
0x8e6: Stack[-2] = Stack[-4]
0x8e7: Stack[-1] = (int) 3000
0x8e8: Call2 0x87b

0x8e9: Pop(2)
0x8ea: Return(); Pop(0)

0x8eb: PushEmpty()
0x8ec: PushEmpty(int, string)
0x8ed: Stack[-1] = "oob6Anna1"
0x8ee: Call2 0x86a

0x8ef: Pop(1)
0x8f0: Push((int) 0)
0x8f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8f2: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f3: Stack[-2] = (bool) 1
0x8f4: Return(); Pop(0)

0x8f5: Stack[-2] = (bool) 0
0x8f6: Return(); Pop(0)

0x8f7: PushEmpty()
0x8f8: PushEmpty(int, string)
0x8f9: Stack[-1] = "b5q01TalkToVera"
0x8fa: Call2 0x86a

0x8fb: Pop(1)
0x8fc: Push((int) 1)
0x8fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8ff: Stack[-2] = (bool) 1
0x900: Return(); Pop(0)

0x901: Stack[-2] = (bool) 0
0x902: Return(); Pop(0)

0x903: PushEmpty()
0x904: PushEmpty(int, string)
0x905: Stack[-1] = "b5q01VeraDead"
0x906: Call2 0x86a

0x907: Pop(1)
0x908: Push((int) 0)
0x909: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x90b: Stack[-2] = (bool) 1
0x90c: Return(); Pop(0)

0x90d: Stack[-2] = (bool) 0
0x90e: Return(); Pop(0)

0x90f: PushEmpty()
0x910: PushEmpty(int, string)
0x911: Stack[-1] = "b5q01_1"
0x912: Call2 0x86a

0x913: Pop(1)
0x914: Push((int) 0)
0x915: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x916: IF (Stack[-1] == 0) GOTO 0x919; Pop(1)

0x917: Stack[-2] = (bool) 1
0x918: Return(); Pop(0)

0x919: Stack[-2] = (bool) 0
0x91a: Return(); Pop(0)

0x91b: PushEmpty()
0x91c: PushEmpty(int, string)
0x91d: Stack[-1] = "b5q01_1"
0x91e: Call2 0x86a

0x91f: Pop(1)
0x920: Push((int) 1)
0x921: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x922: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x923: Stack[-2] = (bool) 1
0x924: Return(); Pop(0)

0x925: Stack[-2] = (bool) 0
0x926: Return(); Pop(0)

0x927: PushEmpty(int, int)
0x928: Push("branch")
0x929: @ GetVariable(Stack[-1], Stack[-2])
0x92a: Pop(1)
0x92b: Push((int) 0)
0x92c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92d: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92e: Stack[-3] = (int) 1
0x92f: Return(); Pop(2)

0x930: GOTO 0x936

0x931: Push((int) 1)
0x932: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x936; Pop(1)

0x934: Stack[-3] = (int) 2
0x935: Return(); Pop(2)

0x936: Stack[-3] = (int) 3
0x937: Return(); Pop(2)

0x938: PushEmpty()
0x939: Push(GlobalVars[1])
0x93a: Pop(1); Push((bool) Stack[-1] == 0)
0x93b: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93c: PushEmpty(int, object)
0x93d: Stack[-1] = Stack[-3]
0x93e: Push(-2, 1); TaskCall(0)
0x93f: Call2 0x0

0x940: Pop(-2, 1); TaskReturn
0x941: Pop(2)
0x942: Push(GlobalVars[1])
0x943: Stack[-1] = (bool) 1
0x944: GlobalVars[1] = Stack[-1]; Pop(1)
0x945: PushEmpty(bool, int)
0x946: Stack[-1] = (int) 5
0x947: Call2 0x897

0x948: Pop(1)
0x949: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x94a: PushEmpty(int, object)
0x94b: Stack[-1] = Stack[-3]
0x94c: Push(-2, 1); TaskCall(2)
0x94d: Call2 0xe2

0x94e: Pop(-2, 1); TaskReturn
0x94f: Pop(2)
0x950: Return(); Pop(0)

0x951: PushEmpty(bool, int)
0x952: Stack[-1] = (int) 6
0x953: Call2 0x897

0x954: Pop(1)
0x955: IF (Stack[-1] == 0) GOTO 0x95d; Pop(1)

0x956: PushEmpty(int, object)
0x957: Stack[-1] = Stack[-3]
0x958: Push(-2, 1); TaskCall(4)
0x959: Call2 0x313

0x95a: Pop(-2, 1); TaskReturn
0x95b: Pop(2)
0x95c: Return(); Pop(0)

0x95d: PushEmpty(bool)
0x95e: Stack[-1] = (bool) 0
0x95f: PushEmpty(bool, int)
0x960: Stack[-1] = (int) 12
0x961: Call2 0x897

0x962: Pop(1)
0x963: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x964: Push(GlobalVars[2])
0x965: Pop(1); Push((bool) Stack[-1] == 0)
0x966: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x967: Stack[-1] = (bool) 1
0x968: IF (Stack[-1] == 0) GOTO 0x973; Pop(1)

0x969: PushEmpty(int, object)
0x96a: Stack[-1] = Stack[-3]
0x96b: Push(-2, 1); TaskCall(6)
0x96c: Call2 0x44c

0x96d: Pop(-2, 1); TaskReturn
0x96e: Pop(2)
0x96f: Push(GlobalVars[2])
0x970: Stack[-1] = (bool) 1
0x971: GlobalVars[2] = Stack[-1]; Pop(1)
0x972: Return(); Pop(0)

0x973: PushEmpty(int, object)
0x974: Stack[-1] = Stack[-3]
0x975: Push(-2, 1); TaskCall(8)
0x976: Call2 0x54f

0x977: Pop(-2, 1); TaskReturn
0x978: Pop(2)
0x979: Return(); Pop(0)

