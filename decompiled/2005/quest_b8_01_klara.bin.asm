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
	Grin
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Sly
	Smile
	Fear
	cleanup
	restore
	player
	Neutral
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	b8q01
	quest_b8_01
	fail
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png

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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x21c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb0 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x220 Vars = (string)
		EVENT_6 Op = 0x234 Vars = ()
		EVENT_5 Op = 0x241 Vars = ()
		EVENT_7 Op = 0x28a Vars = (int)
		EVENT_45 Op = 0x2cc Vars = (bool)
		EVENT_0 Op = 0x2d8 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x361

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x52c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x52a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x52e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x530

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x519

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
0x31: Call2 0x475

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3b6

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
0x48: Call2 0x3a5

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
0x56: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Grin"
0x59: Call2 0x9a

0x5a: Pop(1)
0x5b: Push((int) 521402)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x4ca

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 523899)
0x66: Push((int) 25181)
0x67: Push((int) 25179)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: PushEmpty(bool, object)
0x6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Call2 0x4ca

0x6d: Pop(1)
0x6e: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6f: Push((int) 521403)
0x70: Push((int) 22582)
0x71: Push((int) 22581)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: Push((int) 521406)
0x75: Push((int) -1)
0x76: Push((int) 22584)
0x77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78: Pop(3)
0x79: GOTO 0x7c

0x7a: Return(); Pop(0)

0x7b: GOTO 0x55

0x7c: PushEmpty(bool)
0x7d: Call2 0x532

0x7e: Pop(0)
0x7f: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x80: @ lshWaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: PushEmpty(string)
0x86: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x87: Call2 0x440

0x88: Pop(1)
0x89: GOTO 0x80

0x8a: GOTO 0x99

0x8b: Push("all")
0x8c: Push("idle")
0x8d: @ PlayAnimation(Stack[-2], Stack[-1])
0x8e: Pop(2)
0x8f: @ WaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: Push("all")
0x95: Push("idle")
0x96: @ PlayAnimation(Stack[-2], Stack[-1])
0x97: Pop(2)
0x98: GOTO 0x8f

0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: PushEmpty(bool)
0x9c: Call2 0x532

0x9d: Pop(0)
0x9e: Pop(1); Push((bool) Stack[-1] == 0)
0x9f: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0xa0: Return(); Pop(0)

0xa1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: PushEmpty(string, bool)
0xa5: Stack[-2] = Stack[-3]
0xa6: Push("")
0xa7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa8: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xa9: Stack[-1] = (bool) 0
0xaa: GOTO 0xac

0xab: Stack[-1] = (bool) 1
0xac: Call2 0x450

0xad: Pop(2)
0xae: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: Push((int) 1)
0xb2: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0xb3: PushEmpty()
0xb4: Call2 0x46e

0xb5: Pop(0)
0xb6: Push((int) 22583)
0xb7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb9: PushEmpty(object, object)
0xba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc: Call2 0x4b7

0xbd: Pop(2)
0xbe: Push((int) 25211)
0xbf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x4b7

0xc5: Pop(2)
0xc6: Push((int) 25212)
0xc7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x4b7

0xcd: Pop(2)
0xce: Push((int) 25197)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x4c0

0xd5: Pop(2)
0xd6: Push((int) 25198)
0xd7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd8: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd9: PushEmpty(object, object)
0xda: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc: Call2 0x4c0

0xdd: Pop(2)
0xde: Push((int) 25189)
0xdf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x4c0

0xe5: Pop(2)
0xe6: Push((int) 22580)
0xe7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xe9: PushEmpty(string)
0xea: Stack[-1] = "Grin"
0xeb: Call2 0x9a

0xec: Pop(1)
0xed: Push((int) 521402)
0xee: @@ SetMessage(Stack[-1])
0xef: Pop(1)
0xf0: @@ ClearReplies()
0xf1: Pop(0)
0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0x4ca

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf7: Push((int) 523899)
0xf8: Push((int) 25181)
0xf9: Push((int) 25179)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: PushEmpty(bool, object)
0xfd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Call2 0x4ca

0xff: Pop(1)
0x100: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x101: Push((int) 521403)
0x102: Push((int) 22582)
0x103: Push((int) 22581)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 521406)
0x107: Push((int) -1)
0x108: Push((int) 22584)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 22582)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Grin"
0x111: Call2 0x9a

0x112: Pop(1)
0x113: Push((int) 521404)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 523900)
0x119: Push((int) 25190)
0x11a: Push((int) 25180)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 523911)
0x11e: Push((int) 25192)
0x11f: Push((int) 25191)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Push((int) 523909)
0x123: Push((int) -1)
0x124: Push((int) 25189)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 25192)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Sly"
0x12d: Call2 0x9a

0x12e: Pop(1)
0x12f: Push((int) 523912)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 523913)
0x135: Push((int) 25190)
0x136: Push((int) 25193)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Return(); Pop(0)

