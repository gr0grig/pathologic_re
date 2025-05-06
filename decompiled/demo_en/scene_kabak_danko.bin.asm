GlobalVarCount = 0

Strings:
	pt_andrei
	NPC_Andrei
	NPC_Danko_Andrei.xml
	add
	pt_dance
	pers_nudegirl_dance
	nudegirl_dance.xml
	pt_salesman
	pers_dohodyaga
	salesman_kabak.xml
	ps_kabak_alkash1
	cs_play_cycle.bin
	ps_kabak_alkash2
	ps_kabak_unosha1
	ps_kabak_woman1
	ps_kabak_worker1
	noandrei
	clear
	pt_fireplace
	scripted
	fireplace.xml
	GetItemCount
	GetItem
	GetItemAmount
	IsItemSelected
	RemoveAllItems
	size
	get
	AddItem
	SelectItem
	GetLocator
	Locator 
	 doesn't exist

Import:
	CreateIntVector (1 args)
	CreateObjectVector (1 args)
	Hold (0 args)
	GetLocator (3 args)
	AddActorByType (6 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	AddScriptedActor (6 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, bool, object, object, object, object) Params = 0
		EVENT_26 Op = 0x71 Vars = (string)
		EVENT_6 Op = 0x7c Vars = ()
		EVENT_5 Op = 0xc4 Vars = ()


0x0: @ CreateIntVector(Stack[-5])
0x1: Pop(0)
0x2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3: PushEmpty()
0x4: Call2 0x91

0x5: Pop(0)
0x6: Return(); Pop(0)

0x7: PushEmpty()
0x8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x9: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0xa: PushEmpty(object, object, string, string, string)
0xb: PushEmpty(object)
0xc: Call2 0x11f

0xd: Stack[-5] = Stack[-1]
0xe: Pop(1)
0xf: Stack[-3] = "pt_andrei"
0x10: Stack[-2] = "NPC_Andrei"
0x11: Stack[-1] = "NPC_Danko_Andrei.xml"
0x12: Call2 0x12b

0x13: Pop(4)
0x14: @@ add(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(object, object, string, string, string)
0x17: PushEmpty(object)
0x18: Call2 0x11f

0x19: Stack[-5] = Stack[-1]
0x1a: Pop(1)
0x1b: Stack[-3] = "pt_dance"
0x1c: Stack[-2] = "pers_nudegirl_dance"
0x1d: Stack[-1] = "nudegirl_dance.xml"
0x1e: Call2 0x12b

0x1f: Pop(4)
0x20: @@ add(Stack[-1])
0x21: Pop(1)
0x22: PushEmpty(object, object, string, string, string)
0x23: PushEmpty(object)
0x24: Call2 0x11f

0x25: Stack[-5] = Stack[-1]
0x26: Pop(1)
0x27: Stack[-3] = "pt_salesman"
0x28: Stack[-2] = "pers_dohodyaga"
0x29: Stack[-1] = "salesman_kabak.xml"
0x2a: Call2 0x12b

0x2b: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x2c: Pop(5)
0x2d: Push( Stack[4 + Tasks[-1].StackPointer] )
0x2e: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x2f: PushEmpty(object, int, object, object, object)
0x30: Stack[-5] = Stack[3 + Tasks[-1].StackPointer]
0x31: Stack[-4] = (int) 0
0x32: Stack[-3] = Stack[4 + Tasks[-1].StackPointer]
0x33: Stack[-2] = Stack[5 + Tasks[-1].StackPointer]
0x34: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x35: Call2 0xff

0x36: Pop(5)
0x37: @@ add(Stack[-3])
0x38: Pop(0)
0x39: PushEmpty(object, object, string, string)
0x3a: PushEmpty(object)
0x3b: Call2 0x11f

0x3c: Stack[-4] = Stack[-1]
0x3d: Pop(1)
0x3e: Stack[-2] = "ps_kabak_alkash1"
0x3f: Stack[-1] = "cs_play_cycle.bin"
0x40: Call2 0x13d

0x41: Pop(3)
0x42: @@ add(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(object, object, string, string)
0x45: PushEmpty(object)
0x46: Call2 0x11f

0x47: Stack[-4] = Stack[-1]
0x48: Pop(1)
0x49: Stack[-2] = "ps_kabak_alkash2"
0x4a: Stack[-1] = "cs_play_cycle.bin"
0x4b: Call2 0x13d

0x4c: Pop(3)
0x4d: @@ add(Stack[-1])
0x4e: Pop(1)
0x4f: PushEmpty(object, object, string, string)
0x50: PushEmpty(object)
0x51: Call2 0x11f

0x52: Stack[-4] = Stack[-1]
0x53: Pop(1)
0x54: Stack[-2] = "ps_kabak_unosha1"
0x55: Stack[-1] = "cs_play_cycle.bin"
0x56: Call2 0x13d

0x57: Pop(3)
0x58: @@ add(Stack[-1])
0x59: Pop(1)
0x5a: PushEmpty(object, object, string, string)
0x5b: PushEmpty(object)
0x5c: Call2 0x11f

0x5d: Stack[-4] = Stack[-1]
0x5e: Pop(1)
0x5f: Stack[-2] = "ps_kabak_woman1"
0x60: Stack[-1] = "cs_play_cycle.bin"
0x61: Call2 0x13d

0x62: Pop(3)
0x63: @@ add(Stack[-1])
0x64: Pop(1)
0x65: PushEmpty(object, object, string, string)
0x66: PushEmpty(object)
0x67: Call2 0x11f

0x68: Stack[-4] = Stack[-1]
0x69: Pop(1)
0x6a: Stack[-2] = "ps_kabak_worker1"
0x6b: Stack[-1] = "cs_play_cycle.bin"
0x6c: Call2 0x13d

0x6d: Pop(3)
0x6e: @@ add(Stack[-1])
0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty()
0x72: Push("noandrei")
0x73: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x75: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x76: GOTO 0x7b

0x77: Push("andrei")
0x78: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x7b: Return(); Pop(0)

0x7c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7d: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x7e: @@ clear()
0x7f: Pop(0)
0x80: PushEmpty(object, object, int, object)
0x81: Stack[-3] = Stack[3 + Tasks[-1].StackPointer]
0x82: Stack[-2] = (int) 0
0x83: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x84: Call2 0xd2

0x85: Stack[4 + Tasks[-1].StackPointer] = Stack[-4]
0x86: Pop(4)
0x87: PushEmpty(object, object, int)
0x88: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x89: Stack[-1] = (int) 0
0x8a: Call2 0xeb

0x8b: Stack[6 + Tasks[-1].StackPointer] = Stack[-3]
0x8c: Pop(3)
0x8d: PushEmpty()
0x8e: Call2 0xcb

0x8f: Pop(0)
0x90: Return(); Pop(0)

0x91: @ CreateObjectVector(Stack[-0])
0x92: Pop(0)
0x93: @ CreateObjectVector(Stack[-1])
0x94: Pop(0)
0x95: @ Hold()
0x96: Pop(0)
0x97: GOTO 0x95

0x98: Return(); Pop(0)

0x99: PushEmpty(int, string, bool, cvector, object, int, string, bool, cvector, object)
0x9a: Stack[-5] = (int) 1
0x9b: Push("pt_fireplace")
0x9c: Stack[-5] = Stack[-1] + Stack[-6]; Pop(1);
0x9d: @ GetLocator(Stack[-4], Stack[-3], Stack[-2])
0x9e: Pop(0)
0x9f: Pop(0); Push((bool) Stack[-3] == 0)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: GOTO 0xb0

0xa2: Push("scripted")
0xa3: PushEmpty(object)
0xa4: Call2 0x11f

0xa5: Pop(0)
0xa6: Push(CVector(0.0, 0.0, 1.0))
0xa7: Push("fireplace.xml")
0xa8: @ AddActorByType(Stack[-5], Stack[-4], Stack[-3], Stack[-6], Stack[-2], Stack[-1])
0xa9: Pop(4)
0xaa: @@ add(Stack[-1])
0xab: Pop(0)
0xac: Stack[-1] = 0
0xad: Push((int) 1)
0xae: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xaf: GOTO 0x9b

0xb0: Return(); Pop(10)

0xb1: PushEmpty(object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call2 0x7

0xb4: Pop(1)
0xb5: Return(); Pop(0)

0xb6: PushEmpty(object)
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x145

0xb9: Pop(1)
0xba: @@ clear()
0xbb: Pop(0)
0xbc: Return(); Pop(0)

0xbd: PushEmpty(object)
0xbe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Call2 0x145

0xc0: Pop(1)
0xc1: @@ clear()
0xc2: Pop(0)
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Call2 0x99

0xc6: Pop(0)
0xc7: PushEmpty()
0xc8: Call2 0xb1

0xc9: Pop(0)
0xca: Return(); Pop(0)

0xcb: PushEmpty()
0xcc: Call2 0xb6

0xcd: Pop(0)
0xce: PushEmpty()
0xcf: Call2 0xbd

0xd0: Pop(0)
0xd1: Return(); Pop(0)

0xd2: PushEmpty(object, int, int, object, int, object, int, int, object, int)
0xd3: PushEmpty(object)
0xd4: Call2 0x125

0xd5: Stack[-6] = Stack[-1]
0xd6: Pop(1)
0xd7: @@ GetItemCount(Stack[-4], Stack[-12])
0xd8: Pop(0)
0xd9: Stack[-3] = (int) 0
0xda: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0xdb: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xdc: @@ GetItem(Stack[-2], Stack[-3], Stack[-12])
0xdd: Pop(0)
0xde: @@ add(Stack[-2])
0xdf: Pop(0)
0xe0: @@ GetItemAmount(Stack[-1], Stack[-3], Stack[-12])
0xe1: Pop(0)
0xe2: @@ add(Stack[-1])
0xe3: Pop(0)
0xe4: Stack[-2] = 0
0xe5: Push((int) 1)
0xe6: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0xe7: GOTO 0xda

0xe8: Stack[-14] = Stack[-5]
0xe9: Return(); Pop(10)

0xea: Stack[-5] = 0
0xeb: PushEmpty(object, int, int, bool, object, int, int, bool)
0xec: @ CreateIntVector(Stack[-4])
0xed: Pop(0)
0xee: @@ GetItemCount(Stack[-3], Stack[-9])
0xef: Pop(0)
0xf0: Stack[-2] = (int) 0
0xf1: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0xf2: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xf3: @@ IsItemSelected(Stack[-1], Stack[-2], Stack[-9])
0xf4: Pop(0)
0xf5: Push(Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xf7: @@ add(Stack[-2])
0xf8: Pop(0)
0xf9: Push((int) 1)
0xfa: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xfb: GOTO 0xf1

0xfc: Stack[-11] = Stack[-4]
0xfd: Return(); Pop(8)

0xfe: Stack[-4] = 0
0xff: PushEmpty(int, int, object, int, bool, int, int, int, int, object, int, bool, int, int)
0x100: @@ RemoveAllItems(Stack[-18])
0x101: Pop(0)
0x102: @@ size(Stack[-7])
0x103: Pop(0)
0x104: Stack[-6] = (int) 0
0x105: Pop(0); Push((bool) Stack[-6] < Stack[-7])
0x106: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x107: @@ get(Stack[-5], Stack[-6])
0x108: Pop(0)
0x109: @@ get(Stack[-4], Stack[-6])
0x10a: Pop(0)
0x10b: @@ AddItem(Stack[-3], Stack[-5], Stack[-18], Stack[-4])
0x10c: Pop(0)
0x10d: Stack[-5] = 0
0x10e: Push((int) 1)
0x10f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x110: GOTO 0x105

0x111: @@ size(Stack[-7])
0x112: Pop(0)
0x113: Stack[-2] = (int) 0
0x114: Pop(0); Push((bool) Stack[-2] < Stack[-7])
0x115: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x116: @@ get(Stack[-1], Stack[-2])
0x117: Pop(0)
0x118: Push((bool) 1)
0x119: @@ SelectItem(Stack[-2], Stack[-1], Stack[-19])
0x11a: Pop(1)
0x11b: Push((int) 1)
0x11c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x11d: GOTO 0x114

0x11e: Return(); Pop(14)

0x11f: PushEmpty(object, object)
0x120: @ self(Stack[-1])
0x121: Pop(0)
0x122: Stack[-3] = Stack[-1]
0x123: Return(); Pop(2)

0x124: Stack[-1] = 0
0x125: PushEmpty(object, object)
0x126: @ CreateObjectVector(Stack[-1])
0x127: Pop(0)
0x128: Stack[-3] = Stack[-1]
0x129: Return(); Pop(2)

0x12a: Stack[-1] = 0
0x12b: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x12c: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0x12d: Pop(0)
0x12e: Pop(0); Push((bool) Stack[-4] == 0)
0x12f: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x130: Push("Locator ")
0x131: Pop(1); Push(Stack[-1] + Stack[-12]);
0x132: Push(" doesn't exist")
0x133: Pop(2); Push(Stack[-2] + Stack[-1]);
0x134: @ Trace(Stack[-1])
0x135: Pop(1)
0x136: Stack[-1] = 0
0x137: GOTO 0x13a

0x138: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x139: Pop(0)
0x13a: Stack[-13] = Stack[-1]
0x13b: Return(); Pop(8)

0x13c: Stack[-1] = 0
0x13d: PushEmpty(object, object)
0x13e: Push(CVector(0.0, 0.0, 0.0))
0x13f: Push(CVector(0.0, 0.0, 1.0))
0x140: @ AddScriptedActor(Stack[-3], Stack[-6], Stack[-5], Stack[-7], Stack[-2], Stack[-1])
0x141: Pop(2)
0x142: Stack[-6] = Stack[-1]
0x143: Return(); Pop(2)

0x144: Stack[-1] = 0
0x145: PushEmpty(int, int, object, int, int, object)
0x146: Push(Stack[-7])
0x147: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x148: @@ size(Stack[-3])
0x149: Pop(0)
0x14a: Stack[-2] = (int) 0
0x14b: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x14c: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x14d: @@ get(Stack[-1], Stack[-2])
0x14e: Pop(0)
0x14f: Push(Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x151: @ RemoveActor(Stack[-1])
0x152: Pop(0)
0x153: Stack[-1] = 0
0x154: Push((int) 1)
0x155: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x156: GOTO 0x14b

0x157: @@ clear()
0x158: Pop(0)
0x159: Return(); Pop(6)

