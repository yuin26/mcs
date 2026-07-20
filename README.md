# Mission Computer Simulator (MCS)


Mission Computer Simulator (MCS) is a software-based simulation of an aircraft Mission Computer.

This project is developed to study embedded software architecture used in avionics systems and to build a practical C-language portfolio.

## Features

- Mission Scheduler
- Sensor Simulation
- Navigation Processing
- Fault Management
- Health Monitoring
- Logging
- Command Interface

## Tech Stack

- C99
- Linux
- GCC
- Makefile
- Git

## Project Status

🚧 Under Development

## 개발 일지

### DAY 1 - 프로젝트 구조 설계
- 프로젝트 디렉터리 구성
- GitHub 저장소 생성 및 연동
- 모듈 구조 설계 (`main`, `menu`, `mission`)

### DAY 2 - 메뉴 시스템 구현
- `main.c` 메인 루프 및 메뉴 처리 구현
- `menu.c` 메뉴 출력 및 사용자 입력 기능 구현
- `mission.c` 미션 기능 골격 구현
- 헤더 파일(`menu.h`, `mission.h`) 분리
- Makefile 작성 및 빌드 환경 구축

### DAY 3 - 미션 데이터 관리 구현
- 배열을 이용한 미션 데이터 관리 구현
- enum을 활용한 미션 상태 관리
- 미션 로드 및 상태 출력 기능 구현
- 특정 미션 시작/종료 기능 구현
- 입력 처리 함수 분리(`getMissionNumber()`)