0x13a: Push((int) 25190)
0x13b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Grin"
0x13f: Call2 0x9a

0x140: Pop(1)
0x141: Push((int) 523910)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 523914)
0x147: Push((int) 25196)
0x148: Push((int) 25195)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: Push((int) 25196)
0x14d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14e: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14f: PushEmpty(string)
0x150: Stack[-1] = "Smile"
0x151: Call2 0x9a

0x152: Pop(1)
0x153: Push((int) 523915)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 523916)
0x159: Push((int) -1)
0x15a: Push((int) 25197)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 523917)
0x15e: Push((int) -1)
0x15f: Push((int) 25198)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 25181)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Grin"
0x168: Call2 0x9a

0x169: Pop(1)
0x16a: Push((int) 523901)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 523902)
0x170: Push((int) 25183)
0x171: Push((int) 25182)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 25183)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Sly"
0x17a: Call2 0x9a

0x17b: Pop(1)
0x17c: Push((int) 523903)
0x17d: @@ SetMessage(Stack[-1])
0x17e: Pop(1)
0x17f: @@ ClearReplies()
0x180: Pop(0)
0x181: Push((int) 523904)
0x182: Push((int) 25185)
0x183: Push((int) 25184)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Push((int) 523918)
0x187: Push((int) 25200)
0x188: Push((int) 25199)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Return(); Pop(0)

0x18c: Push((int) 25200)
0x18d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18e: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x18f: PushEmpty(string)
0x190: Stack[-1] = "Smile"
0x191: Call2 0x9a

0x192: Pop(1)
0x193: Push((int) 523919)
0x194: @@ SetMessage(Stack[-1])
0x195: Pop(1)
0x196: @@ ClearReplies()
0x197: Pop(0)
0x198: Push((int) 523920)
0x199: Push((int) 25196)
0x19a: Push((int) 25201)
0x19b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19c: Pop(3)
0x19d: Return(); Pop(0)

0x19e: Push((int) 25185)
0x19f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a1: PushEmpty(string)
0x1a2: Stack[-1] = "Sly"
0x1a3: Call2 0x9a

0x1a4: Pop(1)
0x1a5: Push((int) 523905)
0x1a6: @@ SetMessage(Stack[-1])
0x1a7: Pop(1)
0x1a8: @@ ClearReplies()
0x1a9: Pop(0)
0x1aa: Push((int) 523906)
0x1ab: Push((int) 25187)
0x1ac: Push((int) 25186)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Push((int) 523921)
0x1b0: Push((int) 25204)
0x1b1: Push((int) 25203)
0x1b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b3: Pop(3)
0x1b4: Return(); Pop(0)

0x1b5: Push((int) 25204)
0x1b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b7: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Grin"
0x1ba: Call2 0x9a

0x1bb: Pop(1)
0x1bc: Push((int) 523922)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: Push((int) 523923)
0x1c2: Push((int) 25200)
0x1c3: Push((int) 25205)
0x1c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c5: Pop(3)
0x1c6: Return(); Pop(0)

0x1c7: Push((int) 25187)
0x1c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c9: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1ca: PushEmpty(string)
0x1cb: Stack[-1] = "Grin"
0x1cc: Call2 0x9a

0x1cd: Pop(1)
0x1ce: Push((int) 523907)
0x1cf: @@ SetMessage(Stack[-1])
0x1d0: Pop(1)
0x1d1: @@ ClearReplies()
0x1d2: Pop(0)
0x1d3: Push((int) 523924)
0x1d4: Push((int) 25208)
0x1d5: Push((int) 25207)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Push((int) 523926)
0x1d9: Push((int) 25210)
0x1da: Push((int) 25209)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: Return(); Pop(0)

0x1de: Push((int) 25210)
0x1df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1e1: PushEmpty(string)
0x1e2: Stack[-1] = "Grin"
0x1e3: Call2 0x9a

0x1e4: Pop(1)
0x1e5: Push((int) 523927)
0x1e6: @@ SetMessage(Stack[-1])
0x1e7: Pop(1)
0x1e8: @@ ClearReplies()
0x1e9: Pop(0)
0x1ea: Push((int) 523928)
0x1eb: Push((int) -1)
0x1ec: Push((int) 25211)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Push((int) 523929)
0x1f0: Push((int) -1)
0x1f1: Push((int) 25212)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: Return(); Pop(0)

0x1f5: Push((int) 25208)
0x1f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f8: PushEmpty(string)
0x1f9: Stack[-1] = "Fear"
0x1fa: Call2 0x9a

0x1fb: Pop(1)
0x1fc: Push((int) 523925)
0x1fd: @@ SetMessage(Stack[-1])
0x1fe: Pop(1)
0x1ff: @@ ClearReplies()
0x200: Pop(0)
0x201: Push((int) 521405)
0x202: Push((int) -1)
0x203: Push((int) 22583)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x208: PushEmpty(bool)
0x209: Call2 0x532

