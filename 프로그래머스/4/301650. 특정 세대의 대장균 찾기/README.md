# [level 4] 특정 세대의 대장균 찾기 - 301650 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/301650) 

### 성능 요약

메모리: undefined, 시간: 

### 구분

코딩테스트 연습 > SELECT

### 채점결과

합계: 100.0 / 100.0

### 제출 일자

2025년 03월 03일 19:28:19

### 문제 설명

<p style="user-select: auto !important;">대장균들은 일정 주기로 분화하며, 분화를 시작한 개체를 부모 개체, 분화가 되어 나온 개체를 자식 개체라고 합니다.<br style="user-select: auto !important;">
다음은 실험실에서 배양한 대장균들의 정보를 담은 <code style="user-select: auto !important;">ECOLI_DATA</code> 테이블입니다. <code style="user-select: auto !important;">ECOLI_DATA</code> 테이블의 구조는 다음과 같으며,  <code style="user-select: auto !important;">ID</code>, <code style="user-select: auto !important;">PARENT_ID</code>, <code style="user-select: auto !important;">SIZE_OF_COLONY</code>, <code style="user-select: auto !important;">DIFFERENTIATION_DATE</code>, <code style="user-select: auto !important;">GENOTYPE</code> 은 각각 대장균 개체의 ID, 부모 개체의 ID, 개체의 크기, 분화되어 나온 날짜, 개체의 형질을 나타냅니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">Column name</th>
<th style="user-select: auto !important;">Type</th>
<th style="user-select: auto !important;">Nullable</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">ID</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">PARENT_ID</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">TRUE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">SIZE_OF_COLONY</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">DIFFERENTIATION_DATE</td>
<td style="user-select: auto !important;">DATE</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">GENOTYPE</td>
<td style="user-select: auto !important;">INTEGER</td>
<td style="user-select: auto !important;">FALSE</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">최초의 대장균 개체의 <code style="user-select: auto !important;">PARENT_ID</code> 는 NULL 값입니다.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">문제</h5>

<p style="user-select: auto !important;">3세대의 대장균의 ID(<code style="user-select: auto !important;">ID</code>) 를 출력하는 SQL 문을 작성해주세요. 이때 결과는 대장균의 ID 에 대해 오름차순 정렬해주세요.</p>

<hr style="user-select: auto !important;">

<h5 style="user-select: auto !important;">예시</h5>

<p style="user-select: auto !important;">예를 들어 <code style="user-select: auto !important;">ECOLI_DATA</code> 테이블이 다음과 같다면</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">ID</th>
<th style="user-select: auto !important;">PARENT_ID</th>
<th style="user-select: auto !important;">SIZE_OF_COLONY</th>
<th style="user-select: auto !important;">DIFFERENTIATION_DATE</th>
<th style="user-select: auto !important;">GENOTYPE</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">NULL</td>
<td style="user-select: auto !important;">10</td>
<td style="user-select: auto !important;">2019/01/01</td>
<td style="user-select: auto !important;">5</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">NULL</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">2019/01/01</td>
<td style="user-select: auto !important;">3</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">100</td>
<td style="user-select: auto !important;">2020/01/01</td>
<td style="user-select: auto !important;">4</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">16</td>
<td style="user-select: auto !important;">2020/01/01</td>
<td style="user-select: auto !important;">4</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">5</td>
<td style="user-select: auto !important;">2</td>
<td style="user-select: auto !important;">17</td>
<td style="user-select: auto !important;">2020/01/01</td>
<td style="user-select: auto !important;">6</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">6</td>
<td style="user-select: auto !important;">4</td>
<td style="user-select: auto !important;">101</td>
<td style="user-select: auto !important;">2021/01/01</td>
<td style="user-select: auto !important;">22</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">7</td>
<td style="user-select: auto !important;">3</td>
<td style="user-select: auto !important;">101</td>
<td style="user-select: auto !important;">2022/01/01</td>
<td style="user-select: auto !important;">23</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">8</td>
<td style="user-select: auto !important;">6</td>
<td style="user-select: auto !important;">1</td>
<td style="user-select: auto !important;">2022/01/01</td>
<td style="user-select: auto !important;">27</td>
</tr>
</tbody>
      </table>
<p style="user-select: auto !important;">PARENT ID 가 NULL 인 ID 1, ID 2가 1 세대이며 ID 1에서 분화된 ID 3, ID 2에서 분화된 ID 4, ID 5 가 2 세대입니다. ID 4 에서 분화된 ID 6, ID 3에서 분화된 ID 7 이 3 세대이며 ID 6에서 분화된 ID 8은 4 세대입니다.</p>

<p style="user-select: auto !important;">따라서 결과를 ID 에 대해 오름차순 정렬하면 다음과 같아야 합니다.</p>
<table class="table" style="user-select: auto !important;">
        <thead style="user-select: auto !important;"><tr style="user-select: auto !important;">
<th style="user-select: auto !important;">ID</th>
</tr>
</thead>
        <tbody style="user-select: auto !important;"><tr style="user-select: auto !important;">
<td style="user-select: auto !important;">6</td>
</tr>
<tr style="user-select: auto !important;">
<td style="user-select: auto !important;">7</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges