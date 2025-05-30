GlobalVarCount = 0

Strings:
	flashlight_off
	kerosene
	sleeping

Import:
	IsFlashlightOn (1 args)
	sync (0 args)
	rand (3 args)
	SetFlashlightColor (1 args)
	sync (1 args)
	SwitchFlashlight (1 args)
	PlaySound (1 args)
	RemoveItemByType (3 args)
	HasProperty (2 args)
	GetProperty (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(bool, bool)
0x1: @ IsFlashlightOn(Stack[-1])
0x2: Pop(0)
0x3: PushEmpty(bool)
0x4: Stack[-1] = (bool) 0
0x5: Push(Stack[-2])
0x6: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0x7: PushEmpty(bool)
0x8: Call2 0x5f

0x9: Pop(0)
0xa: Pop(1); Push((bool) Stack[-1] == 0)
0xb: IF (Stack[-1] == 0) GOTO 0xd; Pop(1)

0xc: Stack[-1] = (bool) 1
0xd: IF (Stack[-1] == 0) GOTO 0x11; Pop(1)

0xe: PushEmpty()
0xf: Call2 0x15

0x10: Pop(0)
0x11: @ sync()
0x12: Pop(0)
0x13: GOTO 0x1

0x14: Return(); Pop(2)

0x15: PushEmpty(float, float, float, float, bool, int, float, float, float, float, bool, int)
0x16: PushEmpty(bool, int)
0x17: Stack[-1] = (int) 1
0x18: Call2 0x59

0x19: Pop(1)
0x1a: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x1b: Stack[-6] = (int) 0
0x1c: Stack[-5] = (int) 0
0x1d: Push((int) 0)
0x1e: Pop(1); Push((bool) Stack[-6] <= Stack[-1])
0x1f: IF (Stack[-1] == 0) GOTO 0x2c; Pop(1)

0x20: Push((float)0.92)
0x21: Push((float)1.0)
0x22: @ rand(Stack[-6], Stack[-2], Stack[-1])
0x23: Pop(2)
0x24: Push(CVector(0.48039, 0.43333, 0.2902))
0x25: Pop(1); Push(Stack[-1] * Stack[-5]);
0x26: @ SetFlashlightColor(Stack[-1])
0x27: Pop(1)
0x28: Push((float)0.075)
0x29: Push((float)0.1)
0x2a: @ rand(Stack[-7], Stack[-2], Stack[-1])
0x2b: Pop(2)
0x2c: @ sync(Stack[-3])
0x2d: Pop(0)
0x2e: @ IsFlashlightOn(Stack[-2])
0x2f: Pop(0)
0x30: PushEmpty(bool)
0x31: Stack[-1] = (bool) 1
0x32: Pop(0); Push((bool) Stack[-3] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x34: PushEmpty(bool)
0x35: Call2 0x5f

0x36: Pop(0)
0x37: IF (Stack[-1] == 0) GOTO 0x39; Pop(1)

0x38: Stack[-1] = (bool) 0
0x39: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x3a: Return(); Pop(12)

0x3b: Stack[-5] = Stack[-5] - Stack[-3]; Pop(0);
0x3c: Stack[-6] = Stack[-6] + Stack[-3]; Pop(0);
0x3d: PushEmpty(int)
0x3e: Stack[-1] = Stack[-7]
0x3f: Push((int) 5)
0x40: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x41: IF (Stack[-1] == 0) GOTO 0x43; Pop(1)

0x42: GOTO 0x44

0x43: GOTO 0x1d

0x44: PushEmpty(int)
0x45: Stack[-1] = Stack[-7]
0x46: Push((int) 5)
0x47: Stack[-3] = Stack[-2] / Stack[-1]; Pop(2);
0x48: PushEmpty(bool, int)
0x49: Stack[-1] = Stack[-3]
0x4a: Call2 0x59

0x4b: Pop(1)
0x4c: Pop(1); Push((bool) Stack[-1] == 0)
0x4d: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4e: GOTO 0x52

0x4f: Push((int) 5)
0x50: Stack[-7] = Stack[-7] % Stack[-1]; Pop(1);
0x51: GOTO 0x1d

0x52: Push((bool) 0)
0x53: @ SwitchFlashlight(Stack[-1])
0x54: Pop(1)
0x55: Push("flashlight_off")
0x56: @ PlaySound(Stack[-1])
0x57: Pop(1)
0x58: Return(); Pop(12)

0x59: PushEmpty(int, int)
0x5a: Push("kerosene")
0x5b: @ RemoveItemByType(Stack[-2], Stack[-1], Stack[-4])
0x5c: Pop(1)
0x5d: Stack[-4] = Stack[-1] == Stack[-3]; Pop(0);
0x5e: Return(); Pop(2)

0x5f: PushEmpty(bool, bool, bool, bool)
0x60: Push("sleeping")
0x61: @ HasProperty(Stack[-1], Stack[-3])
0x62: Pop(1)
0x63: Pop(0); Push((bool) Stack[-2] == 0)
0x64: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x65: Stack[-5] = (bool) 0
0x66: Return(); Pop(4)

0x67: Push("sleeping")
0x68: @ GetProperty(Stack[-1], Stack[-2])
0x69: Pop(1)
0x6a: Stack[-5] = Stack[-1]
0x6b: Return(); Pop(4)