0x20a: Pop(0)
0x20b: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20c: @ lshStopAnimation()
0x20d: Pop(0)
0x20e: GOTO 0x211

0x20f: @ StopAnimation()
0x210: Pop(0)
0x211: Return(); Pop(0)

0x212: GOTO 0xb1

0x213: Return(); Pop(0)

0x214: PushEmpty()
0x215: PushEmpty(int, object)
0x216: Stack[-1] = Stack[-3]
0x217: Push(-2, 1); TaskCall(0)
0x218: Call2 0x0

0x219: Pop(-2, 1); TaskReturn
0x21a: Pop(2)
0x21b: Return(); Pop(0)

0x21c: PushEmpty()
0x21d: Call2 0x245

0x21e: Pop(0)
0x21f: Return(); Pop(0)

0x220: PushEmpty(bool, bool)
0x221: Push("cleanup")
0x222: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x224: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x225: @ IsLoaded(Stack[-1])
0x226: Pop(0)
0x227: Pop(0); Push((bool) Stack[-1] == 0)
0x228: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x229: PushEmpty(object)
0x22a: Call2 0x475

0x22b: Pop(0)
0x22c: @ RemoveActor(Stack[-1])
0x22d: Pop(1)
0x22e: GOTO 0x233

0x22f: Push("restore")
0x230: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x232: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x233: Return(); Pop(2)

0x234: Push( Stack[1 + Tasks[-1].StackPointer] )
0x235: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x236: PushEmpty(object)
0x237: Call2 0x475

0x238: Pop(0)
0x239: @ RemoveActor(Stack[-1])
0x23a: Pop(1)
0x23b: @ Hold()
0x23c: Pop(0)
0x23d: PushEmpty()
0x23e: Call2 0x2b0

0x23f: Pop(0)
0x240: Return(); Pop(0)

0x241: PushEmpty()
0x242: Call2 0x2bf

0x243: Pop(0)
0x244: Return(); Pop(0)

0x245: PushEmpty(bool)
0x246: Call2 0x35c

0x247: Pop(0)
0x248: Pop(1); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x24a: @ Hold()
0x24b: Pop(0)
0x24c: @ GetDirection(Stack[-0])
0x24d: Pop(0)
0x24e: PushEmpty()
0x24f: Call2 0x2f5

0x250: Pop(0)
0x251: GOTO 0x24e

0x252: Return(); Pop(0)

0x253: PushEmpty(object, object)
0x254: Push("player")
0x255: @ FindActor(Stack[-2], Stack[-1])
0x256: Pop(1)
0x257: Pop(0); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x259: Stack[-3] = (bool) 0
0x25a: Return(); Pop(2)

0x25b: PushEmpty(bool, object)
0x25c: Stack[-1] = Stack[-3]
0x25d: Call2 0x353

0x25e: Stack[-5] = Stack[-2]
0x25f: Pop(2)
0x260: Return(); Pop(2)

0x261: Stack[-1] = 0
0x262: Push(CvectorIndex(Stack[-0], 0))
0x263: Push(CvectorIndex(Stack[-0], 2))
0x264: @ RotateAsync(Stack[-2], Stack[-1])
0x265: Pop(2)
0x266: Return(); Pop(0)

0x267: PushEmpty(object, bool, object, bool)
0x268: Push("player")
0x269: @ FindActor(Stack[-3], Stack[-1])
0x26a: Pop(1)
0x26b: Pop(0); Push((bool) Stack[-2] == 0)
0x26c: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26d: Stack[-5] = (bool) 0
0x26e: Return(); Pop(4)

0x26f: PushEmpty(float, object)
0x270: Stack[-1] = Stack[-4]
0x271: Call2 0x341

0x272: Pop(1)
0x273: Push((float)90000.0)
0x274: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x276: Stack[-5] = (bool) 0
0x277: Return(); Pop(4)

0x278: @ CanSee(Stack[-1], Stack[-2])
0x279: Pop(0)
0x27a: Stack[-5] = Stack[-1]
0x27b: Return(); Pop(4)

0x27c: Stack[-2] = 0
0x27d: PushEmpty(float, float)
0x27e: Push((int) 8)
0x27f: Push((int) 16)
0x280: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x281: Pop(2)
0x282: Push((int) 10)
0x283: @ SetTimer(Stack[-1], Stack[-2])
0x284: Pop(1)
0x285: Return(); Pop(2)

0x286: Push((int) 10)
0x287: @ KillTimer(Stack[-1])
0x288: Pop(1)
0x289: Return(); Pop(0)

0x28a: PushEmpty()
0x28b: Push((int) 10)
0x28c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x28d: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x28e: PushEmpty()
0x28f: Call2 0x286

0x290: Pop(0)
0x291: PushEmpty(bool)
0x292: Stack[-1] = (bool) 0
0x293: PushEmpty(bool)
0x294: Call2 0x35c

0x295: Pop(0)
0x296: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x297: PushEmpty(bool)
0x298: Call2 0x267

