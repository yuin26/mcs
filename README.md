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