0x299: Pop(0)
0x29a: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29b: Stack[-1] = (bool) 1
0x29c: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x29d: PushEmpty(bool)
0x29e: Call2 0x253

0x29f: Pop(0)
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a1: PushEmpty(bool, object)
0x2a2: PushEmpty(object)
0x2a3: Call2 0x475

0x2a4: Stack[-2] = Stack[-1]
0x2a5: Pop(1)
0x2a6: Call2 0x3f0

0x2a7: Pop(2)
0x2a8: GOTO 0x2af

0x2a9: PushEmpty()
0x2aa: Call2 0x262

0x2ab: Pop(0)
0x2ac: PushEmpty()
0x2ad: Call2 0x27d

0x2ae: Pop(0)
0x2af: Return(); Pop(0)

0x2b0: PushEmpty()
0x2b1: Call2 0x33c

0x2b2: Pop(0)
0x2b3: PushEmpty()
0x2b4: Call2 0x286

0x2b5: Pop(0)
0x2b6: @ lshStopSpeech()
0x2b7: Pop(0)
0x2b8: @ lshStopAnimation()
0x2b9: Pop(0)
0x2ba: @ StopAsync()
0x2bb: Pop(0)
0x2bc: @ Hold()
0x2bd: Pop(0)
0x2be: Return(); Pop(0)

0x2bf: @ StopGroup0()
0x2c0: Pop(0)
0x2c1: PushEmpty()
0x2c2: Call2 0x286

0x2c3: Pop(0)
0x2c4: PushEmpty(string)
0x2c5: Stack[-1] = "Neutral"
0x2c6: Call2 0x440

0x2c7: Pop(1)
0x2c8: PushEmpty()
0x2c9: Call2 0x27d

0x2ca: Pop(0)
0x2cb: Return(); Pop(0)

0x2cc: PushEmpty()
0x2cd: Push(Stack[-1])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2cf: PushEmpty()
0x2d0: Call2 0x27d

0x2d1: Pop(0)
0x2d2: GOTO 0x2d7

0x2d3: PushEmpty(string)
0x2d4: Stack[-1] = "Neutral"
0x2d5: Call2 0x440

0x2d6: Pop(1)
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty(bool, bool)
0x2d9: @ IsOverrideActive(Stack[-1])
0x2da: Pop(0)
0x2db: Pop(0); Push((bool) Stack[-1] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2dd: EventDisable(0)
0x2de: PushEmpty()
0x2df: Call2 0x33c

0x2e0: Pop(0)
0x2e1: PushEmpty(bool, object)
0x2e2: Stack[-1] = Stack[-5]
0x2e3: Call2 0x353

0x2e4: Pop(2)
0x2e5: EventEnable(0)
0x2e6: PushEmpty(object)
0x2e7: Stack[-1] = Stack[-4]
0x2e8: Call2 0x214

0x2e9: Pop(1)
0x2ea: PushEmpty(string)
0x2eb: Stack[-1] = "Neutral"
0x2ec: Call2 0x440

0x2ed: Pop(1)
0x2ee: PushEmpty()
0x2ef: Call2 0x286

0x2f0: Pop(0)
0x2f1: PushEmpty()
0x2f2: Call2 0x27d

0x2f3: Pop(0)
0x2f4: Return(); Pop(2)

0x2f5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2f6: @ WaitForAnimEnd()
0x2f7: Pop(0)
0x2f8: PushEmpty(bool)
0x2f9: Call2 0x35c

0x2fa: Pop(0)
0x2fb: Pop(1); Push((bool) Stack[-1] == 0)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Return(); Pop(12)

0x2fe: PushEmpty(int)
0x2ff: Call2 0x4a6

0x300: Stack[-7] = Stack[-1]
0x301: Pop(1)
0x302: Stack[-5] = (int) 0
0x303: PushEmpty(bool)
0x304: Stack[-1] = (bool) 0
0x305: Push((int) 5)
0x306: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x308: PushEmpty(bool)
0x309: Call2 0x35c

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30c: Stack[-1] = (bool) 1
0x30d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x30e: Pop(0); Push((bool) Stack[-6] == 0)
0x30f: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x310: Push((int) 3)
0x311: @ Sleep(Stack[-1], Stack[-5])
0x312: Pop(1)
0x313: Pop(0); Push((bool) Stack[-4] == 0)
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: GOTO 0x337

0x316: GOTO 0x32c

0x317: @ irand(Stack[-3], Stack[-6])
0x318: Pop(0)
0x319: Push((int) 5)
0x31a: @ irand(Stack[-3], Stack[-1])
0x31b: Pop(1)
0x31c: Push((int) 0)
0x31d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Stack[-3] = (int) 0
0x320: Push("all")
0x321: PushEmpty(string, int)
0x322: Stack[-1] = Stack[-6]
0x323: Call2 0x49f

0x324: Pop(1)
0x325: @ PlayAnimation(Stack[-2], Stack[-1])
0x326: Pop(2)
0x327: @ WaitForAnimEnd(Stack[-1])
0x328: Pop(0)
0x329: Pop(0); Push((bool) Stack[-1] == 0)
0x32a: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x32b: GOTO 0x337

0x32c: PushEmpty(bool)
0x32d: Call2 0x33a

0x32e: Pop(0)
0x32f: Pop(1); Push((bool) Stack[-1] == 0)
0x330: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x331: GOTO 0x337

0x332: @ ResetAAS()
0x333: Pop(0)
0x334: Push((int) 1)
0x335: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x336: GOTO 0x303

0x337: @ ResetAAS()
0x338: Pop(0)
0x339: Return(); Pop(12)

0x33a: Stack[-1] = (bool) 1
0x33b: Return(); Pop(0)

0x33c: @ StopAnimation()
0x33d: Pop(0)
0x33e: @ StopGroup0()
0x33f: Pop(0)
0x340: Return(); Pop(0)

0x341: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x342: @ GetPosition(Stack[-3])
0x343: Pop(0)
0x344: @@ GetPosition(Stack[-2])
0x345: Pop(0)
0x346: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x347: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x348: Return(); Pop(6)

0x349: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x34a: @ GetPosition(Stack[-3])
0x34b: Pop(0)
0x34c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x34d: Push(CvectorIndex(Stack[-2], 0))
0x34e: Push(CvectorIndex(Stack[-3], 2))
0x34f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x350: Pop(2)
0x351: Stack[-8] = Stack[-1]
0x352: Return(); Pop(6)

0x353: PushEmpty(cvector, cvector)
0x354: @@ GetPosition(Stack[-1])
0x355: Pop(0)
0x356: PushEmpty(bool, cvector)
0x357: Stack[-1] = Stack[-3]
0x358: Call2 0x349

0x359: Stack[-6] = Stack[-2]
0x35a: Pop(2)
0x35b: Return(); Pop(2)

0x35c: PushEmpty(bool, bool)
0x35d: @ IsLoaded(Stack[-1])
0x35e: Pop(0)
0x35f: Stack[-3] = Stack[-1]
0x360: Return(); Pop(2)

0x361: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x362: @@ GetPosition(Stack[-8])
0x363: Pop(0)
0x364: @@ GetEyesHeight(Stack[-9])
0x365: Pop(0)
0x366: Push(CvectorIndex(Stack[-8], 1))
0x367: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x368: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x369: @ GetPosition(Stack[-7])
0x36a: Pop(0)
0x36b: @ GetEyesHeight(Stack[-9])
0x36c: Pop(0)
0x36d: Push(CvectorIndex(Stack[-7], 1))
0x36e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x36f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x370: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x371: Push(CvectorIndex(Stack[-6], 1))
0x372: Stack[-1] = (int) 0
0x373: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x374: Pop(0); Push(Stack[-6] | Stack[-6]);
0x375: Pop(1); Push(Sqrt(Stack[-1]))
0x376: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x377: Stack[-5] = -Stack[-6]; Pop(0);
0x378: Pop(0); Push(Stack[-6] * Stack[-19]);
0x379: PushEmpty(cvector, cvector)
0x37a: Push(CVector(0.0, 1.0, 0.0))
0x37b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x37c: Call2 0x47b

0x37d: Pop(1)
0x37e: Push((int) 25)
0x37f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x380: Pop(2); Push(Stack[-2] + Stack[-1]);
0x381: Push(CVector(0.0, 10.0, 0.0))
0x382: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x383: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x384: @ IsOverrideActive(Stack[-2])
0x385: Pop(0)
0x386: Push(Stack[-2])
0x387: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x388: Stack[-21] = (bool) 0
0x389: Return(); Pop(18)

0x38a: @ StopWorld()
0x38b: Pop(0)
0x38c: @ CameraTransit(Stack[-3], Stack[-5])
0x38d: Pop(0)
0x38e: Push(CvectorIndex(Stack[-4], 0))
0x38f: Push(CvectorIndex(Stack[-5], 2))
0x390: @ Rotate(Stack[-2], Stack[-1])
0x391: Pop(2)
0x392: PushEmpty(bool)
0x393: Call2 0x532

0x394: Pop(0)
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: GOTO 0x39f

0x397: Push("head")
0x398: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x399: Pop(1)
0x39a: Push(Stack[-1])
0x39b: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39c: Push("head")
0x39d: @ LookAsyncCamera(Stack[-1])
0x39e: Pop(1)
0x39f: @ CameraWaitForPlayFinish()
0x3a0: Pop(0)
0x3a1: @ ResumeWorld()
0x3a2: Pop(0)
0x3a3: Stack[-21] = (bool) 1
0x3a4: Return(); Pop(18)

0x3a5: PushEmpty(bool, bool)
0x3a6: @ CameraSwitchToNormal()
0x3a7: Pop(0)
0x3a8: PushEmpty(bool)
0x3a9: Call2 0x532

0x3aa: Pop(0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: GOTO 0x3b5

0x3ad: Push("head")
0x3ae: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3af: Pop(1)
0x3b0: Push(Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b2: Push("head")
0x3b3: @ UnlookAsync(Stack[-1])
0x3b4: Pop(1)
0x3b5: Return(); Pop(2)

0x3b6: PushEmpty(int, int, int, int)
0x3b7: Push("voice_common")
0x3b8: @ GetVariable(Stack[-1], Stack[-3])
0x3b9: Pop(1)
0x3ba: Push(Stack[-2])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3bc: PushEmpty(bool, object)
0x3bd: Stack[-1] = Stack[-7]
0x3be: Call2 0x3f0

0x3bf: Pop(1)
0x3c0: Pop(1); Push((bool) Stack[-1] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c2: PushEmpty(bool, object)
0x3c3: Stack[-1] = Stack[-7]
0x3c4: Call2 0x415

0x3c5: Pop(1)
0x3c6: Pop(1); Push((bool) Stack[-1] == 0)
0x3c7: IF (Stack[-1] == 0) GOTO 0x3ca; Pop(1)

0x3c8: Stack[-6] = (bool) 0
0x3c9: Return(); Pop(4)

0x3ca: Push((int) 2)
0x3cb: @ irand(Stack[-2], Stack[-1])
0x3cc: Pop(1)
0x3cd: Push(Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3cf: Push("voice_common")
0x3d0: Push((int) 1)
0x3d1: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3d2: Push((int) 3)
0x3d3: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3d4: @ SetVariable(Stack[-2], Stack[-1])
0x3d5: Pop(2)
0x3d6: GOTO 0x3db

0x3d7: Push("voice_common")
0x3d8: Push((int) 0)
0x3d9: @ SetVariable(Stack[-2], Stack[-1])
0x3da: Pop(2)
0x3db: GOTO 0x3ee

0x3dc: PushEmpty(bool, object)
0x3dd: Stack[-1] = Stack[-7]
0x3de: Call2 0x415

0x3df: Pop(1)
0x3e0: Pop(1); Push((bool) Stack[-1] == 0)
0x3e1: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e2: PushEmpty(bool, object)
0x3e3: Stack[-1] = Stack[-7]
0x3e4: Call2 0x3f0

0x3e5: Pop(1)
0x3e6: Pop(1); Push((bool) Stack[-1] == 0)
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e8: Stack[-6] = (bool) 0
0x3e9: Return(); Pop(4)

0x3ea: Push("voice_common")
0x3eb: Push((int) 1)
0x3ec: @ SetVariable(Stack[-2], Stack[-1])
0x3ed: Pop(2)
0x3ee: Stack[-6] = (bool) 1
0x3ef: Return(); Pop(4)

0x3f0: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3f1: Stack[-5] = "c"
0x3f2: Stack[-4] = (int) 0
0x3f3: Push((int) 1)
0x3f4: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3f5: Push((int) 1)
0x3f6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f8: @@ HasProperty(Stack[-1], Stack[-4])
0x3f9: Pop(1)
0x3fa: Pop(0); Push((bool) Stack[-3] == 0)
0x3fb: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fc: GOTO 0x400

0x3fd: Push((int) 1)
0x3fe: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3ff: GOTO 0x3f3

0x400: Pop(0); Push((bool) Stack[-4] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-12] = (bool) 0
0x403: Return(); Pop(10)

0x404: Stack[-2] = (int) 0
0x405: Push((int) 1)
0x406: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x408: @ irand(Stack[-2], Stack[-4])
0x409: Pop(0)
0x40a: Push((int) 1)
0x40b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x40c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x40d: @@ GetProperty(Stack[-1], Stack[-2])
0x40e: Pop(1)
0x40f: PushEmpty(bool, string)
0x410: Stack[-1] = Stack[-3]
0x411: Call2 0x45f

0x412: Stack[-14] = Stack[-2]
0x413: Pop(2)
0x414: Return(); Pop(10)

0x415: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x416: Push("d")
0x417: PushEmpty(int)
0x418: Call2 0x496

0x419: Pop(0)
0x41a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x41b: Push("m")
0x41c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x41d: Stack[-4] = (int) 0
0x41e: Push((int) 1)
0x41f: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x420: Push((int) 1)
0x421: Pop(1); Push(Stack[-5] + Stack[-1]);
0x422: Pop(1); Push(Stack[-6] + Stack[-1]);
0x423: @@ HasProperty(Stack[-1], Stack[-4])
0x424: Pop(1)
0x425: Pop(0); Push((bool) Stack[-3] == 0)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: GOTO 0x42b

0x428: Push((int) 1)
0x429: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x42a: GOTO 0x41e

0x42b: Pop(0); Push((bool) Stack[-4] == 0)
0x42c: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42d: Stack[-12] = (bool) 0
0x42e: Return(); Pop(10)

0x42f: Stack[-2] = (int) 0
0x430: Push((int) 1)
0x431: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x433: @ irand(Stack[-2], Stack[-4])
0x434: Pop(0)
0x435: Push((int) 1)
0x436: Pop(1); Push(Stack[-3] + Stack[-1]);
0x437: Pop(1); Push(Stack[-6] + Stack[-1]);
0x438: @@ GetProperty(Stack[-1], Stack[-2])
0x439: Pop(1)
0x43a: PushEmpty(bool, string)
0x43b: Stack[-1] = Stack[-3]
0x43c: Call2 0x45f

0x43d: Stack[-14] = Stack[-2]
0x43e: Pop(2)
0x43f: Return(); Pop(10)

0x440: PushEmpty(bool, float, float, bool, float, float)
0x441: @ lshHasAnimation(Stack[-3], Stack[-7])
0x442: Pop(0)
0x443: Push(Stack[-3])
0x444: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x445: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x446: Pop(0)
0x447: Push((bool) 0)
0x448: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x449: Pop(1)
0x44a: GOTO 0x44f

0x44b: Push("Can't find lsh animation : ")
0x44c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x44d: @ Trace(Stack[-1])
0x44e: Pop(1)
0x44f: Return(); Pop(6)

0x450: PushEmpty(bool, float, float, bool, float, float)
0x451: @ lshHasAnimation(Stack[-3], Stack[-8])
0x452: Pop(0)
0x453: Push(Stack[-3])
0x454: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x455: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x456: Pop(0)
0x457: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x458: Pop(0)
0x459: GOTO 0x45e

0x45a: Push("Can't find lsh animation : ")
0x45b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x45c: @ Trace(Stack[-1])
0x45d: Pop(1)
0x45e: Return(); Pop(6)

0x45f: PushEmpty(bool, bool)
0x460: PushEmpty(bool)
0x461: Call2 0x532

0x462: Pop(0)
0x463: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x464: @ lshHasSpeech(Stack[-1], Stack[-3])
0x465: Pop(0)
0x466: Push(Stack[-1])
0x467: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x468: @ lshPlaySpeech(Stack[-3])
0x469: Pop(0)
0x46a: Stack[-4] = (bool) 1
0x46b: Return(); Pop(2)

0x46c: Stack[-4] = (bool) 0
0x46d: Return(); Pop(2)

0x46e: PushEmpty(bool)
0x46f: Call2 0x532

0x470: Pop(0)
0x471: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x472: @ lshStopSpeech()
0x473: Pop(0)
0x474: Return(); Pop(0)

0x475: PushEmpty(object, object)
0x476: @ self(Stack[-1])
0x477: Pop(0)
0x478: Stack[-3] = Stack[-1]
0x479: Return(); Pop(2)

0x47a: Stack[-1] = 0
0x47b: PushEmpty(float, float)
0x47c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x47d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x47e: Push((float)0.0)
0x47f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x480: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x481: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x482: Return(); Pop(2)

0x483: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x484: Return(); Pop(2)

0x485: PushEmpty(int, int)
0x486: @ GetVariable(Stack[-3], Stack[-1])
0x487: Pop(0)
0x488: Stack[-4] = Stack[-1]
0x489: Return(); Pop(2)

0x48a: PushEmpty(object, object)
0x48b: @ FindActor(Stack[-1], Stack[-4])
0x48c: Pop(0)
0x48d: Pop(0); Push((bool) Stack[-1] == 0)
0x48e: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x48f: Stack[-5] = (bool) 0
0x490: Return(); Pop(2)

0x491: @ Trigger(Stack[-1], Stack[-3])
0x492: Pop(0)
0x493: Stack[-5] = (bool) 1
0x494: Return(); Pop(2)

0x495: Stack[-1] = 0
0x496: PushEmpty(float, float)
0x497: @ GetGameTime(Stack[-1])
0x498: Pop(0)
0x499: Push((int) 1)
0x49a: PushEmpty(int)
0x49b: Push((int) 24)
0x49c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x49d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x49e: Return(); Pop(2)

0x49f: PushEmpty(string, string)
0x4a0: Stack[-1] = "idle"
0x4a1: Push(Stack[-3])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4a4: Stack[-4] = Stack[-1]
0x4a5: Return(); Pop(2)

0x4a6: PushEmpty(int, bool, int, bool)
0x4a7: Stack[-2] = (int) 0
0x4a8: Push("all")
0x4a9: PushEmpty(string, int)
0x4aa: Stack[-1] = Stack[-5]
0x4ab: Call2 0x49f

0x4ac: Pop(1)
0x4ad: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(2)
0x4af: Pop(0); Push((bool) Stack[-1] == 0)
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4b1: GOTO 0x4b5

0x4b2: Push((int) 1)
0x4b3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4b4: GOTO 0x4a8

0x4b5: Stack[-5] = Stack[-2]
0x4b6: Return(); Pop(4)

0x4b7: PushEmpty()
0x4b8: Push("b8q01")
0x4b9: Push((int) 3)
0x4ba: @ SetVariable(Stack[-2], Stack[-1])
0x4bb: Pop(2)
0x4bc: PushEmpty()
0x4bd: Call2 0x4e3

0x4be: Pop(0)
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty()
0x4c1: PushEmpty()
0x4c2: Call2 0x4d6

0x4c3: Pop(0)
0x4c4: PushEmpty(bool, string, string)
0x4c5: Stack[-2] = "quest_b8_01"
0x4c6: Stack[-1] = "fail"
0x4c7: Call2 0x48a

0x4c8: Pop(3)
0x4c9: Return(); Pop(0)

0x4ca: PushEmpty()
0x4cb: PushEmpty(int, string)
0x4cc: Stack[-1] = "b8q01"
0x4cd: Call2 0x485

0x4ce: Pop(1)
0x4cf: Push((int) 2)
0x4d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-2] = (bool) 1
0x4d3: Return(); Pop(0)

0x4d4: Stack[-2] = (bool) 0
0x4d5: Return(); Pop(0)

0x4d6: PushEmpty(object, object)
0x4d7: Push((int) 693)
0x4d8: Push((int) 1)
0x4d9: Push((int) 535229)
0x4da: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4db: Pop(3)
0x4dc: PushEmpty(bool, object, int)
0x4dd: Stack[-2] = Stack[-4]
0x4de: Stack[-1] = (int) 284
0x4df: Call2 0x4fd

0x4e0: Pop(3)
0x4e1: Return(); Pop(2)

0x4e2: Stack[-1] = 0
0x4e3: PushEmpty(object, object)
0x4e4: Push((int) 287)
0x4e5: Push((int) 1)
0x4e6: Push((int) 521458)
0x4e7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4e8: Pop(3)
0x4e9: PushEmpty(bool, object, int)
0x4ea: Stack[-2] = Stack[-4]
0x4eb: Stack[-1] = (int) 284
0x4ec: Call2 0x4fd

0x4ed: Pop(3)
0x4ee: Return(); Pop(2)

0x4ef: Stack[-1] = 0
0x4f0: PushEmpty(object, object)
0x4f1: @ GetDiaryRoot(Stack[-1])
0x4f2: Pop(0)
0x4f3: Pop(0); Push((bool) Stack[-1] == 0)
0x4f4: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f5: Push("Can't retrieve diary root")
0x4f6: @ Trace(Stack[-1])
0x4f7: Pop(1)
0x4f8: Stack[-3] = (bool) 0
0x4f9: Return(); Pop(2)

0x4fa: Stack[-3] = Stack[-1]
0x4fb: Return(); Pop(2)

0x4fc: Stack[-1] = 0
0x4fd: PushEmpty(object, object, int, object, object, int)
0x4fe: PushEmpty(object)
0x4ff: Call2 0x4f0

0x500: Stack[-4] = Stack[-1]
0x501: Pop(1)
0x502: @@ Find(Stack[-7], Stack[-2])
0x503: Pop(0)
0x504: Pop(0); Push((bool) Stack[-2] == 0)
0x505: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x506: Push("Can't find diary parent with id: ")
0x507: Pop(1); Push(Stack[-1] + Stack[-8]);
0x508: @ Trace(Stack[-1])
0x509: Pop(1)
0x50a: Stack[-9] = (bool) 0
0x50b: Return(); Pop(6)

0x50c: @@ AddChild(Stack[-8])
0x50d: Pop(0)
0x50e: Push((int) 7)
0x50f: @ SendWorldWndMessage(Stack[-1])
0x510: Pop(1)
0x511: @@ GetCategory(Stack[-1])
0x512: Pop(0)
0x513: @ SetDiarySection(Stack[-1])
0x514: Pop(0)
0x515: Stack[-9] = (bool) 0
0x516: Return(); Pop(6)

0x517: Stack[-2] = 0
0x518: Stack[-3] = 0
0x519: PushEmpty(int, int)
0x51a: Push("branch")
0x51b: @ GetVariable(Stack[-1], Stack[-2])
0x51c: Pop(1)
0x51d: Push((int) 0)
0x51e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x51f: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x520: Stack[-3] = (int) 1
0x521: Return(); Pop(2)

0x522: GOTO 0x528

0x523: Push((int) 1)
0x524: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x525: IF (Stack[-1] == 0) GOTO 0x528; Pop(1)

0x526: Stack[-3] = (int) 2
0x527: Return(); Pop(2)

0x528: Stack[-3] = (int) 3
0x529: Return(); Pop(2)

0x52a: Stack[-1] = (int) 515540
0x52b: Return(); Pop(0)

0x52c: Stack[-1] = (int) 502865
0x52d: Return(); Pop(0)

0x52e: Stack[-1] = "ui/NPC_Klara.png"
0x52f: Return(); Pop(0)

0x530: Stack[-1] = "ui/NPC_Klara_b.png"
0x531: Return(); Pop(0)

0x532: Stack[-1] = (bool) 1
0x533: Return(); Pop(0)

